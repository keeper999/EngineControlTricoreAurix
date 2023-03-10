/******************************************************************************/
/* !Layer           : MCAL                                                    */
/* !Component       : MCAL                                                    */
/* !Description     :                                                         */
/*                                                                            */
/* !File            : MCAL.c                                                  */
/* !Description     : MCAL APIs                                               */
/*                                                                            */
/* !Reference       :                                                         */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT VALEO all rights reserved                                        */
/******************************************************************************/
/* Dimension Informations
 * %PCMS_HEADER_SUBSTITUTION_START:%
 * The PID has this format: <Product ID>:<Item ID>.<Variant>-<Item Type>;<Revision>
 * %PID: P2017_BSW:0A192549.A-SRC;1 %
 * %PCMS_HEADER_SUBSTITUTION_END:%
 ******************************************************************************/

#include "Std_Types.h"
#include "Mcal.h"
#include "EcuM.h"

/******************************************************************************/
/*                      Global Variable Definitions                           */
/******************************************************************************/
#define MCAL_START_SEC_VAR_8BIT
#include "MCAL_MemMap.h"
/* Semaphore to signal the completed of Init sequence of different Cores      */
/* Element 0 means CPU0 -> This means if EcuM Init is completed by CPU0       */
/* Element 1 means CPU1 -> This means if CPU1 startup code is executed        */
/* Element 2 means CPU2 -> This means if CPU2 startup code is executed        */
/* This is implemented as an array to prevent parallel updation by seperate   */
/* cores                                                                      */
volatile uint8  Mcal_u8CpuInitCompletedSem[3];

#define MCAL_STOP_SEC_VAR_8BIT
#include "MCAL_MemMap.h"


#define MCAL_START_SEC_CODE
#include "MCAL_MemMap.h"

/******************************************************************************/
/* !FuncName    : MCAL_Gnu_CopyTable                                          */
/* !Description :                                                             */
/* !Description : Initialize or clear data segments as specified by the copy  */
/*                table. It is an array of 4 word entries generated by the    */
/*                locator. offset  0: type- 0=end, 1=copy, 2=clear            */
/*                offset  4: destination address                              */
/*                offset  8: source address (copy only)                       */
/*                offset 12: length             - length in bytes.            */
/*                                                                            */
/* !LastAuthor  : L. Baglin                                                   */
/******************************************************************************/
void Mcal_Gnu_CopyTable(uint32 ClearTable, uint32 CopyTable)
{
   typedef volatile union
   {
      uint8  ucPtr;
      uint16 usPtr;
      uint32 uiPtr;
   } TABLE_PTR;

   uint32 uiLength, uiCnt;
   uint32 *pTable;
   TABLE_PTR *pBlockDest;
   TABLE_PTR *pBlockSrc;

   /* clear table */
   pTable = (uint32*)ClearTable;
   while (pTable)
   {
      pBlockDest = (TABLE_PTR *) * pTable++;
      uiLength = *pTable++;
      /* we are finished when length == -1 */
      if (uiLength == 0xFFFFFFFF)
         break;
      uiCnt = uiLength / 4;
      while (uiCnt--)
      {
         (*pBlockDest).uiPtr = 0;
         pBlockDest = (TABLE_PTR *)((uint32*)pBlockDest + 1);
      }
      if ((uiLength) & 0x2)
      {
         (*pBlockDest).usPtr = 0;
         pBlockDest = (TABLE_PTR *)((uint16*)pBlockDest + 1);
      }
      if ((uiLength) & 0x1)
         (*pBlockDest).ucPtr = 0;
   }

   /* copy table */
   pTable = (uint32*)CopyTable;
   while (pTable)
   {
      pBlockSrc  = (TABLE_PTR *) * pTable++;
      pBlockDest = (TABLE_PTR *) * pTable++;
      uiLength = *pTable++;
      /* we are finished when length == -1 */
      if (uiLength == 0xFFFFFFFF)
         break;
      uiCnt = uiLength / 4;
      while (uiCnt--)
      {
         (*pBlockDest).uiPtr = (*pBlockSrc).uiPtr;
         pBlockDest = (TABLE_PTR *)((uint32*)pBlockDest + 1);
         pBlockSrc  = (TABLE_PTR *)((uint32*)pBlockSrc  + 1);
      }
      if ((uiLength) & 0x2)
      {
         (*pBlockDest).usPtr = (*pBlockSrc).usPtr;
         pBlockDest = (TABLE_PTR *)((uint16*)pBlockDest + 1);
         pBlockSrc  = (TABLE_PTR *)((uint16*)pBlockSrc  + 1);
      }
      if ((uiLength) & 0x1)
         (*pBlockDest).ucPtr = (*pBlockSrc).ucPtr;
   }
}


/******************************************************************************/
/* !FuncName    : Mcal_lGetEcumCfgSelector                                    */
/* !Description :                                                             */
/*                                                                            */
/* !LastAuthor  : L. Baglin                                                   */
/******************************************************************************/
#if (ECUM_POSTBUILD_CONFIG_TYPE == ECUM_SELECTABLE)
uint8 Mcal_lGetEcumCfgSelector(void)
{
/* Get Selector based on ......*/

return(0);
}
#endif


/******************************************************************************/
/* !FuncName    : Mcal_EcuMInit                                               */
/* !Description :                                                             */
/*                                                                            */
/* !LastAuthor  : L. Baglin                                                   */
/******************************************************************************/
void Mcal_EcuMInit()
{
#if (ECUM_POSTBUILD_CONFIG_TYPE == ECUM_SELECTABLE)
   uint8 u8LocalCfgSelector;
#endif

   const struct EcuM_ConfigType_Tag* pudtLocalEcuMConfigPtr;

   /* Determine ECU Configuration Set */
#if (ECUM_POSTBUILD_CONFIG_TYPE == ECUM_LOADABLE)
   /* Get Memory Location of the EcuM Configuration Set */
   pudtLocalEcuMConfigPtr = EcuM_ConfigAddressPtr;
   /* In case of loadable the FlsStateVar memory area 48 bytes should be cleared.
   */
#endif

#if (ECUM_POSTBUILD_CONFIG_TYPE == ECUM_SELECTABLE)
   /*Get Configuration Set from available alternatives*/
   u8LocalCfgSelector = Mcal_lGetEcumCfgSelector();
   pudtLocalEcuMConfigPtr = &EcuM_ConfigAlternative[u8LocalCfgSelector];
#endif

   // /*Initialize ECUM Module*/
   EcuM_Init(pudtLocalEcuMConfigPtr);
}

#define MCAL_STOP_SEC_CODE
#include "MCAL_MemMap.h"

/*-------------------------------- end of file -------------------------------*/

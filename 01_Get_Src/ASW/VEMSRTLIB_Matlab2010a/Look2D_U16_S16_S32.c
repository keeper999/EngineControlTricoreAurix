/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SRV                                                     */
/*                                                                            */
/* !Component       : VemsRtLib                                               */
/* !Description     : Shared utilities provided by TMW                        */
/*                                                                            */
/* !Module          : Look2D_U16_S16_S32                                      */
/*                                                                            */
/* !File            : Look2D_U16_S16_S32.c                                    */
/*                                                                            */
/* !Target          : All (optimized for "Generic->Custom")                   */
/*                                                                            */
/* !Vendor          : Valeo                                                   */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2008 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/* Autocoding Information                                                     */
/*   Tool             : RTW-EC 7.5  (R2010a)  25-Jan-2010                     */
/*   CodeGen toolbox  : version 003                                           */
/*   Code generated on: Mon Nov 08 11:03:31 2010                              */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/VEMSRTLIB/Matlab2010a/Look2D_U16_$*/
/* $Revision::   1.0                                                         $*/
/* $Author::   pchinazz                               $$Date::   08 Nov 2010 $*/
/******************************************************************************/
/* !CompReq : FLOAT                                                           */
/******************************************************************************/
#include "rtwtypes.h"
#include "rtw_shared_utils.h"

/******************************************************************************/
/* Check that Conditionnal Compilation options are defined                    */
/******************************************************************************/
/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/

/******************************************************************************/
/* DATA DEFINITION                                                            */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS DEFINITION                                                       */
/******************************************************************************/
#define VemsRtLib_START_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

/*********************************************************************
 * Lookup 2D Lookup Utility Look2D_U16_S16_S32
 */
void Look2D_U16_S16_S32( UInt16 *pY, const UInt16 *pYData, SInt16 u0, const
  SInt16 *pU0Data, UInt32 iHiU0, SInt32 u1, const SInt32 *pU1Data, UInt32
  iHiU1)
{
  UInt32 iLeftU0, iRghtU0, iLeftU1, iRghtU1;
  BINARYSEARCH_S16( &(iLeftU0), &(iRghtU0), u0, pU0Data, iHiU0);
  BINARYSEARCH_S32( &(iLeftU1), &(iRghtU1), u1, pU1Data, iHiU1);

  {
    SInt16 u0Left = pU0Data[iLeftU0];
    SInt16 u0Rght = pU0Data[iRghtU0];
    SInt32 u1Left = pU1Data[iLeftU1];
    SInt32 u1Rght = pU1Data[iRghtU1];
    UInt16 yTemp;
    UInt16 yLeftLeft;
    UInt16 yLeftRght;
    UInt16 yRghtLeft;
    UInt16 yRghtRght;
    UInt32 u1Lambda;
    if (u1Rght > u1Left ) {
      SInt32 num;
      SInt32 den;
      den = u1Rght;
      den = den - u1Left;
      num = u1;
      num = num - u1Left;
      u1Lambda = div_repeat_us32_floor(num, den, (UInt32)31);
    } else {
      u1Lambda = 0U;
    }

    iHiU0++;
    iLeftU1 *= iHiU0;
    iRghtU1 *= iHiU0;
    yRghtLeft = pYData[(iRghtU0+iLeftU1)];
    yRghtRght = pYData[(iRghtU0+iRghtU1)];
    yLeftLeft = pYData[(iLeftU0+iLeftU1)];
    yLeftRght = pYData[(iLeftU0+iRghtU1)];

    /* Interpolate along U1 variable
     *    with the u0 variable locked on the left u0
     */
    {
      UInt16 yTemp2;
      UInt16 absDiff;
      (*pY) = yLeftLeft;
      if (yLeftRght >= yLeftLeft ) {
        absDiff = yLeftRght;
        absDiff = (UInt16)(((UInt32)absDiff) - ((UInt32)yLeftLeft));
        yTemp2 = (UInt16)mul_u32_u32_u32_sr31(u1Lambda, (UInt32)absDiff);
        (*pY) = (UInt16)(((UInt32)(*pY)) + ((UInt32)yTemp2));
      } else {
        absDiff = yLeftLeft;
        absDiff = (UInt16)(((UInt32)absDiff) - ((UInt32)yLeftRght));
        yTemp2 = (UInt16)mul_u32_u32_u32_sr31(u1Lambda, (UInt32)absDiff);
        (*pY) = (UInt16)(((UInt32)(*pY)) - ((UInt32)yTemp2));
      }
    }

    /* Interpolate along U1 variable
     *    with the u0 variable locked on the right u0
     */
    {
      UInt16 yTemp2;
      UInt16 absDiff;
      yTemp = yRghtLeft;
      if (yRghtRght >= yRghtLeft ) {
        absDiff = yRghtRght;
        absDiff = (UInt16)(((UInt32)absDiff) - ((UInt32)yRghtLeft));
        yTemp2 = (UInt16)mul_u32_u32_u32_sr31(u1Lambda, (UInt32)absDiff);
        yTemp = (UInt16)(((UInt32)yTemp) + ((UInt32)yTemp2));
      } else {
        absDiff = yRghtLeft;
        absDiff = (UInt16)(((UInt32)absDiff) - ((UInt32)yRghtRght));
        yTemp2 = (UInt16)mul_u32_u32_u32_sr31(u1Lambda, (UInt32)absDiff);
        yTemp = (UInt16)(((UInt32)yTemp) - ((UInt32)yTemp2));
      }
    }

    /*
     * Interpolate along u0 variable
     *    with the u1 variable locked on its interpolated value
     */
    INTERPOLATE_U16_S16( pY, (*pY), yTemp, u0, u0Left, u0Rght);
  }
}

/* end function Look2D_U16_S16_S32
 *********************************************************************/
#define VemsRtLib_STOP_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

/*-------------------------------- end of file -------------------------------*/

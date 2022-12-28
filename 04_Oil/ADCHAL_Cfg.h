/**********************************************************************************************************************/
/* !Layer           : HAL                                                                                             */
/* !Component       : ADCHAL                                                                                          */
/* !Description     : Analog to digital conversion on HAL .                                                           */
/*                                                                                                                    */
/* !File            : ADCHAL_cfg.h                                                                                    */
/* !Description     : Configuration of the ADCHAL component.                                                          */
/*                                                                                                                    */
/* !Reference       : PTS_DOC_5465469                                                                                 */
/*                                                                                                                    */
/* Coding language  : C                                                                                               */
/*                                                                                                                    */
/* COPYRIGHT VALEO all rights reserved                                                                                */
/**********************************************************************************************************************/
/* Dimension Informations
 * %PCMS_HEADER_SUBSTITUTION_START:%
 * The PID has this format: <Product ID>:<Item ID>.<Variant>-<Item Type>;<Revision>
 * %PID: LIBEMB:A4328.A-SRC;3 %
 * %PCMS_HEADER_SUBSTITUTION_END:%
 **********************************************************************************************************************/
/** 11/10/14, 10:16:14: generated by Genecode v2.6.0.0                                                             */
/**********************************************************************************************************************/

#ifndef ADCHAL_CFG_H
#define ADCHAL_CFG_H

#include "STD_Types.h"
#include "std_limits.h"
#include "ADCHAL.h"
#include "ADCHAL_L.h"
#include "ADCHAL_Typ_Cfg.h"
#include "ADCHAL_Scale_Cfg.h"

#include "ADCBSL.h"
#include "BSW_Gateway.h"
#include "ADCHAL_Cfg_E.h"


/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/

/* The number of hal continuous mode pins and the CO define*/
#define   ADCHAL_udtCONTINUOUS_MODE_PIN_NB  32

#define   ADCHAL_coCONTINUOUS_MODE_EXIST   TRUE

/* APIs Configuration  */
#define ADCHAL_Gateway_Stub  ADCHAL_udtPrivateRead
#define ADCHAL_udtEnableNotification   ADCHAL_udtPrivateEnableNotification
#define ADCHAL_udtDisableNotification   ADCHAL_udtPrivateDisableNotification

/******************************************************************************/
/* CONSTANTS DEFINITION                                                       */
/******************************************************************************/

#define ADCHAL_START_SEC_CONST_UNSPECIFIED
#include "ADCHAL_MemMap.h"

/* !Comment: Array of constants for the desired result MAX  per channel.      */
extern CONST(ADCHAL_tudtResultValue,ADCHAL_CONST)  ADCHAL_akudtResultDesiredMax[ADCHAL_udtNUMBER_OF_CHANNELS];

/* !Comment: Array of one pin linked to each channel.      */
extern CONST(ADCHAL_tudtPinType,ADCHAL_CONST)  ADCHAL_akudtChannelToPin[ADCHAL_udtNUMBER_OF_CHANNELS];


/* !Comment: Array of constants for the pointer to functions of read raw data */
extern CONST(ADCHAL_tpfvidReadRaw,ADCHAL_CONST)  ADCHAL_akpfvidReadRaw[ADCHAL_udtCONTINUOUS_MODE_PIN_NB];


/* !Comment: Array of constants for the pointer to functions of read raw data */
extern CONST(ADCHAL_tpfu32ScalingFunction,ADCHAL_CONST)  ADCHAL_akpfu32ScalingFunction[ADCHAL_udtNUMBER_OF_CHANNELS];

#define ADCHAL_STOP_SEC_CONST_UNSPECIFIED
#include "ADCHAL_MemMap.h"


/******************************************************************************/
/* DATA DECLARATIONS                                                          */
/******************************************************************************/

#define ADCHAL_START_SEC_VAR_UNSPECIFIED
#include "ADCHAL_MemMap.h"


/* The array of returned values from MCAL     */
extern VAR(ADCHAL_tudtMcalAcquisition,ADCHAL_VAR)    ADCHAL_audtAcquisitionsRaw[ADCHAL_udtNUMBER_OF_PINS];


#define ADCHAL_STOP_SEC_VAR_UNSPECIFIED
#include "ADCHAL_MemMap.h"


/******************************************************************************/
/* MACRO FUNCTIONS                                                            */
/******************************************************************************/


/******************************************************************************/
/* !Description :  Enry points based on time or Events for all Pins           */
/* !Reference   :  V01 NT 08 05204 / 2                                        */
/*                                                                            */
/* !Trace_To :  VEES_R_08_05204_019.01                                        */
/* !Trace_To :  VEES_R_08_05204_020.01                                        */
/* !Trace_To :  VEES_R_08_05204_021.01                                        */
/******************************************************************************/
#define ADCHAL_vidEntry_THR_EVENT() \
   do \
   { \
      ADCHAL_vidReadRaw_CH_ADC_CM_77(); \
      ADCHAL_vidReadRaw_CH_ADC_CM_79(); \
      ADCHAL_vidReadRaw_CH_ADC_THR_CM_80(); \
   } \
   while (0)
   
#define ADCHAL_vidEntry_IGN_EVENT() \
   do \
   { \
      ADCHAL_vidReadRaw_CH_ADC_IGN_CH_2_CH_3(); \
   } \
   while (0)
   
#define ADCHAL_vidEntry_1_4_TDC_EVENT() \
   do \
   { \
      ADCHAL_vidReadRaw_CH_ADC_CM_54(); \
      ADCHAL_vidReadRaw_CH_ADC_CM_58(); \
      ADCHAL_vidReadRaw_CH_ADC_CM_31(); \
   } \
   while (0)
   
#define ADCHAL_vidEntry_10ms_EVENT() \
   do \
   { \
      ADCHAL_vidReadRaw_CH_ADC_CM_54(); \
      ADCHAL_vidReadRaw_CH_ADC_CM_58(); \
      ADCHAL_vidReadRaw_CH_ADC_CM_31(); \
      ADCHAL_vidReadRaw_CH_ADC_CM_51(); \
   } \
   while (0)
   
#define ADCHAL_vidEntry_ANGSCHED_INJ_EVENT() \
   do \
   { \
      ADCHAL_vidReadRaw_CH_ADC_CM_51(); \
   } \
   while (0)
   
#define ADCHAL_vidEntry_SPILL_EVENT() \
   do \
   { \
      ADCHAL_vidReadRaw_CH_ADC_CM_51(); \
   } \
   while (0)
   



/* Call back notifications of the one_shot mode channels to inform the ADCHL of conversion end */

/******************************************************************************/
/* Functions prototypes                                                       */
/******************************************************************************/


/*The GetRawData function for CH_ADC_CH_57   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_57(void);

/*The GetRawData function for CH_ADC_CH_27   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_27(void);

/*The GetRawData function for CH_ADC_CH_60   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_60(void);

/*The GetRawData function for CH_ADC_CH_29_RED   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_29_RED(void);

/*The GetRawData function for CH_ADC_CH_32   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_32(void);

/*The GetRawData function for CH_ADC_CM_84_V   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_84_V(void);

/*The GetRawData function for CH_ADC_CM_84_I   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_84_I(void);

/*The GetRawData function for CH_ADC_CM_103_V   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_103_V(void);

/*The GetRawData function for CH_ADC_CM_103_I   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_103_I(void);

/*The GetRawData function for CH_ADC_CM_39   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_39(void);

/*The GetRawData function for CH_ADC_CM_41   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_41(void);

/*The GetRawData function for CH_ADC_CH_2_CH_3   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_2_CH_3(void);

/*The GetRawData function for CH_ADC_CM_80   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_80(void);

/*The GetRawData function for CH_ADC_CH_41   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_41(void);

/*The GetRawData function for CH_ADC_CH_42   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_42(void);

/*The GetRawData function for CH_ADC_MAIN_5V   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_MAIN_5V(void);

/*The GetRawData function for CH_ADC_CH_28   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_28(void);

/*The GetRawData function for CH_ADC_CH_29   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_29(void);

/*The GetRawData function for CH_ADC_CM_79_RED   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_79_RED(void);

/*The GetRawData function for CH_ADC_CM_70   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_70(void);

/*The GetRawData function for CH_ADC_CH_26   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_26(void);

/*The GetRawData function for CH_ADC_CM_56   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_56(void);

/*The GetRawData function for CH_ADC_CH_47   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_47(void);

/*The GetRawData function for CH_ADC_VDD3A_CJ135   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_VDD3A_CJ135(void);

/*The GetRawData function for CH_ADC_CH_18   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CH_18(void);

/*The GetRawData function for CH_ADC_CM_61   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_61(void);

/*The GetRawData function for CH_ADC_CM_100   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_100(void);

/*The GetRawData function for CH_ADC_CM_88   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_88(void);

/*The GetRawData function for CH_ADC_CM_91   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_91(void);

/*The GetRawData function for CH_ADC_INT_IGBT_TMP   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_INT_IGBT_TMP(void);

/*The GetRawData function for CH_ADC_INT_ATOM_PRS   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_INT_ATOM_PRS(void);

/*The GetRawData function for CH_ADC_INT_ECU_TMP   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_INT_ECU_TMP(void);

/*The GetRawData function for CH_ADC_CM_77   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_77(void);

/*The GetRawData function for CH_ADC_CM_79   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_79(void);

/*The GetRawData function for CH_ADC_IGN_CH_2_CH_3   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_IGN_CH_2_CH_3(void);

/*The GetRawData function for CH_ADC_THR_CM_80   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_THR_CM_80(void);

/*The GetRawData function for CH_ADC_CM_54   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_54(void);

/*The GetRawData function for CH_ADC_CM_58   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_58(void);

/*The GetRawData function for CH_ADC_CM_31   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_31(void);

/*The GetRawData function for CH_ADC_CM_51   */
extern FUNC(void, ADCHAL_CODE) ADCHAL_vidReadRaw_CH_ADC_CM_51(void);




#endif /*  ADCHAL_CFG_H */

/*------------------------------------------------- end of file ------------------------------------------------------*/


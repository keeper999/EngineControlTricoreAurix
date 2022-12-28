/**********************************************************************************************************************/
/* !Layer           : HAL                                                                                             */
/* !Component       : ADCHAL                                                                                          */
/* !Description     : Analog to digital conversion on HAL .                                                           */
/*                                                                                                                    */
/* !File            : ADCHAL_Scale_CFG.h                                                                              */
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
 * %PID: LIBEMB:A4309.A-SRC;2 %
 * %PCMS_HEADER_SUBSTITUTION_END:%
 **********************************************************************************************************************/
/** 11/10/14, 10:16:15: generated by Genecode v2.6.0.0                                                                */
/**********************************************************************************************************************/

#ifndef ADCHAL_SCALE_CFG_H
#define ADCHAL_SCALE_CFG_H

#include "std_Types.h"
#include "std_limits.h"
#include "AR_Mfx.h"
#include "ADCHAL.h"
#include "ADCHAL_L.h"



/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/





/******************************************************************************/
/* USER TYPE DEFINES and callbcak types                                       */
/******************************************************************************/

/* The Acquisition Scale multiply type */
typedef uint16   ADCHAL_tudtAcquisitionScaleMul;

/* The Acquisition Scale Divide type */
typedef uint32   ADCHAL_tudtAcquisitionScaleDiv;

/* Pointer to function of the Acquisition scalling functions */
typedef P2FUNC(uint32, ADCHAL_APPL_CODE, ADCHAL_tpfu32AcquisitionScaling)(uint8 , uint32);

/******************************************************************************/
/* CONSTANTS DEFINITION                                                       */
/******************************************************************************/

#define ADCHAL_START_SEC_CONST_UNSPECIFIED
#include "ADCHAL_MemMap.h"


/* !Comment: Array of constants for the  Acquisition  scale to multiply per channel */
extern CONST( ADCHAL_tudtAcquisitionScaleMul,ADCHAL_CONST)   ADCHAL_akudtAcquisitionScaleMul[ADCHAL_udtNUMBER_OF_CHANNELS] ;

/* !Comment: Array of constants for the  Acquisition  scale to divide per channel */
extern CONST( ADCHAL_tudtAcquisitionScaleDiv,ADCHAL_CONST)   ADCHAL_akudtAcquisitionScaleDiv[ADCHAL_udtNUMBER_OF_CHANNELS] ;
/* !Comment: Array of constant pointer to functions used for Acquisition scalling calculations */
extern CONST( ADCHAL_tpfu32AcquisitionScaling,ADCHAL_CONST)  ADCHAL_kapfu32AcquisitionScaling[ADCHAL_udtNUMBER_OF_CHANNELS] ;

#define ADCHAL_STOP_SEC_CONST_UNSPECIFIED
#include "ADCHAL_MemMap.h"


/******************************************************************************/
/* DATA DECLARATIONS                                                          */
/******************************************************************************/


/******************************************************************************/
/* MACRO FUNCTIONS                                                            */
/******************************************************************************/
#define ADCHAL_u32ACQUISITION_AUTO_SCALING(udtChannel, u32ValueToScale)   \
   (ADCHAL_kapfu32AcquisitionScaling[(udtChannel)]((udtChannel),(u32ValueToScale)))



/******************************************************************************/
/* Functions prototypes                                                       */
/******************************************************************************/


extern FUNC(uint32, ADCHAL_CODE) ADCHAL_u32ScaleNone
(
   ADCHAL_tudtChannelType  udtChannel,
   uint32                  u32ValueToScale
);


extern FUNC(uint32, ADCHAL_CODE) ADCHAL_u32ScaleMul
(
   ADCHAL_tudtChannelType  udtChannel,
   uint32                  u32ValueToScale
);



extern FUNC(uint32, ADCHAL_CODE) ADCHAL_u32ScaleDiv
(
   ADCHAL_tudtChannelType  udtChannel,
   uint32                  u32ValueToScale
);




extern FUNC(uint32, ADCHAL_CODE) ADCHAL_u32ScaleMulDiv
(
   ADCHAL_tudtChannelType  udtChannel,
   uint32                  u32ValueToScale
);

#endif  /* ADCHAL_SCALE_CFG_H */

/*------------------------------------------------- end of file ------------------------------------------------------*/

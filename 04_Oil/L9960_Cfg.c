/**********************************************************************************************************************/
/* !Layer           : HAL                                                                                             */
/* !Component       : L9960                                                                                           */
/* !Description     : Driver for H-Bridge device ST L9960                                                             */
/*                                                                                                                    */
/* !File            : L9960_Cfg.c                                                                                     */
/* !Description     : Configuration of the L9960 component.                                                           */
/*                                                                                                                    */
/* !Reference       :                                                                                                 */
/*                                                                                                                    */
/* Coding language  : C                                                                                               */
/*                                                                                                                    */
/* COPYRIGHT VALEO all rights reserved                                                                                */
/**********************************************************************************************************************/
/* Dimension Informations
 * %PCMS_HEADER_SUBSTITUTION_START:%
 * The PID has this format: <Product ID>:<Item ID>.<Variant>-<Item Type>;<Revision>
 * %PID: LIBEMB:A6025.A-SRC;1 %
 * %PCMS_HEADER_SUBSTITUTION_END:%
 **********************************************************************************************************************/
/** 11/10/14, 10:16:17: generated by Genecode v2.6.0.0                                                                */
/**********************************************************************************************************************/


#include "Std_Types.h"
#include "L9960_Types.h"
#include "L9960_Private.h"
#include "L9960_Cfg.h"
#include "L9960_Spi.h"
#include "Spi.h"

#include "THRHAL.h"


/**********************************************************************************************************************/
/* CONSTANTS                                                                                                          */
/**********************************************************************************************************************/
#define L9960_START_SEC_CALIB_BOOLEAN
#include "L9960_MemMap.h"

CONST(boolean, L9960_CONST) L9960_kbISR_U2000;
CONST(boolean, L9960_CONST) L9960_kbVSR_U2000;
CONST(boolean, L9960_CONST) L9960_kbTDSR_U2000;
CONST(boolean, L9960_CONST) L9960_kbTSecure_U2000;


#define L9960_STOP_SEC_CALIB_BOOLEAN
#include "L9960_MemMap.h"

#define L9960_START_SEC_CALIB_8BIT
#include "L9960_MemMap.h"

CONST(uint8, L9960_CONST) L9960_ku8CL_U2000;
CONST(uint8, L9960_CONST)  L9960_ku8TDIAG1_U2000;
CONST(uint8, L9960_CONST)  L9960_ku8OTSD_Thr_var_U2000;
CONST(uint8, L9960_CONST)  L9960_ku8OTWARN_Thr_var_U2000;


#define L9960_STOP_SEC_CALIB_8BIT
#include "L9960_MemMap.h"

#define L9960_START_SEC_CONST_UNSPECIFIED
#include "L9960_MemMap.h"

const L9960_tstrConfig L9960_akstrConfig[L9960_u8NB_OF_DEVICE] =
{

   /* U2000 */
   /*******************************************************************************************************************/
   {
   /* .pkbCurrentSlewRate              = */  &L9960_kbISR_U2000,
   /* .pkbVoltageSlewRate              = */  &L9960_kbVSR_U2000,
   /* .pkbTemperatureDependentSlewRate = */  &L9960_kbTDSR_U2000,
   /* .pkbTSecure                      = */  &L9960_kbTSecure_U2000,
   /* .pku8CurrentLimitRange           = */  &L9960_ku8CL_U2000,
   /* .pku8Tdiag1                      = */  &L9960_ku8TDIAG1_U2000,
   /* .pku8OtsdThrVar                  = */  &L9960_ku8OTSD_Thr_var_U2000,
   /* .pku8OtwarnThrVar                = */  &L9960_ku8OTWARN_Thr_var_U2000,
   /* .pfvidSetDisPinToHigh        = */ &THRHAL_vidDisable,
   /* .pfvidSetDisPinToLow         = */ &THRHAL_vidEnable,
   /* .udtSpiChannelId             = */ SpiConf_SpiChannel_L9960_U2000_CH,
   /* .udtSpiSequenceId            = */ SpiConf_SpiSequence_L9960_U2000_SPI_SEQ,
   /* .udtPwmChannel               = */ Pwm_17_GtmConf_PwmChannel_M_INTK_THR_MOT_PWM,
   /* .udtDirChannel               = */ Pwm_17_GtmConf_PwmChannel_M_INTK_THR_MOT_DIR,
   /* .udtDgohalActuatorChannel    = */ DGOHAL_udtL9960_U2000_ACT_CH,
   /* .udtDgohalEcuChannel         = */ DGOHAL_udtL9960_U2000_ECU_CH,
   /* .u8TristateTimerReload       = */ 2
   },


};

#define L9960_STOP_SEC_CONST_UNSPECIFIED
#include "L9960_MemMap.h"

/**********************************************************************************************************************/
/* FUNCTIONS                                                                                                          */
/**********************************************************************************************************************/

#define L9960_START_SEC_CODE
#include "L9960_MemMap.h"


/**********************************************************************************************************************/
/* !FuncName    : L9960_vidTxConfirmation_U2000                     */
/* !Description : Function to called by SPI Handler on SPI Tx confirmation                                            */
/* !LastAuthor  : L. Voilmy                                                                                           */
/**********************************************************************************************************************/
void L9960_vidTxConfirmation_U2000(void)
{
   uint16         u16LocalRxBuffer;

   /* TODO: check the SPI return value ? */
   (void)Spi_ReadIB(SpiConf_SpiChannel_L9960_U2000_CH, (uint8*)&u16LocalRxBuffer);
   /* Data is in the Low Significant Byte */
   L9960_vidSpiTxConfirmation(&L9960_akstrConfig[0], &L9960_astrData[0], u16LocalRxBuffer);
}



#define L9960_STOP_SEC_CODE
#include "L9960_MemMap.h"

/*----------------------------------------------- end of file --------------------------------------------------------*/


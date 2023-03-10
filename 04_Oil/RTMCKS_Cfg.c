/******************************************************************************/
/* !Layer           : SRVL                                                    */
/* !Component       : RTMCKS                                                  */
/* !Description     : Real Time Monitoring: Memory Checksum Control           */
/*                                                                            */
/* !File            : RTMCKS_Cfg.c                                            */
/* !Description     : RTMCKS Configuration                                    */
/*                                                                            */
/* !Reference       :                                                         */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT VALEO all rights reserved                                        */
/******************************************************************************/
/* 11/10/14, 10:16:19: generated by Genecode  v2.6.0.0                        */
/* From Source Template : RTMCKS_CFG_C.TPL                                    */
/******************************************************************************/

#include "type.h"
#include "RTMCKS_I.h"
#include "RTMCKS_Cfg.h"


/******************************************************************************/
/* CONSTANTS DEFINITION                                                       */
/******************************************************************************/
#define RTMCKS_START_SEC_CONST_UNSPECIFIED
#include "RTMCKS_MemMap.h"

const RTMCKS_tstrZoneConfig RTMCKS_strZoneConfigGLOBAL_CKS[RTMCKS_u8GLOBAL_CKS_NB_OF_AREA] =
{
   {1, RTMCKS_vidCalcChecksumOfU8, KRN_vidCheckSoftChecksum},
   {2, RTMCKS_vidCalcChecksumOfU8, KRN_vidCheckCalibChecksum},
};


const RTMCKS_tstrZoneConfig RTMCKS_strZoneConfigTMS_CKS[RTMCKS_u8TMS_CKS_NB_OF_AREA] =
{
   {0, RTMCKS_vidCalcChecksumOfU8, KRN_vidTmsCheckSoftChecksum},
   {1, RTMCKS_vidCalcChecksumOfU8, KRN_vidTmsCheckCalibChecksum},
};


extern RTMCKS_udtDataType KRN_ku32TmsCodeBeg;
extern RTMCKS_udtDataType KRN_ku32TmsCodeEnd;
extern RTMCKS_udtDataType KRN_ku32TmsCalibBeg;
extern RTMCKS_udtDataType KRN_ku32TmsCalibEnd;


const RTMCKS_tstrAddress RTMCKS_strAddressGLOBAL_CKS[RTMCKS_u8GLOBAL_CKS_NB_OF_ZONE] =
{
   {
      (RTMCKS_tCksDataRef)0x800e0000,
      (RTMCKS_tCksDataRef)0x800e651f,
   },
   {
      (RTMCKS_tCksDataRef)0x800e6522,
      (RTMCKS_tCksDataRef)0x803fffff,
   },
   {
      (RTMCKS_tCksDataRef)0x80060024,
      (RTMCKS_tCksDataRef)0x800dffff,
   },
};


const RTMCKS_tstrAddress RTMCKS_strAddressTMS_CKS[RTMCKS_u8TMS_CKS_NB_OF_ZONE] =
{
   {
      (RTMCKS_tCksDataRef)(&KRN_ku32TmsCodeBeg),
      (RTMCKS_tCksDataRef)(&KRN_ku32TmsCodeEnd),
   },
   {
      (RTMCKS_tCksDataRef)(&KRN_ku32TmsCalibBeg),
      (RTMCKS_tCksDataRef)(&KRN_ku32TmsCalibEnd),
   },
};


const RTMCKS_tpstrZoneConfigRef RTMCKS_apstrZoneConfig[RTMCKS_udtCHANNELS_NUMBER] =
{
   (RTMCKS_tpstrZoneConfigRef)(RTMCKS_strZoneConfigGLOBAL_CKS),
   (RTMCKS_tpstrZoneConfigRef)(RTMCKS_strZoneConfigTMS_CKS),
};


const RTMCKS_tpstrAddressRef RTMCKS_apstrAddress[RTMCKS_udtCHANNELS_NUMBER] =
{
   (RTMCKS_tpstrAddressRef)(RTMCKS_strAddressGLOBAL_CKS),
   (RTMCKS_tpstrAddressRef)(RTMCKS_strAddressTMS_CKS),
};


const uint16 RTMCKS_kau16BlockSize[RTMCKS_udtCHANNELS_NUMBER] =
{
   RTMCKS_u16GLOBAL_CKS_BLOCK_SIZE,
   RTMCKS_u16TMS_CKS_BLOCK_SIZE,
};


const uint8 RTMCKS_kau8NbOfArea[RTMCKS_udtCHANNELS_NUMBER] =
{
   RTMCKS_u8GLOBAL_CKS_NB_OF_AREA,
   RTMCKS_u8TMS_CKS_NB_OF_AREA,
};


const uint8 RTMCKS_kau8NbOfZone[RTMCKS_udtCHANNELS_NUMBER] =
{
   RTMCKS_u8GLOBAL_CKS_NB_OF_ZONE,
   RTMCKS_u8TMS_CKS_NB_OF_ZONE,
};


#define RTMCKS_STOP_SEC_CONST_UNSPECIFIED
#include "RTMCKS_MemMap.h"

/*-------------------------------- end of file -------------------------------*/

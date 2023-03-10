/******************************************************************************/
/* !Layer           : SRVL                                                    */
/* !Component       : RTMCKS                                                  */
/* !Description     : Real Time Monitoring: Memory Checksum Control           */
/*                                                                            */
/* !File            : RTMCKS_Cfg.h                                            */
/* !Description     : RTMCKS Configuration                                    */
/*                                                                            */
/* !Reference       :                                                         */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT VALEO all rights reserved                                        */
/******************************************************************************/
/* 11/10/14, 10:16:19: generated by Genecode  v2.6.0.0                        */
/* From Source Template : RTMCKS_Cfg_H.TPL                                    */
/******************************************************************************/

#ifndef RTMCKS_CFG_H
#define RTMCKS_CFG_H


#include "type.h"
#include "RTMCKS_Types.h"
#include "RTMCKS_I.h"
#include "RTMCKS_Cfg.h"

/******************************************************************************/
/* CONDITIONNAL COMPILATION DEFINES                                           */
/******************************************************************************/
#undef  RTMCKS_coU16_CHECKSUM_OF_U8
#define RTMCKS_coU16_CHECKSUM_OF_U8

#define RTMCKS_coDATA_SIZE  4

/******************************************************************************/
/* TYPES DEFINITION                                                           */
/******************************************************************************/
typedef uint32 RTMCKS_udtDataType;
typedef RTMCKS_udtDataType *RTMCKS_tCksDataRef;


/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/
#define RTMCKS_udtCHANNELS_NUMBER 2

/* GLOBAL_CKS Defines */
#define GLOBAL_CKS 0
#define RTMCKS_u16GLOBAL_CKS_BLOCK_SIZE 256
#define RTMCKS_u8GLOBAL_CKS_NB_OF_AREA 2
#define RTMCKS_u8GLOBAL_CKS_NB_OF_ZONE 3
#define GLOBAL_SOFT 0
#define GLOBAL_CALIB 1

/* TMS_CKS Defines */
#define TMS_CKS 1
#define RTMCKS_u16TMS_CKS_BLOCK_SIZE 256
#define RTMCKS_u8TMS_CKS_NB_OF_AREA 2
#define RTMCKS_u8TMS_CKS_NB_OF_ZONE 2
#define TMS_SOFT 0
#define TMS_CALIB 1


/******************************************************************************/
/* FUNCTIONS DEFINITION                                                       */
/******************************************************************************/

#define RTMCKS_START_SEC_CODE
#include "RTMCKS_MemMap.h"

extern void KRN_vidCheckSoftChecksum(RTMCKS_tResult);
extern void KRN_vidCheckCalibChecksum(RTMCKS_tResult);
extern void KRN_vidTmsCheckSoftChecksum(RTMCKS_tResult);
extern void KRN_vidTmsCheckCalibChecksum(RTMCKS_tResult);
extern void RTMCKS_vidCalcChecksumOfU8
(
   int                enuMode,
   RTMCKS_tCksDataRef pudtStartAddress,
   RTMCKS_tCksDataRef pudtEndAddress,
   RTMCKS_tResultRef  pudtChecksumRef
);

#define RTMCKS_STOP_SEC_CODE
#include "RTMCKS_MemMap.h"

#endif 

/*-------------------------------- end of file -------------------------------*/

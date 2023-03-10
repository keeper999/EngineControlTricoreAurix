/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC Layer                                               */
/*                                                                            */
/* !Component       : UsThrMT                                                 */
/* !Component       : UsThrMTSoftware Component                               */
/*                                                                            */
/* !Module          : UsThrMT                                                 */
/*                                                                            */
/* !File            : UsThrMT_nvm.h                                           */
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
/* PVCS Information                                                           */
/* $Archive:   P:/ACT_EMS/LOG/REF/SWC_VEMS/PSA/SWC-TURBO/BA/M01-UsThrMT/5-SOFT-LIV/UsThrMT_nvm.h_v  $
   $Revision:   1.1  $
   $Author:   ADELVARE  $
  *****************************************************************************/
/*                   File generated by an automatic coding tool               */
/**************************** </AUTO_FILE_HEADER> *****************************/

/****************************** <MONO INCLUSION> ******************************/
#ifndef USTHRMT_NVM_H_
#define USTHRMT_NVM_H_

/***************************** <NEEDED INCLUSION> *****************************/
#include "Rte_type.h"

/***************************** <TYPE DECLARATION> *****************************/
typedef struct
{
  UInt16 UsThrM_pAirExt_NV;
} UsThrMT_stNV_Z1_CALIB_16BIT;

/************************* <EXTERNAL DATA STRUCTURE> **************************/
#define UsThrMT_START_SEC_VAR_SAVED_ZONE1_CALIB_16BIT
#include "UsThrMT_MemMap.h"
extern VAR(UsThrMT_stNV_Z1_CALIB_16BIT, AUTOMATIC) UsThrMT_sNV_Z1_CALIB_16BIT;
#define UsThrMT_STOP_SEC_VAR_SAVED_ZONE1_CALIB_16BIT
#include "UsThrMT_MemMap.h"

#define UsThrMT_START_SEC_VAR_SAVED_RECOVERY_ZONE1_CALIB_16BIT
#include "UsThrMT_MemMap.h"
extern CONST(UsThrMT_stNV_Z1_CALIB_16BIT, AUTOMATIC) UsThrMT_sNV_Z1_CALIB_16BIT_r;
#define UsThrMT_STOP_SEC_VAR_SAVED_RECOVERY_ZONE1_CALIB_16BIT
#include "UsThrMT_MemMap.h"

/****************************** <MONO INCLUSION> ******************************/
#endif /* USTHRMT_NVM_H_ */ 


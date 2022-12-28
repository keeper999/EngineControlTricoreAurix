/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC Layer                                               */
/*                                                                            */
/* !Component       : UsThrMT                                                 */
/* !Component       : UsThrMTSoftware Component                               */
/*                                                                            */
/* !Module          : UsThrMT                                                 */
/*                                                                            */
/* !File            : UsThrMT_nvm.c                                           */
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
/* $Archive:   P:/ACT_EMS/LOG/REF/SWC_VEMS/PSA/SWC-TURBO/BA/M01-UsThrMT/5-SOFT-LIV/UsThrMT_nvm.c_v  $
   $Revision:   1.0  $
   $Author:   ADELVARE  $
  *****************************************************************************/
/*                   File generated by an automatic coding tool               */
/**************************** </AUTO_FILE_HEADER> *****************************/

/***************************** <NEEDED INCLUSION> *****************************/
#include "UsThrMT_nvm.h"

/****************************** <DATA STRUCTURE> ******************************/
#define UsThrMT_START_SEC_VAR_SAVED_ZONE1_CALIB_16BIT
#include "UsThrMT_MemMap.h"
VAR(UsThrMT_stNV_Z1_CALIB_16BIT, AUTOMATIC) UsThrMT_sNV_Z1_CALIB_16BIT;
#define UsThrMT_STOP_SEC_VAR_SAVED_ZONE1_CALIB_16BIT
#include "UsThrMT_MemMap.h"

/************************* <RECOVERY DATA STRUCTURE> **************************/
#define UsThrMT_START_SEC_VAR_SAVED_RECOVERY_ZONE1_CALIB_16BIT
#include "UsThrMT_MemMap.h"
CONST(UsThrMT_stNV_Z1_CALIB_16BIT, AUTOMATIC) UsThrMT_sNV_Z1_CALIB_16BIT_r= {
  /* Constants for variable: UsThrM_pAirExt_NV */
  12500
};
#define UsThrMT_STOP_SEC_VAR_SAVED_RECOVERY_ZONE1_CALIB_16BIT
#include "UsThrMT_MemMap.h"


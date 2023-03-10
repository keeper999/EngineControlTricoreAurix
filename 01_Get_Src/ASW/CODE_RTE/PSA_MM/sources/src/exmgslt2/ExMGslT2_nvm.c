/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC Layer                                               */
/*                                                                            */
/* !Component       : ExMGslT2                                                */
/* !Component       : ExMGslT2Software Component                              */
/*                                                                            */
/* !Module          : ExMGslT2                                                */
/*                                                                            */
/* !File            : ExMGslT2_nvm.c                                          */
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
/* $Archive:   P:/ACT_EMS/LOG/REF/SWC_VEMS/PSA/SWC-TURBO/BA/M06-ExMGslT2/5-SOFT-LIV/ExMGslT2_nvm.c_v  $
   $Revision:   1.4  $
   $Author:   adelvare  $
  *****************************************************************************/
/*                   File generated by an automatic coding tool               */
/**************************** </AUTO_FILE_HEADER> *****************************/

/***************************** <NEEDED INCLUSION> *****************************/
#include "ExMGslT2_nvm.h"

/****************************** <DATA STRUCTURE> ******************************/
#define ExMGslT2_START_SEC_VAR_SAVED_ZONE1_CONST_16BIT
#include "ExMGslT2_MemMap.h"
VAR(ExMGslT2_stNV_Z1_CONST_16BIT, AUTOMATIC) ExMGslT2_sNV_Z1_CONST_16BIT;
#define ExMGslT2_STOP_SEC_VAR_SAVED_ZONE1_CONST_16BIT
#include "ExMGslT2_MemMap.h"

/************************* <RECOVERY DATA STRUCTURE> **************************/
#define ExMGslT2_START_SEC_VAR_SAVED_RECOVERY_ZONE1_CONST_16BIT
#include "ExMGslT2_MemMap.h"
CONST(ExMGslT2_stNV_Z1_CONST_16BIT, AUTOMATIC) ExMGslT2_sNV_Z1_CONST_16BIT_r= {
  /* Constants for array   : ExM_prm_tEg_NV[12] */
  {2240,2240,2240,2240,2240,2240,2240,2240,2240,2240,2240,2240},
  /* Constants for array   : ExM_prm_tWall_NV[12] */
  {2240,2240,2240,2240,2240,2240,2240,2240,2240,2240,2240,2240}
};
#define ExMGslT2_STOP_SEC_VAR_SAVED_RECOVERY_ZONE1_CONST_16BIT
#include "ExMGslT2_MemMap.h"


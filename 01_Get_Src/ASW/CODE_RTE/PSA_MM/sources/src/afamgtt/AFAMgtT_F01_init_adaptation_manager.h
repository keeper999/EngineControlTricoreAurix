/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC Layer                                               */
/*                                                                            */
/* !Component       : AFAMgtT                                                 */
/* !Description     : AFAMgtT Software component                              */
/*                                                                            */
/* !Module          : AFAMgtT_F01_init_adaptation_manager                     */
/*                                                                            */
/* !File            : AFAMgtT_F01_init_adaptation_manager.h                   */
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
/*   Model name       : AFAMgtT_F01_init_adaptation_manager.mdl               */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/PSA/SWC-TURBO/BA/M10-AFAMgtT/5-SO$*/
/* $Revision::   1.2                                                         $*/
/* $Author::   ADELVARE                               $$Date::   25 Jul 2011 $*/
/******************************************************************************/
#ifndef RTW_HEADER_AFAMgtT_F01_init_adaptation_manager_h_
#define RTW_HEADER_AFAMgtT_F01_init_adaptation_manager_h_
#ifndef AFAMgtT_F01_init_adaptation_manager_COMMON_INCLUDES_
# define AFAMgtT_F01_init_adaptation_manager_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "AFAMgtT_F01_init_adaptation_manager_import.h"
#include "rtw_shared_utils.h"
#endif                                 /* AFAMgtT_F01_init_adaptation_manager_COMMON_INCLUDES_ */

#include "AFAMgtT_F01_init_adaptation_manager_types.h"

/******************************************************************************/
/* Check that Conditionnal Compilation options are defined                    */
/******************************************************************************/
/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/
/******************************************************************************/
/* TYPES                                                                      */
/******************************************************************************/

/******************************************************************************/
/* FUNCTION DECLARATION                                                       */
/******************************************************************************/

/* !Comment: Declare code in section "SEC_CODE" */
#define AFAMgtT_START_SEC_CODE
#include "AFAMgtT_MemMap.h"

extern void mr_AFAMgtT_F01_init_adaptation_(const Boolean
  *rtu_FRM_bAcvAdpValRstReq, const Boolean *rtu_AFAMgt_bAcvAdpRstDiag_NV,
  const Boolean *rtu_FRM_bAcvAdpClcStRstReq, Boolean
  *rty_AFAMgt_bAdpOfsRstReq, UInt32 *rty_AFAMgt_tiDlyLstObs1, Boolean
  *rty_AFAMgt_bAcvAdpRstDiag, Boolean *rty_AFAMgt_bAdpClcRstReq);

/* Model reference registration function */
extern void mr_AFAMgtT_F01_init__initialize(void);

#define AFAMgtT_STOP_SEC_CODE
#include "AFAMgtT_MemMap.h"

/******************************************************************************/
/* CALIBRATIONS DECLARATION                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTANTS DECLARATION                                                      */
/******************************************************************************/

/******************************************************************************/
/* DATA DECLARATION                                                           */
/******************************************************************************/

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Duplicate' : Unused code path elimination
 * Block '<S1>/Data Type Duplicate1' : Unused code path elimination
 * Block '<S1>/Data Type Duplicate2' : Unused code path elimination
 * Block '<S1>/TABLE' : Unused code path elimination
 * Block '<S1>/TABLE1' : Unused code path elimination
 * Block '<S1>/TABLE2' : Unused code path elimination
 * Block '<Root>/Inj_concFuStmErr_A' : Unused code path elimination
 * Block '<Root>/Inj_concFuStm_A' : Unused code path elimination
 * Block '<S1>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion1' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : AFAMgtT_F01_init_adaptation_manager
 * '<S1>'   : AFAMgtT_F01_init_adaptation_manager/Carto_2D1
 */

/*-
 * Requirements for '<Root>': AFAMgtT_F01_init_adaptation_manager
 */
#endif                                 /* RTW_HEADER_AFAMgtT_F01_init_adaptation_manager_h_ */

/*-------------------------------- end of file -------------------------------*/

/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC Layer                                               */
/*                                                                            */
/* !Component       : AFA                                                     */
/* !Description     : AFA Software component                                  */
/*                                                                            */
/* !Module          : AFA_F08_calc_est_error_covar_mat                        */
/*                                                                            */
/* !File            : AFA_F08_calc_est_error_covar_mat.h                      */
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
/*   Model name       : AFA_F08_calc_est_error_covar_mat.mdl                  */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/PSA/SWC-TURBO/BA/M11-AFAT/5-SOFT-$*/
/* $Revision::   1.7                                                         $*/
/* $Author::   adelvare                               $$Date::   21 Jan 2013 $*/
/******************************************************************************/
#ifndef RTW_HEADER_AFA_F08_calc_est_error_covar_mat_h_
#define RTW_HEADER_AFA_F08_calc_est_error_covar_mat_h_
#ifndef AFA_F08_calc_est_error_covar_mat_COMMON_INCLUDES_
# define AFA_F08_calc_est_error_covar_mat_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "AFA_F08_calc_est_error_covar_mat_import.h"
#endif                                 /* AFA_F08_calc_est_error_covar_mat_COMMON_INCLUDES_ */

#include "AFA_F08_calc_est_error_covar_mat_types.h"

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

/* !Comment: Declare data in section "SEC_VAR_UNSPECIFIED" */


#define AFAT_START_SEC_INTERNAL_VAR_16BIT
#include "AFAT_MemMap.h"


/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  RTW declares the memory for these states
 * and exports their symbols.
 *
 */
extern UInt16 AFA_prm_covErrEstim1_MP[64];/* '<Root>/Data Store Memory1' */
extern UInt16 AFA_prm_covErrEstim2_MP[64];/* '<Root>/Data Store Memory2' */

#define AFAT_STOP_SEC_INTERNAL_VAR_16BIT
#include "AFAT_MemMap.h"

/* !Comment: Declare code in section "SEC_CODE" */
#define AFAT_START_SEC_CODE
#include "AFAT_MemMap.h"

extern void mr_AFA_F08_calc_est_error_covar(const UInt8
  rtu_AFA_prm_covNoiseMesMat_PIM[4], const SInt16 rtu_AFA_prm_facKalm[16],
  const UInt16 rtu_AFA_prm_covPredErrMat_PIM[64], const SInt16
  rtu_AFA_prm_facInterMat_PIM[16], const SInt32 rtu_AFA_prm_facSen[16],
  UInt16 rty_AFA_prm_covErrEstimMat_PIM[64]);

/* Model reference registration function */
extern void mr_AFA_F08_calc_est__initialize(void);

#define AFAT_STOP_SEC_CODE
#include "AFAT_MemMap.h"

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
 * Block '<S1>/Switch' : Eliminated due to constant selection input
 * Block '<S2>/Switch' : Eliminated due to constant selection input
 * Block '<S3>/Switch' : Eliminated due to constant selection input
 * Block '<S1>/Add3' : Unused code path elimination
 * Block '<S1>/Add4' : Unused code path elimination
 * Block '<S1>/Constant' : Unused code path elimination
 * Block '<S1>/Relational Operator' : Unused code path elimination
 * Block '<S1>/Switch1' : Unused code path elimination
 * Block '<S1>/offset2' : Unused code path elimination
 * Block '<S1>/offset3' : Unused code path elimination
 * Block '<S1>/offset4' : Unused code path elimination
 * Block '<S2>/Add3' : Unused code path elimination
 * Block '<S2>/Add4' : Unused code path elimination
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<S2>/Relational Operator' : Unused code path elimination
 * Block '<S2>/Switch1' : Unused code path elimination
 * Block '<S2>/offset2' : Unused code path elimination
 * Block '<S2>/offset3' : Unused code path elimination
 * Block '<S2>/offset4' : Unused code path elimination
 * Block '<S3>/Add3' : Unused code path elimination
 * Block '<S3>/Add4' : Unused code path elimination
 * Block '<S3>/Constant' : Unused code path elimination
 * Block '<S3>/Relational Operator' : Unused code path elimination
 * Block '<S3>/Switch1' : Unused code path elimination
 * Block '<S3>/offset2' : Unused code path elimination
 * Block '<S3>/offset3' : Unused code path elimination
 * Block '<S3>/offset4' : Unused code path elimination
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
 * '<Root>' : AFA_F08_calc_est_error_covar_mat
 * '<S1>'   : AFA_F08_calc_est_error_covar_mat/SingleToFixdt1
 * '<S2>'   : AFA_F08_calc_est_error_covar_mat/SingleToFixdt2
 * '<S3>'   : AFA_F08_calc_est_error_covar_mat/SingleToFixdt3
 */

/*-
 * Requirements for '<Root>': AFA_F08_calc_est_error_covar_mat
 */
#endif                                 /* RTW_HEADER_AFA_F08_calc_est_error_covar_mat_h_ */

/*-------------------------------- end of file -------------------------------*/

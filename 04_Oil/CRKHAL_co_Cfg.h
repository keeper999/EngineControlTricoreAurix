/******************************************************************************/
/* !Layer           : HAL                                                     */
/* !Component       : CRKHAL                                                  */
/* !Description     : Crankshaft Driver                                       */
/*                                                                            */
/* !File            : CRKHAL_CO_CFG.h                                         */
/* !Description     : CRKHAL conditional compilation configurations           */
/*                                                                            */
/* !Reference       :                                                         */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT VALEO all rights reserved                                        */
/******************************************************************************/
/** 11/10/14, 10:16:14: generated by Genecode v2.6.0.0                        */
/******************************************************************************/

#ifndef CRKHAL_CO_CFG_H
#define CRKHAL_CO_CFG_H

#include "Std_Types.h"

/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/
/* !MComment : Defines for enabling or disabling strategies                   */
#define CRKHAL_coENABLED                1
#define CRKHAL_coDISABLED               0

/* !Comment : Defines for enabling or disabling strategies by conditional     */
/*            compilation                                                     */
#define CRKHAL_coTOOTH_TASK_ACTIVATION  CRKHAL_coENABLED
#define CRKHAL_coBIDIR_PULSE_DIAG       CRKHAL_coDISABLED
#define CRKHAL_coLOW_RPM_DESYNCHRO      CRKHAL_coDISABLED

/* Re-triggering of Alarms */
#define CRKHAL_coANGSCHED_1_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coANGSCHED_2_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coCOIL_A_CMD_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coCOIL_B_CMD_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coCOIL_C_CMD_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coIGN_REF_TEETH_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coINJ_1_ANGLE_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coINJ_2_ANGLE_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coINJ_3_ANGLE_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coKNW_SAMPLING_WIN_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coSPILL_EVENT_ANGLE_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coM_CMD_GDI_PMP_ANGLE_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coIT_1_4_TDC_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coPTMHAL_RETRIGGER_ALARM   CRKHAL_coDISABLED
#define CRKHAL_coTDC_RETRIGGER_ALARM   CRKHAL_coDISABLED


#endif /* CRKHAL_CO_CFG_H */

/*-------------------------------- end of file -------------------------------*/

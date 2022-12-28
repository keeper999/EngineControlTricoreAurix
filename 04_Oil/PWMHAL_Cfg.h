/*********************************************************************************************************************/
/*                                                                                                                    */
/* !Layer          : HAL                                                                                              */
/*                                                                                                                    */
/* !Component      : PWMHAL                                                                                           */
/*                                                                                                                    */
/* !Module         : PWMHAL_CFG                                                                                       */
/* !Description    : Configurations of the PWMHAL component.                                                          */
/*                                                                                                                    */
/* !File           : PWMHAL_Cfg.h                                                                                     */
/*                                                                                                                    */
/* !Scope          : Public                                                                                           */
/*                                                                                                                    */
/* !Target         : All                                                                                              */
/*                                                                                                                    */
/* !Vendor         : Valeo                                                                                            */
/*                                                                                                                    */
/* Coding language : C                                                                                                */
/*                                                                                                                    */
/* COPYRIGHT VALEO                                                                                                    */
/* all rights reserved                                                                                                */
/*                                                                                                                    */
/**********************************************************************************************************************/
/** 11/10/14, 10:16:19: generated by Genecode v2.6.0.0                                                                       */
/**********************************************************************************************************************/

#ifndef PWMHAL_CFG_H
#define PWMHAL_CFG_H

#include "Std_Types.h"
#include "PWMHAL_Types.h"


/**********************************************************************************************************************/
/* DEFINES                                                                                                            */
/**********************************************************************************************************************/

#define PWMHAL_u8NB_CHANNEL  14

#define CH_PWM_CANISTER_PURGE       CM_20
#define CH_PWM_INTAKE_VVT       CM_102
#define CH_PWM_EXHAUST_VVT       CM_90
#define CH_PWM_FUEL_PUMP       CH_54
#define CH_PWM_GMV1       CH_63_PWM
#define CH_PWM_THERMOSTAT_PILOTE       CM_17
#define CH_PWM_WATER_PUMP       CM_105_PWM
#define CH_PWM_DUMP_VALVE       CM_92_PWM
#define CH_PWM_WASTEGATE_PNEUMATIQUE       CM_109_CH_58
#define CH_PWM_CTLPMPREQ       CM_104

#define CM_110_CH_70       0
#define CM_109_CH_58       1
#define CM_117       2
#define CM_93       3
#define CM_17       4
#define CM_103_PWM       5
#define CM_90       6
#define CM_102       7
#define CM_20       8
#define CM_92_PWM       9
#define CM_104       10
#define CH_63_PWM       11
#define CM_105_PWM       12
#define CH_54       13


/**********************************************************************************************************************/
/* CONSTANTS DEFINITION                                                                                               */
/**********************************************************************************************************************/
#define PWMHAL_START_SEC_CONST_UNSPECIFIED
#include "PWMHAL_MemMap.h"
extern const PWMHAL_tstrConfig PWMHAL_akudtConfig[PWMHAL_u8NB_CHANNEL];
#define PWMHAL_STOP_SEC_CONST_UNSPECIFIED
#include "PWMHAL_MemMap.h"


#endif /* PWMHAL_CFG_H  */
/*--------------------------------------------------- end of file ----------------------------------------------------*/

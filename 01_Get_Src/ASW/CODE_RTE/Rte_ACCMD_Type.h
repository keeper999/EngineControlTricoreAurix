#if !defined(RTE_ACCMD_TYPE_H)
#define RTE_ACCMD_TYPE_H

/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2013 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /*
  * This file contains the application-specific types for component type ACCMD
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:28 CET 2014. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <Rte_Type.h>         /* RTE types header file */

/*==================[macros]=================================================*/

/*------------------[enumeration constants]----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#ifndef Cha_stTqReq_pas_d_action
#define Cha_stTqReq_pas_d_action 0U
#endif /* Cha_stTqReq_pas_d_action */

#ifndef Cha_stTqReq_ASR
#define Cha_stTqReq_ASR 5U
#endif /* Cha_stTqReq_ASR */

#ifndef Cha_stTqReq_MSR
#define Cha_stTqReq_MSR 6U
#endif /* Cha_stTqReq_MSR */

#ifndef CoPt_bFrzAC_pas_de_figeage
#define CoPt_bFrzAC_pas_de_figeage 0U
#endif /* CoPt_bFrzAC_pas_de_figeage */

#ifndef CoPt_bFrzAC_figeage
#define CoPt_bFrzAC_figeage 1U
#endif /* CoPt_bFrzAC_figeage */

#ifndef CoPTSt_stEng_Coupe_Cale
#define CoPTSt_stEng_Coupe_Cale 1U
#endif /* CoPTSt_stEng_Coupe_Cale */

#ifndef CoPTSt_stEng_Preparation
#define CoPTSt_stEng_Preparation 2U
#endif /* CoPTSt_stEng_Preparation */

#ifndef CoPTSt_stEng_Driven_Start
#define CoPTSt_stEng_Driven_Start 3U
#endif /* CoPTSt_stEng_Driven_Start */

#ifndef CoPTSt_stEng_Autonomous_Start
#define CoPTSt_stEng_Autonomous_Start 4U
#endif /* CoPTSt_stEng_Autonomous_Start */

#ifndef CoPTSt_stEng_Engine_Running
#define CoPTSt_stEng_Engine_Running 5U
#endif /* CoPTSt_stEng_Engine_Running */

#ifndef CoPTSt_stEng_Stop
#define CoPTSt_stEng_Stop 6U
#endif /* CoPTSt_stEng_Stop */

#ifndef CoPTSt_stEng_Driven_Restart
#define CoPTSt_stEng_Driven_Restart 7U
#endif /* CoPTSt_stEng_Driven_Restart */

#ifndef CoPTSt_stEng_Autonomous_Restart
#define CoPTSt_stEng_Autonomous_Restart 8U
#endif /* CoPTSt_stEng_Autonomous_Restart */

#ifndef CoPTSt_stEng_reserve_9
#define CoPTSt_stEng_reserve_9 9U
#endif /* CoPTSt_stEng_reserve_9 */

#ifndef CoPTSt_stEng_reserve_10
#define CoPTSt_stEng_reserve_10 10U
#endif /* CoPTSt_stEng_reserve_10 */

#ifndef CoPTSt_stEng_reserve_11
#define CoPTSt_stEng_reserve_11 11U
#endif /* CoPTSt_stEng_reserve_11 */

#ifndef CoPTSt_stEng_reserve_12
#define CoPTSt_stEng_reserve_12 12U
#endif /* CoPTSt_stEng_reserve_12 */

#ifndef CoPTSt_stEng_reserve_13
#define CoPTSt_stEng_reserve_13 13U
#endif /* CoPTSt_stEng_reserve_13 */

#ifndef CoPTSt_stEng_reserve_14
#define CoPTSt_stEng_reserve_14 14U
#endif /* CoPTSt_stEng_reserve_14 */

#ifndef CoPTSt_stEng_reserve_15
#define CoPTSt_stEng_reserve_15 15U
#endif /* CoPTSt_stEng_reserve_15 */

#ifndef AC_bACClu_Compresseur_debraye
#define AC_bACClu_Compresseur_debraye 0U
#endif /* AC_bACClu_Compresseur_debraye */

#ifndef AC_bACClu_Compresseur_embraye
#define AC_bACClu_Compresseur_embraye 1U
#endif /* AC_bACClu_Compresseur_embraye */

#ifndef Ext_stGBxCf_BVM
#define Ext_stGBxCf_BVM 0U
#endif /* Ext_stGBxCf_BVM */

#ifndef Ext_stGBxCf_BVA
#define Ext_stGBxCf_BVA 1U
#endif /* Ext_stGBxCf_BVA */

#ifndef Ext_stGBxCf_BVMP
#define Ext_stGBxCf_BVMP 2U
#endif /* Ext_stGBxCf_BVMP */

#ifndef ThMgt_bACCmprOffReq_no_request
#define ThMgt_bACCmprOffReq_no_request 0U
#endif /* ThMgt_bACCmprOffReq_no_request */

#ifndef ThMgt_bACCmprOffReq_request
#define ThMgt_bACCmprOffReq_request 1U
#endif /* ThMgt_bACCmprOffReq_request */

#ifndef TqEM_bFrzACComp_Pas_de_demande_de_figeage_clim
#define TqEM_bFrzACComp_Pas_de_demande_de_figeage_clim 0U
#endif /* TqEM_bFrzACComp_Pas_de_demande_de_figeage_clim */

#ifndef TqEM_bFrzACComp_Demande_de_figeage_clim
#define TqEM_bFrzACComp_Demande_de_figeage_clim 1U
#endif /* TqEM_bFrzACComp_Demande_de_figeage_clim */

#ifndef TqSys_bEngNOnIdl_ralenti_inactif
#define TqSys_bEngNOnIdl_ralenti_inactif 0U
#endif /* TqSys_bEngNOnIdl_ralenti_inactif */

#ifndef TqSys_bEngNOnIdl_ralenti_actif
#define TqSys_bEngNOnIdl_ralenti_actif 1U
#endif /* TqSys_bEngNOnIdl_ralenti_actif */

#ifndef Ext_bCluPedPrss_Pedale_d_embrayage_relachee
#define Ext_bCluPedPrss_Pedale_d_embrayage_relachee 0U
#endif /* Ext_bCluPedPrss_Pedale_d_embrayage_relachee */

#ifndef Ext_bCluPedPrss_Appui_sur_pedale_d_embrayage
#define Ext_bCluPedPrss_Appui_sur_pedale_d_embrayage 1U
#endif /* Ext_bCluPedPrss_Appui_sur_pedale_d_embrayage */

#ifndef CoPt_noEgdGearCordIt_rapport_de_marche_arriere
#define CoPt_noEgdGearCordIt_rapport_de_marche_arriere -1
#endif /* CoPt_noEgdGearCordIt_rapport_de_marche_arriere */

#ifndef CoPt_noEgdGearCordIt_rapport_0
#define CoPt_noEgdGearCordIt_rapport_0 0U
#endif /* CoPt_noEgdGearCordIt_rapport_0 */

#ifndef CoPt_noEgdGearCordIt_rapport_1
#define CoPt_noEgdGearCordIt_rapport_1 1U
#endif /* CoPt_noEgdGearCordIt_rapport_1 */

#ifndef CoPt_noEgdGearCordIt_rapport_2
#define CoPt_noEgdGearCordIt_rapport_2 2U
#endif /* CoPt_noEgdGearCordIt_rapport_2 */

#ifndef CoPt_noEgdGearCordIt_rapport_3
#define CoPt_noEgdGearCordIt_rapport_3 3U
#endif /* CoPt_noEgdGearCordIt_rapport_3 */

#ifndef CoPt_noEgdGearCordIt_rapport_4
#define CoPt_noEgdGearCordIt_rapport_4 4U
#endif /* CoPt_noEgdGearCordIt_rapport_4 */

#ifndef CoPt_noEgdGearCordIt_rapport_5
#define CoPt_noEgdGearCordIt_rapport_5 5U
#endif /* CoPt_noEgdGearCordIt_rapport_5 */

#ifndef CoPt_noEgdGearCordIt_rapport_6
#define CoPt_noEgdGearCordIt_rapport_6 6U
#endif /* CoPt_noEgdGearCordIt_rapport_6 */

#ifndef CoPt_noEgdGearCordIt_rapport_7
#define CoPt_noEgdGearCordIt_rapport_7 7U
#endif /* CoPt_noEgdGearCordIt_rapport_7 */

#ifndef CoPt_noEgdGearCordIt_rapport_8
#define CoPt_noEgdGearCordIt_rapport_8 8U
#endif /* CoPt_noEgdGearCordIt_rapport_8 */

#ifndef ACCmd_bInhAntiStall_inactif
#define ACCmd_bInhAntiStall_inactif 0U
#endif /* ACCmd_bInhAntiStall_inactif */

#ifndef ACCmd_bInhAntiStall_actif
#define ACCmd_bInhAntiStall_actif 1U
#endif /* ACCmd_bInhAntiStall_actif */

#ifndef ACCmd_stReq_normal
#define ACCmd_stReq_normal 1U
#endif /* ACCmd_stReq_normal */

#ifndef ACCmd_stReq_debraye_ou_soulagement_maximal_pour_les_clim_non_debrayables
#define ACCmd_stReq_debraye_ou_soulagement_maximal_pour_les_clim_non_debrayables 2U
#endif /* ACCmd_stReq_debraye_ou_soulagement_maximal_pour_les_clim_non_debrayables */

#ifndef ACCmd_stReq_Figeage
#define ACCmd_stReq_Figeage 3U
#endif /* ACCmd_stReq_Figeage */

#ifndef ACCmd_stReq_cylindree_mini_5_pour_cent
#define ACCmd_stReq_cylindree_mini_5_pour_cent 4U
#endif /* ACCmd_stReq_cylindree_mini_5_pour_cent */

#ifndef TqSys_EveSync_ACCmd_Trigger0
#define TqSys_EveSync_ACCmd_Trigger0 0U
#endif /* TqSys_EveSync_ACCmd_Trigger0 */

#ifndef TqSys_EveSync_ACCmd_Trigger1
#define TqSys_EveSync_ACCmd_Trigger1 1U
#endif /* TqSys_EveSync_ACCmd_Trigger1 */

#endif /* (!defined RTE_CORE) */

/*------------------[range definitions]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif /* (!defined RTE_CORE) */

/*------------------[mode declarations]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#ifndef RTE_TRANSITION_RCD_Mode
#define RTE_TRANSITION_RCD_Mode 10U
#endif

#ifndef RTE_MODE_RCD_Mode_COM_LATCH
#define RTE_MODE_RCD_Mode_COM_LATCH 0U
#endif

#ifndef RTE_MODE_RCD_Mode_DEGRADED_MAIN_WAKEUP
#define RTE_MODE_RCD_Mode_DEGRADED_MAIN_WAKEUP 1U
#endif

#ifndef RTE_MODE_RCD_Mode_INTERNAL_PARTIAL_WAKEUP
#define RTE_MODE_RCD_Mode_INTERNAL_PARTIAL_WAKEUP 2U
#endif

#ifndef RTE_MODE_RCD_Mode_INTERNAL_PARTIAL_WAKEUP_APC
#define RTE_MODE_RCD_Mode_INTERNAL_PARTIAL_WAKEUP_APC 3U
#endif

#ifndef RTE_MODE_RCD_Mode_MAIN_WAKEUP
#define RTE_MODE_RCD_Mode_MAIN_WAKEUP 4U
#endif

#ifndef RTE_MODE_RCD_Mode_MAIN_WAKEUP_APC
#define RTE_MODE_RCD_Mode_MAIN_WAKEUP_APC 5U
#endif

#ifndef RTE_MODE_RCD_Mode_PARTIAL_WAKEUP
#define RTE_MODE_RCD_Mode_PARTIAL_WAKEUP 6U
#endif

#ifndef RTE_MODE_RCD_Mode_SHUTDOWN_PREPARATION
#define RTE_MODE_RCD_Mode_SHUTDOWN_PREPARATION 7U
#endif

#ifndef RTE_MODE_RCD_Mode_SHUTDOWN_PREPARATION_APC
#define RTE_MODE_RCD_Mode_SHUTDOWN_PREPARATION_APC 8U
#endif

#ifndef RTE_MODE_RCD_Mode_TRANSITORY
#define RTE_MODE_RCD_Mode_TRANSITORY 9U
#endif

#ifndef RTE_TRANSITION_EcuM_Mode
#define RTE_TRANSITION_EcuM_Mode 6U
#endif

#ifndef RTE_MODE_EcuM_Mode_POST_RUN
#define RTE_MODE_EcuM_Mode_POST_RUN 0U
#endif

#ifndef RTE_MODE_EcuM_Mode_RUN
#define RTE_MODE_EcuM_Mode_RUN 1U
#endif

#ifndef RTE_MODE_EcuM_Mode_SHUTDOWN
#define RTE_MODE_EcuM_Mode_SHUTDOWN 2U
#endif

#ifndef RTE_MODE_EcuM_Mode_SLEEP
#define RTE_MODE_EcuM_Mode_SLEEP 3U
#endif

#ifndef RTE_MODE_EcuM_Mode_STARTUP
#define RTE_MODE_EcuM_Mode_STARTUP 4U
#endif

#ifndef RTE_MODE_EcuM_Mode_WAKE_SLEEP
#define RTE_MODE_EcuM_Mode_WAKE_SLEEP 5U
#endif

#endif /* (!defined RTE_CORE) */

/*==================[type definitions]=======================================*/

/*------------------[mode declaration group types]---------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#ifndef RTE_MODETYPE_RCD_Mode
#define RTE_MODETYPE_RCD_Mode
typedef UInt8 Rte_ModeType_RCD_Mode;
#endif

#ifndef RTE_MODETYPE_EcuM_Mode
#define RTE_MODETYPE_EcuM_Mode
typedef UInt8 Rte_ModeType_EcuM_Mode;
#endif

#endif /* (!defined RTE_CORE) */

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
/** @} doxygen end group definition */
#endif /* !defined(RTE_ACCMD_TYPE_H) */
/*==================[end of file]============================================*/


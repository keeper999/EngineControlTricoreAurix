#if !defined(RTE_TQEM_TYPE_H)
#define RTE_TQEM_TYPE_H

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
  * This file contains the application-specific types for component type TQEM
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:31 CET 2014. !!!IGNORE-LINE!!!
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

#ifndef CoPt_stClu_Ouvert
#define CoPt_stClu_Ouvert 0U
#endif /* CoPt_stClu_Ouvert */

#ifndef CoPt_stClu_Glissant
#define CoPt_stClu_Glissant 1U
#endif /* CoPt_stClu_Glissant */

#ifndef CoPt_stClu_Synchronise
#define CoPt_stClu_Synchronise 2U
#endif /* CoPt_stClu_Synchronise */

#ifndef CoPt_stClu_Ferme
#define CoPt_stClu_Ferme 3U
#endif /* CoPt_stClu_Ferme */

#ifndef CoPt_stDragRed_Park_ou_Neutre
#define CoPt_stDragRed_Park_ou_Neutre 0U
#endif /* CoPt_stDragRed_Park_ou_Neutre */

#ifndef CoPt_stDragRed_Debraye_a_l_arret
#define CoPt_stDragRed_Debraye_a_l_arret 1U
#endif /* CoPt_stDragRed_Debraye_a_l_arret */

#ifndef CoPt_stDragRed_Embraye
#define CoPt_stDragRed_Embraye 2U
#endif /* CoPt_stDragRed_Embraye */

#ifndef CoPt_stDragRed_Indisponible
#define CoPt_stDragRed_Indisponible 3U
#endif /* CoPt_stDragRed_Indisponible */

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

#ifndef Ext_bEPB_Pas_de_freinage_FSE
#define Ext_bEPB_Pas_de_freinage_FSE 0U
#endif /* Ext_bEPB_Pas_de_freinage_FSE */

#ifndef Ext_bEPB_Freinage_FSE_en_cours
#define Ext_bEPB_Freinage_FSE_en_cours 1U
#endif /* Ext_bEPB_Freinage_FSE_en_cours */

#ifndef Ext_stGBxCf_BVM
#define Ext_stGBxCf_BVM 0U
#endif /* Ext_stGBxCf_BVM */

#ifndef Ext_stGBxCf_BVA
#define Ext_stGBxCf_BVA 1U
#endif /* Ext_stGBxCf_BVA */

#ifndef Ext_stGBxCf_BVMP
#define Ext_stGBxCf_BVMP 2U
#endif /* Ext_stGBxCf_BVMP */

#ifndef InjSys_bFuCutOff_injection_not_cut_off
#define InjSys_bFuCutOff_injection_not_cut_off 0U
#endif /* InjSys_bFuCutOff_injection_not_cut_off */

#ifndef InjSys_bFuCutOff_injection_cut_off
#define InjSys_bFuCutOff_injection_cut_off 1U
#endif /* InjSys_bFuCutOff_injection_cut_off */

#ifndef TqSys_bIdlAcvCmn_ralenti_inactif
#define TqSys_bIdlAcvCmn_ralenti_inactif 0U
#endif /* TqSys_bIdlAcvCmn_ralenti_inactif */

#ifndef TqSys_bIdlAcvCmn_ralenti_actif
#define TqSys_bIdlAcvCmn_ralenti_actif 1U
#endif /* TqSys_bIdlAcvCmn_ralenti_actif */

#ifndef TqSys_bTypFu_Diesel
#define TqSys_bTypFu_Diesel 0U
#endif /* TqSys_bTypFu_Diesel */

#ifndef TqSys_bTypFu_Essence
#define TqSys_bTypFu_Essence 1U
#endif /* TqSys_bTypFu_Essence */

#ifndef TqSys_EveSync_TqEMClc_Trigger0
#define TqSys_EveSync_TqEMClc_Trigger0 0U
#endif /* TqSys_EveSync_TqEMClc_Trigger0 */

#ifndef TqSys_EveSync_TqEMClc_Trigger1
#define TqSys_EveSync_TqEMClc_Trigger1 1U
#endif /* TqSys_EveSync_TqEMClc_Trigger1 */

#ifndef TqEM_bFrzACComp_Pas_de_demande_de_figeage_clim
#define TqEM_bFrzACComp_Pas_de_demande_de_figeage_clim 0U
#endif /* TqEM_bFrzACComp_Pas_de_demande_de_figeage_clim */

#ifndef TqEM_bFrzACComp_Demande_de_figeage_clim
#define TqEM_bFrzACComp_Demande_de_figeage_clim 1U
#endif /* TqEM_bFrzACComp_Demande_de_figeage_clim */

#endif /* (!defined RTE_CORE) */

/*------------------[range definitions]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif /* (!defined RTE_CORE) */

/*------------------[mode declarations]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#ifndef RTE_TRANSITION_RCD_stWkuMainRelSt
#define RTE_TRANSITION_RCD_stWkuMainRelSt 4U
#endif

#ifndef RTE_MODE_RCD_stWkuMainRelSt_Invalid
#define RTE_MODE_RCD_stWkuMainRelSt_Invalid 0U
#endif

#ifndef RTE_MODE_RCD_stWkuMainRelSt_MainWakeUp
#define RTE_MODE_RCD_stWkuMainRelSt_MainWakeUp 1U
#endif

#ifndef RTE_MODE_RCD_stWkuMainRelSt_PostMainWakeUp
#define RTE_MODE_RCD_stWkuMainRelSt_PostMainWakeUp 2U
#endif

#ifndef RTE_MODE_RCD_stWkuMainRelSt_PreMainWakeUp
#define RTE_MODE_RCD_stWkuMainRelSt_PreMainWakeUp 3U
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

#ifndef RTE_MODETYPE_RCD_stWkuMainRelSt
#define RTE_MODETYPE_RCD_stWkuMainRelSt
typedef UInt8 Rte_ModeType_RCD_stWkuMainRelSt;
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
#endif /* !defined(RTE_TQEM_TYPE_H) */
/*==================[end of file]============================================*/


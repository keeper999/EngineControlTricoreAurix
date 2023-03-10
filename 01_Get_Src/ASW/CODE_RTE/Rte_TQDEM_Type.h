#if !defined(RTE_TQDEM_TYPE_H)
#define RTE_TQDEM_TYPE_H

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
  * This file contains the application-specific types for component type TQDEM
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

#ifndef CoVSCtl_stAccP_Pied_Leve
#define CoVSCtl_stAccP_Pied_Leve 0U
#endif /* CoVSCtl_stAccP_Pied_Leve */

#ifndef CoVSCtl_stAccP_Pied_Pose
#define CoVSCtl_stAccP_Pied_Pose 1U
#endif /* CoVSCtl_stAccP_Pied_Pose */

#ifndef CoVSCtl_stAccP_Pied_a_fond
#define CoVSCtl_stAccP_Pied_a_fond 2U
#endif /* CoVSCtl_stAccP_Pied_a_fond */

#ifndef TqDem_bAcvNRegTakeOff_Aide_au_decollage_non_actif
#define TqDem_bAcvNRegTakeOff_Aide_au_decollage_non_actif 0U
#endif /* TqDem_bAcvNRegTakeOff_Aide_au_decollage_non_actif */

#ifndef TqDem_bAcvNRegTakeOff_Aide_au_decollage_actif
#define TqDem_bAcvNRegTakeOff_Aide_au_decollage_actif 1U
#endif /* TqDem_bAcvNRegTakeOff_Aide_au_decollage_actif */

#ifndef TqDem_bDrivTakeOff_Decollage
#define TqDem_bDrivTakeOff_Decollage 0U
#endif /* TqDem_bDrivTakeOff_Decollage */

#ifndef TqDem_bDrivTakeOff_Hors_decollage
#define TqDem_bDrivTakeOff_Hors_decollage 1U
#endif /* TqDem_bDrivTakeOff_Hors_decollage */

#ifndef TqDem_bModSpt_mode_sport_inactif
#define TqDem_bModSpt_mode_sport_inactif 0U
#endif /* TqDem_bModSpt_mode_sport_inactif */

#ifndef TqDem_bModSpt_mode_sport_actif
#define TqDem_bModSpt_mode_sport_actif 1U
#endif /* TqDem_bModSpt_mode_sport_actif */

#ifndef TqDem_bTqGrdLim_Pas_de_demande
#define TqDem_bTqGrdLim_Pas_de_demande 0U
#endif /* TqDem_bTqGrdLim_Pas_de_demande */

#ifndef TqDem_bTqGrdLim_Demande
#define TqDem_bTqGrdLim_Demande 1U
#endif /* TqDem_bTqGrdLim_Demande */

#ifndef Cha_stEPB_Frein_de_stationnement_desserre
#define Cha_stEPB_Frein_de_stationnement_desserre 0U
#endif /* Cha_stEPB_Frein_de_stationnement_desserre */

#ifndef Cha_stEPB_Frein_de_stationnement_serre
#define Cha_stEPB_Frein_de_stationnement_serre 1U
#endif /* Cha_stEPB_Frein_de_stationnement_serre */

#ifndef Cha_stEPB_Frein_de_stationnement_en_cours_de_serrage_statique
#define Cha_stEPB_Frein_de_stationnement_en_cours_de_serrage_statique 2U
#endif /* Cha_stEPB_Frein_de_stationnement_en_cours_de_serrage_statique */

#ifndef Cha_stEPB_Frein_de_stationnement_en_cours_de_desserrage_statique
#define Cha_stEPB_Frein_de_stationnement_en_cours_de_desserrage_statique 3U
#endif /* Cha_stEPB_Frein_de_stationnement_en_cours_de_desserrage_statique */

#ifndef Cha_stEPB_Freinage_dynamique_en_cours
#define Cha_stEPB_Freinage_dynamique_en_cours 4U
#endif /* Cha_stEPB_Freinage_dynamique_en_cours */

#ifndef Cha_stEPB_Frein_de_stationnement_serre_a_l_effort_max_appui_Push_FSE_long
#define Cha_stEPB_Frein_de_stationnement_serre_a_l_effort_max_appui_Push_FSE_long 5U
#endif /* Cha_stEPB_Frein_de_stationnement_serre_a_l_effort_max_appui_Push_FSE_long */

#ifndef Cha_stEPB_Reserve
#define Cha_stEPB_Reserve 6U
#endif /* Cha_stEPB_Reserve */

#ifndef Cha_stEPB_Etat_indetermine
#define Cha_stEPB_Etat_indetermine 7U
#endif /* Cha_stEPB_Etat_indetermine */

#ifndef Cha_stHillAsi_Maintien_en_cours
#define Cha_stHillAsi_Maintien_en_cours 0U
#endif /* Cha_stHillAsi_Maintien_en_cours */

#ifndef Cha_stHillAsi_Pas_de_maintien_en_cours
#define Cha_stHillAsi_Pas_de_maintien_en_cours 1U
#endif /* Cha_stHillAsi_Pas_de_maintien_en_cours */

#ifndef Cha_stHillAsi_Defaut
#define Cha_stHillAsi_Defaut 2U
#endif /* Cha_stHillAsi_Defaut */

#ifndef Cha_stHillAsi_Reserve
#define Cha_stHillAsi_Reserve 3U
#endif /* Cha_stHillAsi_Reserve */

#ifndef Cha_stTqReq_pas_d_action
#define Cha_stTqReq_pas_d_action 0U
#endif /* Cha_stTqReq_pas_d_action */

#ifndef Cha_stTqReq_ASR
#define Cha_stTqReq_ASR 5U
#endif /* Cha_stTqReq_ASR */

#ifndef Cha_stTqReq_MSR
#define Cha_stTqReq_MSR 6U
#endif /* Cha_stTqReq_MSR */

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

#ifndef CoPt_bAcvProtCluP_Deactivation_of_engine_rotation_speed_control
#define CoPt_bAcvProtCluP_Deactivation_of_engine_rotation_speed_control 0U
#endif /* CoPt_bAcvProtCluP_Deactivation_of_engine_rotation_speed_control */

#ifndef CoPt_bAcvProtCluP_Activation_of_engine_rotation_speed_control
#define CoPt_bAcvProtCluP_Activation_of_engine_rotation_speed_control 1U
#endif /* CoPt_bAcvProtCluP_Activation_of_engine_rotation_speed_control */

#ifndef CoPt_bRvsCord_MAR_non_actif
#define CoPt_bRvsCord_MAR_non_actif 0U
#endif /* CoPt_bRvsCord_MAR_non_actif */

#ifndef CoPt_bRvsCord_MAR_actif
#define CoPt_bRvsCord_MAR_actif 1U
#endif /* CoPt_bRvsCord_MAR_actif */

#ifndef CoPt_bTakeOff_pas_de_decollage
#define CoPt_bTakeOff_pas_de_decollage 0U
#endif /* CoPt_bTakeOff_pas_de_decollage */

#ifndef CoPt_bTakeOff_decollage
#define CoPt_bTakeOff_decollage 1U
#endif /* CoPt_bTakeOff_decollage */

#ifndef CoPt_noEgdGearCord_Neutre_ou_debraye
#define CoPt_noEgdGearCord_Neutre_ou_debraye 0U
#endif /* CoPt_noEgdGearCord_Neutre_ou_debraye */

#ifndef CoPt_noEgdGearCord_Rapport_1
#define CoPt_noEgdGearCord_Rapport_1 1U
#endif /* CoPt_noEgdGearCord_Rapport_1 */

#ifndef CoPt_noEgdGearCord_Rapport_2
#define CoPt_noEgdGearCord_Rapport_2 2U
#endif /* CoPt_noEgdGearCord_Rapport_2 */

#ifndef CoPt_noEgdGearCord_Rapport_3
#define CoPt_noEgdGearCord_Rapport_3 3U
#endif /* CoPt_noEgdGearCord_Rapport_3 */

#ifndef CoPt_noEgdGearCord_Rapport_4
#define CoPt_noEgdGearCord_Rapport_4 4U
#endif /* CoPt_noEgdGearCord_Rapport_4 */

#ifndef CoPt_noEgdGearCord_Rapport_5
#define CoPt_noEgdGearCord_Rapport_5 5U
#endif /* CoPt_noEgdGearCord_Rapport_5 */

#ifndef CoPt_noEgdGearCord_Rapport_6
#define CoPt_noEgdGearCord_Rapport_6 6U
#endif /* CoPt_noEgdGearCord_Rapport_6 */

#ifndef CoPt_noEgdGearCord_Marche_Arriere
#define CoPt_noEgdGearCord_Marche_Arriere 7U
#endif /* CoPt_noEgdGearCord_Marche_Arriere */

#ifndef ESLim_bAcvTrqLim_inactive
#define ESLim_bAcvTrqLim_inactive 0U
#endif /* ESLim_bAcvTrqLim_inactive */

#ifndef ESLim_bAcvTrqLim_active
#define ESLim_bAcvTrqLim_active 1U
#endif /* ESLim_bAcvTrqLim_active */

#ifndef Ext_bKeyOn_ignition_key_off
#define Ext_bKeyOn_ignition_key_off 0U
#endif /* Ext_bKeyOn_ignition_key_off */

#ifndef Ext_bKeyOn_ignition_key_on
#define Ext_bKeyOn_ignition_key_on 1U
#endif /* Ext_bKeyOn_ignition_key_on */

#ifndef Ext_bModSpt_Mode_sport_active
#define Ext_bModSpt_Mode_sport_active 0U
#endif /* Ext_bModSpt_Mode_sport_active */

#ifndef Ext_bModSpt_Mode_sport_desactive
#define Ext_bModSpt_Mode_sport_desactive 1U
#endif /* Ext_bModSpt_Mode_sport_desactive */

#ifndef Ext_bRvs_Marche_AV_ou_point_mort
#define Ext_bRvs_Marche_AV_ou_point_mort 0U
#endif /* Ext_bRvs_Marche_AV_ou_point_mort */

#ifndef Ext_bRvs_Marche_AR_engagee
#define Ext_bRvs_Marche_AR_engagee 1U
#endif /* Ext_bRvs_Marche_AR_engagee */

#ifndef Ext_stGBxCf_BVM
#define Ext_stGBxCf_BVM 0U
#endif /* Ext_stGBxCf_BVM */

#ifndef Ext_stGBxCf_BVA
#define Ext_stGBxCf_BVA 1U
#endif /* Ext_stGBxCf_BVA */

#ifndef Ext_stGBxCf_BVMP
#define Ext_stGBxCf_BVMP 2U
#endif /* Ext_stGBxCf_BVMP */

#ifndef TqAdp_bFrzAdpACOn_pas_d_interdiction_d_apprentissage_par_la_climatisation
#define TqAdp_bFrzAdpACOn_pas_d_interdiction_d_apprentissage_par_la_climatisation 0U
#endif /* TqAdp_bFrzAdpACOn_pas_d_interdiction_d_apprentissage_par_la_climatisation */

#ifndef TqAdp_bFrzAdpACOn_interdiction_d_apprentissage_par_la_climatisation
#define TqAdp_bFrzAdpACOn_interdiction_d_apprentissage_par_la_climatisation 1U
#endif /* TqAdp_bFrzAdpACOn_interdiction_d_apprentissage_par_la_climatisation */

#ifndef TqAdp_bFrzAdpAltOn_pas_d_interdiction_d_apprentissage_par_l_alternateur
#define TqAdp_bFrzAdpAltOn_pas_d_interdiction_d_apprentissage_par_l_alternateur 0U
#endif /* TqAdp_bFrzAdpAltOn_pas_d_interdiction_d_apprentissage_par_l_alternateur */

#ifndef TqAdp_bFrzAdpAltOn_interdiction_d_apprentissage_par_l_alternateur
#define TqAdp_bFrzAdpAltOn_interdiction_d_apprentissage_par_l_alternateur 1U
#endif /* TqAdp_bFrzAdpAltOn_interdiction_d_apprentissage_par_l_alternateur */

#ifndef TqAdp_bFrzAdpCnvOn_pas_d_interdiction_d_apprentissage_par_le_convertisseur
#define TqAdp_bFrzAdpCnvOn_pas_d_interdiction_d_apprentissage_par_le_convertisseur 0U
#endif /* TqAdp_bFrzAdpCnvOn_pas_d_interdiction_d_apprentissage_par_le_convertisseur */

#ifndef TqAdp_bFrzAdpCnvOn_interdiction_d_apprentissage_par_le_convertisseur
#define TqAdp_bFrzAdpCnvOn_interdiction_d_apprentissage_par_le_convertisseur 1U
#endif /* TqAdp_bFrzAdpCnvOn_interdiction_d_apprentissage_par_le_convertisseur */

#ifndef TqAdp_bFrzAdpStgPmpOn_pas_d_interdiction_d_apprentissage_par_la_pompe_de_direction_assistee
#define TqAdp_bFrzAdpStgPmpOn_pas_d_interdiction_d_apprentissage_par_la_pompe_de_direction_assistee 0U
#endif /* TqAdp_bFrzAdpStgPmpOn_pas_d_interdiction_d_apprentissage_par_la_pompe_de_direction_assistee */

#ifndef TqAdp_bFrzAdpStgPmpOn_interdiction_d_apprentissage_par_la_pompe_de_direction_assistee
#define TqAdp_bFrzAdpStgPmpOn_interdiction_d_apprentissage_par_la_pompe_de_direction_assistee 1U
#endif /* TqAdp_bFrzAdpStgPmpOn_interdiction_d_apprentissage_par_la_pompe_de_direction_assistee */

#ifndef TqSys_bAcvAntiStall_pas_de_risque_de_calage
#define TqSys_bAcvAntiStall_pas_de_risque_de_calage 0U
#endif /* TqSys_bAcvAntiStall_pas_de_risque_de_calage */

#ifndef TqSys_bAcvAntiStall_risque_de_calage_en_cours
#define TqSys_bAcvAntiStall_risque_de_calage_en_cours 1U
#endif /* TqSys_bAcvAntiStall_risque_de_calage_en_cours */

#ifndef TqSys_bAcvAntiStallMan_Non_active
#define TqSys_bAcvAntiStallMan_Non_active 0U
#endif /* TqSys_bAcvAntiStallMan_Non_active */

#ifndef TqSys_bAcvAntiStallMan_Anticalge_active
#define TqSys_bAcvAntiStallMan_Anticalge_active 1U
#endif /* TqSys_bAcvAntiStallMan_Anticalge_active */

#ifndef TqSys_bEngNOnIdl_ralenti_inactif
#define TqSys_bEngNOnIdl_ralenti_inactif 0U
#endif /* TqSys_bEngNOnIdl_ralenti_inactif */

#ifndef TqSys_bEngNOnIdl_ralenti_actif
#define TqSys_bEngNOnIdl_ralenti_actif 1U
#endif /* TqSys_bEngNOnIdl_ralenti_actif */

#ifndef TqSys_bTypFu_Diesel
#define TqSys_bTypFu_Diesel 0U
#endif /* TqSys_bTypFu_Diesel */

#ifndef TqSys_bTypFu_Essence
#define TqSys_bTypFu_Essence 1U
#endif /* TqSys_bTypFu_Essence */

#endif /* (!defined RTE_CORE) */

/*------------------[range definitions]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif /* (!defined RTE_CORE) */

/*------------------[mode declarations]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

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

#endif /* (!defined RTE_CORE) */

/*==================[type definitions]=======================================*/

/*------------------[mode declaration group types]---------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#ifndef RTE_MODETYPE_EcuM_Mode
#define RTE_MODETYPE_EcuM_Mode
typedef UInt8 Rte_ModeType_EcuM_Mode;
#endif

#ifndef RTE_MODETYPE_RCD_stWkuMainRelSt
#define RTE_MODETYPE_RCD_stWkuMainRelSt
typedef UInt8 Rte_ModeType_RCD_stWkuMainRelSt;
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
#endif /* !defined(RTE_TQDEM_TYPE_H) */
/*==================[end of file]============================================*/


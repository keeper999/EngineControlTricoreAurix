#if !defined(RTE_COCLLASL_TYPE_H)
#define RTE_COCLLASL_TYPE_H

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
  * This file contains the application-specific types for component type COCLLASL
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

#ifndef TqCll_bAcvCll_pas_demande_de_bouclage_vers_l_exterieur
#define TqCll_bAcvCll_pas_demande_de_bouclage_vers_l_exterieur 0U
#endif /* TqCll_bAcvCll_pas_demande_de_bouclage_vers_l_exterieur */

#ifndef TqCll_bAcvCll_demande_de_bouclage_vers_l_exterieur
#define TqCll_bAcvCll_demande_de_bouclage_vers_l_exterieur 1U
#endif /* TqCll_bAcvCll_demande_de_bouclage_vers_l_exterieur */

#ifndef TqCll_bForcCll_pas_demande_de_bouclage_forcee
#define TqCll_bForcCll_pas_demande_de_bouclage_forcee 0U
#endif /* TqCll_bForcCll_pas_demande_de_bouclage_forcee */

#ifndef TqCll_bForcCll_demande_de_bouclage_forcee
#define TqCll_bForcCll_demande_de_bouclage_forcee 1U
#endif /* TqCll_bForcCll_demande_de_bouclage_forcee */

#ifndef TqCll_bReqCllPtl_pas_demande_de_bouclage_partiel
#define TqCll_bReqCllPtl_pas_demande_de_bouclage_partiel 0U
#endif /* TqCll_bReqCllPtl_pas_demande_de_bouclage_partiel */

#ifndef TqCll_bReqCllPtl_demande_de_bouclage_partiel
#define TqCll_bReqCllPtl_demande_de_bouclage_partiel 1U
#endif /* TqCll_bReqCllPtl_demande_de_bouclage_partiel */

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

#ifndef TqSys_bAcvAntiStallSmk_Desactivation
#define TqSys_bAcvAntiStallSmk_Desactivation 0U
#endif /* TqSys_bAcvAntiStallSmk_Desactivation */

#ifndef TqSys_bAcvAntiStallSmk_Activation
#define TqSys_bAcvAntiStallSmk_Activation 1U
#endif /* TqSys_bAcvAntiStallSmk_Activation */

#ifndef TqSys_bEngNOnIdl_ralenti_inactif
#define TqSys_bEngNOnIdl_ralenti_inactif 0U
#endif /* TqSys_bEngNOnIdl_ralenti_inactif */

#ifndef TqSys_bEngNOnIdl_ralenti_actif
#define TqSys_bEngNOnIdl_ralenti_actif 1U
#endif /* TqSys_bEngNOnIdl_ralenti_actif */

#ifndef TqSys_bEngUHNOnIdl_inactif
#define TqSys_bEngUHNOnIdl_inactif 0U
#endif /* TqSys_bEngUHNOnIdl_inactif */

#ifndef TqSys_bEngUHNOnIdl_actif
#define TqSys_bEngUHNOnIdl_actif 1U
#endif /* TqSys_bEngUHNOnIdl_actif */

#ifndef TqSys_bIdlAcvCmn_ralenti_inactif
#define TqSys_bIdlAcvCmn_ralenti_inactif 0U
#endif /* TqSys_bIdlAcvCmn_ralenti_inactif */

#ifndef TqSys_bIdlAcvCmn_ralenti_actif
#define TqSys_bIdlAcvCmn_ralenti_actif 1U
#endif /* TqSys_bIdlAcvCmn_ralenti_actif */

#ifndef CoCha_bAcvCll_pas_demande_de_bouclage_par_l_ESP
#define CoCha_bAcvCll_pas_demande_de_bouclage_par_l_ESP 0U
#endif /* CoCha_bAcvCll_pas_demande_de_bouclage_par_l_ESP */

#ifndef CoCha_bAcvCll_demande_de_bouclage_par_l_ESP
#define CoCha_bAcvCll_demande_de_bouclage_par_l_ESP 1U
#endif /* CoCha_bAcvCll_demande_de_bouclage_par_l_ESP */

#ifndef CoPt_bAcvCll_pas_d_activation
#define CoPt_bAcvCll_pas_d_activation 0U
#endif /* CoPt_bAcvCll_pas_d_activation */

#ifndef CoPt_bAcvCll_activation
#define CoPt_bAcvCll_activation 1U
#endif /* CoPt_bAcvCll_activation */

#ifndef CoPt_bSIPCord_Pas_de_changement_de_rapport_en_cours
#define CoPt_bSIPCord_Pas_de_changement_de_rapport_en_cours 0U
#endif /* CoPt_bSIPCord_Pas_de_changement_de_rapport_en_cours */

#ifndef CoPt_bSIPCord_Changement_de_rapport_en_cours
#define CoPt_bSIPCord_Changement_de_rapport_en_cours 1U
#endif /* CoPt_bSIPCord_Changement_de_rapport_en_cours */

#ifndef CoPt_bTqTx_pas_de_transmission_de_couple
#define CoPt_bTqTx_pas_de_transmission_de_couple 0U
#endif /* CoPt_bTqTx_pas_de_transmission_de_couple */

#ifndef CoPt_bTqTx_transmission_de_couple
#define CoPt_bTqTx_transmission_de_couple 1U
#endif /* CoPt_bTqTx_transmission_de_couple */

#ifndef CoPt_noGearCord_rapport_0
#define CoPt_noGearCord_rapport_0 0U
#endif /* CoPt_noGearCord_rapport_0 */

#ifndef CoPt_noGearCord_rapport_1
#define CoPt_noGearCord_rapport_1 1U
#endif /* CoPt_noGearCord_rapport_1 */

#ifndef CoPt_noGearCord_rapport_2
#define CoPt_noGearCord_rapport_2 2U
#endif /* CoPt_noGearCord_rapport_2 */

#ifndef CoPt_noGearCord_rapport_3
#define CoPt_noGearCord_rapport_3 3U
#endif /* CoPt_noGearCord_rapport_3 */

#ifndef CoPt_noGearCord_rapport_4
#define CoPt_noGearCord_rapport_4 4U
#endif /* CoPt_noGearCord_rapport_4 */

#ifndef CoPt_noGearCord_rapport_5
#define CoPt_noGearCord_rapport_5 5U
#endif /* CoPt_noGearCord_rapport_5 */

#ifndef CoPt_noGearCord_rapport_6
#define CoPt_noGearCord_rapport_6 6U
#endif /* CoPt_noGearCord_rapport_6 */

#ifndef CoPt_noGearCordDrivFil_rapport_equivalent_0
#define CoPt_noGearCordDrivFil_rapport_equivalent_0 0U
#endif /* CoPt_noGearCordDrivFil_rapport_equivalent_0 */

#ifndef CoPt_noGearCordDrivFil_rapport_equivalent_1
#define CoPt_noGearCordDrivFil_rapport_equivalent_1 1U
#endif /* CoPt_noGearCordDrivFil_rapport_equivalent_1 */

#ifndef CoPt_noGearCordDrivFil_rapport_equivalent_2
#define CoPt_noGearCordDrivFil_rapport_equivalent_2 2U
#endif /* CoPt_noGearCordDrivFil_rapport_equivalent_2 */

#ifndef CoPt_noGearCordDrivFil_rapport_equivalent_3
#define CoPt_noGearCordDrivFil_rapport_equivalent_3 3U
#endif /* CoPt_noGearCordDrivFil_rapport_equivalent_3 */

#ifndef CoPt_noGearCordDrivFil_rapport_equivalent_4
#define CoPt_noGearCordDrivFil_rapport_equivalent_4 4U
#endif /* CoPt_noGearCordDrivFil_rapport_equivalent_4 */

#ifndef CoPt_noGearCordDrivFil_rapport_equivalent_5
#define CoPt_noGearCordDrivFil_rapport_equivalent_5 5U
#endif /* CoPt_noGearCordDrivFil_rapport_equivalent_5 */

#ifndef CoPt_noGearCordDrivFil_rapport_equivalent_6
#define CoPt_noGearCordDrivFil_rapport_equivalent_6 6U
#endif /* CoPt_noGearCordDrivFil_rapport_equivalent_6 */

#ifndef CoPt_noGearCordDrivFil_rapport_equivalent_7
#define CoPt_noGearCordDrivFil_rapport_equivalent_7 7U
#endif /* CoPt_noGearCordDrivFil_rapport_equivalent_7 */

#ifndef CoPt_noGearCordDrivFil_rapport_equivalent_8
#define CoPt_noGearCordDrivFil_rapport_equivalent_8 8U
#endif /* CoPt_noGearCordDrivFil_rapport_equivalent_8 */

#ifndef CoPt_stCpl_Ouvert
#define CoPt_stCpl_Ouvert 0U
#endif /* CoPt_stCpl_Ouvert */

#ifndef CoPt_stCpl_Glissant_reel
#define CoPt_stCpl_Glissant_reel 1U
#endif /* CoPt_stCpl_Glissant_reel */

#ifndef CoPt_stCpl_Glissant_potentiel
#define CoPt_stCpl_Glissant_potentiel 2U
#endif /* CoPt_stCpl_Glissant_potentiel */

#ifndef CoPt_stCpl_Ferme
#define CoPt_stCpl_Ferme 3U
#endif /* CoPt_stCpl_Ferme */

#ifndef DfwCtl_bAcvLimTqIdl_No_activation
#define DfwCtl_bAcvLimTqIdl_No_activation 0U
#endif /* DfwCtl_bAcvLimTqIdl_No_activation */

#ifndef DfwCtl_bAcvLimTqIdl_Activation
#define DfwCtl_bAcvLimTqIdl_Activation 1U
#endif /* DfwCtl_bAcvLimTqIdl_Activation */

#ifndef EngLim_bAcvCll_pas_demande_de_bouclage_par_les_limitations_moteurs
#define EngLim_bAcvCll_pas_demande_de_bouclage_par_les_limitations_moteurs 0U
#endif /* EngLim_bAcvCll_pas_demande_de_bouclage_par_les_limitations_moteurs */

#ifndef EngLim_bAcvCll_demande_de_bouclage_par_les_limitations_moteurs
#define EngLim_bAcvCll_demande_de_bouclage_par_les_limitations_moteurs 1U
#endif /* EngLim_bAcvCll_demande_de_bouclage_par_les_limitations_moteurs */

#ifndef Eng_bAcvCllEngReq_pas_de_demande_de_bouclage_par_la_strate_moteur
#define Eng_bAcvCllEngReq_pas_de_demande_de_bouclage_par_la_strate_moteur 0U
#endif /* Eng_bAcvCllEngReq_pas_de_demande_de_bouclage_par_la_strate_moteur */

#ifndef Eng_bAcvCllEngReq_demande_de_bouclage_par_la_strate_moteur
#define Eng_bAcvCllEngReq_demande_de_bouclage_par_la_strate_moteur 1U
#endif /* Eng_bAcvCllEngReq_demande_de_bouclage_par_la_strate_moteur */

#ifndef CoBrk_bAcvBrk_pas_de_freinage
#define CoBrk_bAcvBrk_pas_de_freinage 0U
#endif /* CoBrk_bAcvBrk_pas_de_freinage */

#ifndef CoBrk_bAcvBrk_freinage_en_cours
#define CoBrk_bAcvBrk_freinage_en_cours 1U
#endif /* CoBrk_bAcvBrk_freinage_en_cours */

#ifndef Ext_stGBxCf_BVM
#define Ext_stGBxCf_BVM 0U
#endif /* Ext_stGBxCf_BVM */

#ifndef Ext_stGBxCf_BVA
#define Ext_stGBxCf_BVA 1U
#endif /* Ext_stGBxCf_BVA */

#ifndef Ext_stGBxCf_BVMP
#define Ext_stGBxCf_BVMP 2U
#endif /* Ext_stGBxCf_BVMP */

#ifndef IdlSys_bAcvIdlCtl_desactive
#define IdlSys_bAcvIdlCtl_desactive 0U
#endif /* IdlSys_bAcvIdlCtl_desactive */

#ifndef IdlSys_bAcvIdlCtl_active
#define IdlSys_bAcvIdlCtl_active 1U
#endif /* IdlSys_bAcvIdlCtl_active */

#ifndef TqSys_bAOSAcv_pas_de_correction_curatif_active
#define TqSys_bAOSAcv_pas_de_correction_curatif_active 0U
#endif /* TqSys_bAOSAcv_pas_de_correction_curatif_active */

#ifndef TqSys_bAOSAcv_correction_curatif_active
#define TqSys_bAOSAcv_correction_curatif_active 1U
#endif /* TqSys_bAOSAcv_correction_curatif_active */

#ifndef TqSys_bAcvCll_pas_demande_de_bouclage_par_l_agrement_preventif
#define TqSys_bAcvCll_pas_demande_de_bouclage_par_l_agrement_preventif 0U
#endif /* TqSys_bAcvCll_pas_demande_de_bouclage_par_l_agrement_preventif */

#ifndef TqSys_bAcvCll_demande_de_bouclage_par_l_agrement_preventif
#define TqSys_bAcvCll_demande_de_bouclage_par_l_agrement_preventif 1U
#endif /* TqSys_bAcvCll_demande_de_bouclage_par_l_agrement_preventif */

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

#endif /* (!defined RTE_CORE) */

/*==================[type definitions]=======================================*/

/*------------------[mode declaration group types]---------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#ifndef RTE_MODETYPE_EcuM_Mode
#define RTE_MODETYPE_EcuM_Mode
typedef UInt8 Rte_ModeType_EcuM_Mode;
#endif

#ifndef RTE_MODETYPE_RCD_Mode
#define RTE_MODETYPE_RCD_Mode
typedef UInt8 Rte_ModeType_RCD_Mode;
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
#endif /* !defined(RTE_COCLLASL_TYPE_H) */
/*==================[end of file]============================================*/


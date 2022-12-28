#if !defined(RTE_PFILFAST_TYPE_H)
#define RTE_PFILFAST_TYPE_H

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
  * This file contains the application-specific types for component type PFILFAST
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:30 CET 2014. !!!IGNORE-LINE!!!
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

#ifndef CoCha_bTqAccuReq_inactif
#define CoCha_bTqAccuReq_inactif 0U
#endif /* CoCha_bTqAccuReq_inactif */

#ifndef CoCha_bTqAccuReq_actif
#define CoCha_bTqAccuReq_actif 1U
#endif /* CoCha_bTqAccuReq_actif */

#ifndef CoCha_bTqDynReq_inactif
#define CoCha_bTqDynReq_inactif 0U
#endif /* CoCha_bTqDynReq_inactif */

#ifndef CoCha_bTqDynReq_actif
#define CoCha_bTqDynReq_actif 1U
#endif /* CoCha_bTqDynReq_actif */

#ifndef CoCha_bTqReqASR_Regulation_ASR_unactive
#define CoCha_bTqReqASR_Regulation_ASR_unactive 0U
#endif /* CoCha_bTqReqASR_Regulation_ASR_unactive */

#ifndef CoCha_bTqReqASR_Regulation_ASR_active
#define CoCha_bTqReqASR_Regulation_ASR_active 1U
#endif /* CoCha_bTqReqASR_Regulation_ASR_active */

#ifndef CoCha_bTqReqMSR_Regulation_MSR_unactive
#define CoCha_bTqReqMSR_Regulation_MSR_unactive 0U
#endif /* CoCha_bTqReqMSR_Regulation_MSR_unactive */

#ifndef CoCha_bTqReqMSR_Regulation_MSR_active
#define CoCha_bTqReqMSR_Regulation_MSR_active 1U
#endif /* CoCha_bTqReqMSR_Regulation_MSR_active */

#ifndef TqSys_bAcceClrCrossAOSIt_pas_de_detection_accel_avec_traversee_des_jeux_pour_le_curatif
#define TqSys_bAcceClrCrossAOSIt_pas_de_detection_accel_avec_traversee_des_jeux_pour_le_curatif 0U
#endif /* TqSys_bAcceClrCrossAOSIt_pas_de_detection_accel_avec_traversee_des_jeux_pour_le_curatif */

#ifndef TqSys_bAcceClrCrossAOSIt_detection_accel_avec_traversee_des_jeux_pour_le_curatif
#define TqSys_bAcceClrCrossAOSIt_detection_accel_avec_traversee_des_jeux_pour_le_curatif 1U
#endif /* TqSys_bAcceClrCrossAOSIt_detection_accel_avec_traversee_des_jeux_pour_le_curatif */

#ifndef TqSys_bAcceDetAOSIt_pas_de_detection_accel_pour_le_curatif
#define TqSys_bAcceDetAOSIt_pas_de_detection_accel_pour_le_curatif 0U
#endif /* TqSys_bAcceDetAOSIt_pas_de_detection_accel_pour_le_curatif */

#ifndef TqSys_bAcceDetAOSIt_detection_accel_pour_le_curatif
#define TqSys_bAcceDetAOSIt_detection_accel_pour_le_curatif 1U
#endif /* TqSys_bAcceDetAOSIt_detection_accel_pour_le_curatif */

#ifndef TqSys_bAcvCllIt_pas_de_demande_de_bouclage
#define TqSys_bAcvCllIt_pas_de_demande_de_bouclage 0U
#endif /* TqSys_bAcvCllIt_pas_de_demande_de_bouclage */

#ifndef TqSys_bAcvCllIt_demande_de_bouclage
#define TqSys_bAcvCllIt_demande_de_bouclage 1U
#endif /* TqSys_bAcvCllIt_demande_de_bouclage */

#ifndef TqSys_bClrCrossAcce_pas_de_traversee_desjeux
#define TqSys_bClrCrossAcce_pas_de_traversee_desjeux 0U
#endif /* TqSys_bClrCrossAcce_pas_de_traversee_desjeux */

#ifndef TqSys_bClrCrossAcce_traversee_des_jeux_en_cours
#define TqSys_bClrCrossAcce_traversee_des_jeux_en_cours 1U
#endif /* TqSys_bClrCrossAcce_traversee_des_jeux_en_cours */

#ifndef TqSys_bDeceAcvIt_Decel_inactive
#define TqSys_bDeceAcvIt_Decel_inactive 0U
#endif /* TqSys_bDeceAcvIt_Decel_inactive */

#ifndef TqSys_bDeceAcvIt_Decel_active
#define TqSys_bDeceAcvIt_Decel_active 1U
#endif /* TqSys_bDeceAcvIt_Decel_active */

#ifndef TqSys_bDeceDetAOSIt_pas_de_detection_decel_pour_le_curatif
#define TqSys_bDeceDetAOSIt_pas_de_detection_decel_pour_le_curatif 0U
#endif /* TqSys_bDeceDetAOSIt_pas_de_detection_decel_pour_le_curatif */

#ifndef TqSys_bDeceDetAOSIt_detection_decel_pour_le_curatif
#define TqSys_bDeceDetAOSIt_detection_decel_pour_le_curatif 1U
#endif /* TqSys_bDeceDetAOSIt_detection_decel_pour_le_curatif */

#ifndef TqSys_bDiDrivFilReq_pas_d_inhibition_du_filtrage
#define TqSys_bDiDrivFilReq_pas_d_inhibition_du_filtrage 0U
#endif /* TqSys_bDiDrivFilReq_pas_d_inhibition_du_filtrage */

#ifndef TqSys_bDiDrivFilReq_inhibition_du_filtrage
#define TqSys_bDiDrivFilReq_inhibition_du_filtrage 1U
#endif /* TqSys_bDiDrivFilReq_inhibition_du_filtrage */

#ifndef TqSys_bUHFrzReq_pas_de_demande_de_figeage_de_l_alternateur
#define TqSys_bUHFrzReq_pas_de_demande_de_figeage_de_l_alternateur 0U
#endif /* TqSys_bUHFrzReq_pas_de_demande_de_figeage_de_l_alternateur */

#ifndef TqSys_bUHFrzReq_demande_de_figeage_de_l_alternateur
#define TqSys_bUHFrzReq_demande_de_figeage_de_l_alternateur 1U
#endif /* TqSys_bUHFrzReq_demande_de_figeage_de_l_alternateur */

#ifndef TqSys_noCylCutAuthIt_Pas_de_besoin
#define TqSys_noCylCutAuthIt_Pas_de_besoin -1
#endif /* TqSys_noCylCutAuthIt_Pas_de_besoin */

#ifndef TqSys_noCylCutAuthIt_Interdiction_de_coupure
#define TqSys_noCylCutAuthIt_Interdiction_de_coupure 0U
#endif /* TqSys_noCylCutAuthIt_Interdiction_de_coupure */

#ifndef TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_1
#define TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_1 1U
#endif /* TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_1 */

#ifndef TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_2
#define TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_2 2U
#endif /* TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_2 */

#ifndef TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_3
#define TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_3 3U
#endif /* TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_3 */

#ifndef TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_4
#define TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_4 4U
#endif /* TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_4 */

#ifndef TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_5
#define TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_5 5U
#endif /* TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_5 */

#ifndef TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_6
#define TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_6 6U
#endif /* TqSys_noCylCutAuthIt_nombre_de_cylindre_max_autorise_6 */

#ifndef TqSys_noGearCordDrivFil_NEUTRE
#define TqSys_noGearCordDrivFil_NEUTRE 0U
#endif /* TqSys_noGearCordDrivFil_NEUTRE */

#ifndef TqSys_noGearCordDrivFil_Rapport_1
#define TqSys_noGearCordDrivFil_Rapport_1 1U
#endif /* TqSys_noGearCordDrivFil_Rapport_1 */

#ifndef TqSys_noGearCordDrivFil_Rapport_2
#define TqSys_noGearCordDrivFil_Rapport_2 2U
#endif /* TqSys_noGearCordDrivFil_Rapport_2 */

#ifndef TqSys_noGearCordDrivFil_Rapport_3
#define TqSys_noGearCordDrivFil_Rapport_3 3U
#endif /* TqSys_noGearCordDrivFil_Rapport_3 */

#ifndef TqSys_noGearCordDrivFil_Rapport_4
#define TqSys_noGearCordDrivFil_Rapport_4 4U
#endif /* TqSys_noGearCordDrivFil_Rapport_4 */

#ifndef TqSys_noGearCordDrivFil_Rapport_5
#define TqSys_noGearCordDrivFil_Rapport_5 5U
#endif /* TqSys_noGearCordDrivFil_Rapport_5 */

#ifndef TqSys_noGearCordDrivFil_Rapport_6
#define TqSys_noGearCordDrivFil_Rapport_6 6U
#endif /* TqSys_noGearCordDrivFil_Rapport_6 */

#ifndef TqSys_noGearDece_NEUTRE
#define TqSys_noGearDece_NEUTRE 0U
#endif /* TqSys_noGearDece_NEUTRE */

#ifndef TqSys_noGearDece_Rapport_1
#define TqSys_noGearDece_Rapport_1 1U
#endif /* TqSys_noGearDece_Rapport_1 */

#ifndef TqSys_noGearDece_Rapport_2
#define TqSys_noGearDece_Rapport_2 2U
#endif /* TqSys_noGearDece_Rapport_2 */

#ifndef TqSys_noGearDece_Rapport_3
#define TqSys_noGearDece_Rapport_3 3U
#endif /* TqSys_noGearDece_Rapport_3 */

#ifndef TqSys_noGearDece_Rapport_4
#define TqSys_noGearDece_Rapport_4 4U
#endif /* TqSys_noGearDece_Rapport_4 */

#ifndef TqSys_noGearDece_Rapport_5
#define TqSys_noGearDece_Rapport_5 5U
#endif /* TqSys_noGearDece_Rapport_5 */

#ifndef TqSys_noGearDece_Rapport_6
#define TqSys_noGearDece_Rapport_6 6U
#endif /* TqSys_noGearDece_Rapport_6 */

#ifndef TqSys_stDrivFilCfPha_pas_de_filtrage
#define TqSys_stDrivFilCfPha_pas_de_filtrage 0U
#endif /* TqSys_stDrivFilCfPha_pas_de_filtrage */

#ifndef TqSys_stDrivFilCfPha_filtrage_nominal
#define TqSys_stDrivFilCfPha_filtrage_nominal 1U
#endif /* TqSys_stDrivFilCfPha_filtrage_nominal */

#ifndef TqSys_stDrivFilCfPha_filtrage_nominal_pondere
#define TqSys_stDrivFilCfPha_filtrage_nominal_pondere 2U
#endif /* TqSys_stDrivFilCfPha_filtrage_nominal_pondere */

#ifndef TqSys_stDrivFilCfPha_filtrage_corrige
#define TqSys_stDrivFilCfPha_filtrage_corrige 3U
#endif /* TqSys_stDrivFilCfPha_filtrage_corrige */

#ifndef TqSys_stDrivFilCfPha_filtrage_corrige_pondere
#define TqSys_stDrivFilCfPha_filtrage_corrige_pondere 4U
#endif /* TqSys_stDrivFilCfPha_filtrage_corrige_pondere */

#ifndef TqSys_stDrivFilPhaIt_filtrage_desactive
#define TqSys_stDrivFilPhaIt_filtrage_desactive 0U
#endif /* TqSys_stDrivFilPhaIt_filtrage_desactive */

#ifndef TqSys_stDrivFilPhaIt_filtrage_inactif
#define TqSys_stDrivFilPhaIt_filtrage_inactif 1U
#endif /* TqSys_stDrivFilPhaIt_filtrage_inactif */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_accel_pour_la_zone_2_saut_debue_du_filtrage
#define TqSys_stDrivFilPhaIt_filtrage_en_accel_pour_la_zone_2_saut_debue_du_filtrage 2U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_accel_pour_la_zone_2_saut_debue_du_filtrage */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_accel_pour_la_zone_3_1er_ordre
#define TqSys_stDrivFilPhaIt_filtrage_en_accel_pour_la_zone_3_1er_ordre 3U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_accel_pour_la_zone_3_1er_ordre */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_accel_pour_la_zone_4_pente_de_traversee_des_jeux
#define TqSys_stDrivFilPhaIt_filtrage_en_accel_pour_la_zone_4_pente_de_traversee_des_jeux 4U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_accel_pour_la_zone_4_pente_de_traversee_des_jeux */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_accel_zone_5_forme_parabolique
#define TqSys_stDrivFilPhaIt_filtrage_en_accel_zone_5_forme_parabolique 5U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_accel_zone_5_forme_parabolique */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_accel_zone_6_limitation_de_la_parabole
#define TqSys_stDrivFilPhaIt_filtrage_en_accel_zone_6_limitation_de_la_parabole 6U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_accel_zone_6_limitation_de_la_parabole */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_accel_zone_7_pente_au_dessus_des_jeux
#define TqSys_stDrivFilPhaIt_filtrage_en_accel_zone_7_pente_au_dessus_des_jeux 7U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_accel_zone_7_pente_au_dessus_des_jeux */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_8_saut_de_debut_de_filtrage
#define TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_8_saut_de_debut_de_filtrage 8U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_8_saut_de_debut_de_filtrage */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_9_premiere_pente
#define TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_9_premiere_pente 9U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_9_premiere_pente */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_10_2nd_pente_pour_la_traversee_des_jeux
#define TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_10_2nd_pente_pour_la_traversee_des_jeux 10U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_10_2nd_pente_pour_la_traversee_des_jeux */

#ifndef TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_11_3eme_pente
#define TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_11_3eme_pente 11U
#endif /* TqSys_stDrivFilPhaIt_filtrage_en_decel_zone_11_3eme_pente */

#ifndef Cha_stTqReq_pas_d_action
#define Cha_stTqReq_pas_d_action 0U
#endif /* Cha_stTqReq_pas_d_action */

#ifndef Cha_stTqReq_ASR
#define Cha_stTqReq_ASR 5U
#endif /* Cha_stTqReq_ASR */

#ifndef Cha_stTqReq_MSR
#define Cha_stTqReq_MSR 6U
#endif /* Cha_stTqReq_MSR */

#ifndef CoPt_noDrivFilTyp_Desactive
#define CoPt_noDrivFilTyp_Desactive 0U
#endif /* CoPt_noDrivFilTyp_Desactive */

#ifndef CoPt_noDrivFilTyp_Type_1
#define CoPt_noDrivFilTyp_Type_1 1U
#endif /* CoPt_noDrivFilTyp_Type_1 */

#ifndef CoPt_noDrivFilTyp_Type_1_Pondere
#define CoPt_noDrivFilTyp_Type_1_Pondere 2U
#endif /* CoPt_noDrivFilTyp_Type_1_Pondere */

#ifndef CoPt_noDrivFilTyp_Type_2
#define CoPt_noDrivFilTyp_Type_2 3U
#endif /* CoPt_noDrivFilTyp_Type_2 */

#ifndef CoPt_noDrivFilTyp_Type_2_Pondere
#define CoPt_noDrivFilTyp_Type_2_Pondere 4U
#endif /* CoPt_noDrivFilTyp_Type_2_Pondere */

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

#ifndef Ext_stGBxCf_BVM
#define Ext_stGBxCf_BVM 0U
#endif /* Ext_stGBxCf_BVM */

#ifndef Ext_stGBxCf_BVA
#define Ext_stGBxCf_BVA 1U
#endif /* Ext_stGBxCf_BVA */

#ifndef Ext_stGBxCf_BVMP
#define Ext_stGBxCf_BVMP 2U
#endif /* Ext_stGBxCf_BVMP */

#ifndef TqCll_bAcvCll_pas_demande_de_bouclage_vers_l_exterieur
#define TqCll_bAcvCll_pas_demande_de_bouclage_vers_l_exterieur 0U
#endif /* TqCll_bAcvCll_pas_demande_de_bouclage_vers_l_exterieur */

#ifndef TqCll_bAcvCll_demande_de_bouclage_vers_l_exterieur
#define TqCll_bAcvCll_demande_de_bouclage_vers_l_exterieur 1U
#endif /* TqCll_bAcvCll_demande_de_bouclage_vers_l_exterieur */

#ifndef TqClrCros_bAcvClrCross_Pas_de_passage_de_jeu_en_cours
#define TqClrCros_bAcvClrCross_Pas_de_passage_de_jeu_en_cours 0U
#endif /* TqClrCros_bAcvClrCross_Pas_de_passage_de_jeu_en_cours */

#ifndef TqClrCros_bAcvClrCross_Franchissement_des_jeux
#define TqClrCros_bAcvClrCross_Franchissement_des_jeux 1U
#endif /* TqClrCros_bAcvClrCross_Franchissement_des_jeux */

#ifndef TqClrCros_stDetClr_Detection_inactif
#define TqClrCros_stDetClr_Detection_inactif 0U
#endif /* TqClrCros_stDetClr_Detection_inactif */

#ifndef TqClrCros_stDetClr_Detection_en_cours
#define TqClrCros_stDetClr_Detection_en_cours 1U
#endif /* TqClrCros_stDetClr_Detection_en_cours */

#ifndef TqClrCros_stDetClr_Detection_effecif
#define TqClrCros_stDetClr_Detection_effecif 2U
#endif /* TqClrCros_stDetClr_Detection_effecif */

#ifndef TqClrCros_stDetClr_Fin_de_detection
#define TqClrCros_stDetClr_Fin_de_detection 3U
#endif /* TqClrCros_stDetClr_Fin_de_detection */

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

#ifndef TqSys_bAcvVehSpdCtlReg_pas_de_regulation
#define TqSys_bAcvVehSpdCtlReg_pas_de_regulation 0U
#endif /* TqSys_bAcvVehSpdCtlReg_pas_de_regulation */

#ifndef TqSys_bAcvVehSpdCtlReg_regulation_active
#define TqSys_bAcvVehSpdCtlReg_regulation_active 1U
#endif /* TqSys_bAcvVehSpdCtlReg_regulation_active */

#ifndef TqSys_bInjCutDynReq_coupure_d_injection_inactive
#define TqSys_bInjCutDynReq_coupure_d_injection_inactive 0U
#endif /* TqSys_bInjCutDynReq_coupure_d_injection_inactive */

#ifndef TqSys_bInjCutDynReq_coupure_d_injection_active
#define TqSys_bInjCutDynReq_coupure_d_injection_active 1U
#endif /* TqSys_bInjCutDynReq_coupure_d_injection_active */

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
#endif /* !defined(RTE_PFILFAST_TYPE_H) */
/*==================[end of file]============================================*/

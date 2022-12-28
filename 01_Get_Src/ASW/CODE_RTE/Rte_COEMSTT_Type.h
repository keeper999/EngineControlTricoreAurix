#if !defined(RTE_COEMSTT_TYPE_H)
#define RTE_COEMSTT_TYPE_H

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
  * This file contains the application-specific types for component type COEMSTT
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:29 CET 2014. !!!IGNORE-LINE!!!
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

#ifndef BatMgt_stBattSoC_Nominal
#define BatMgt_stBattSoC_Nominal 0U
#endif /* BatMgt_stBattSoC_Nominal */

#ifndef BatMgt_stBattSoC_Degrade
#define BatMgt_stBattSoC_Degrade 1U
#endif /* BatMgt_stBattSoC_Degrade */

#ifndef BatMgt_stBattSoC_Defaut
#define BatMgt_stBattSoC_Defaut 2U
#endif /* BatMgt_stBattSoC_Defaut */

#ifndef BatMgt_stBattSoC_Invalide
#define BatMgt_stBattSoC_Invalide 3U
#endif /* BatMgt_stBattSoC_Invalide */

#ifndef CoPtUH_bFbSpcFactSTTReq1_Pas_de_demande_pris_en_compte
#define CoPtUH_bFbSpcFactSTTReq1_Pas_de_demande_pris_en_compte 0U
#endif /* CoPtUH_bFbSpcFactSTTReq1_Pas_de_demande_pris_en_compte */

#ifndef CoPtUH_bFbSpcFactSTTReq1_Demande_pris_en_compte
#define CoPtUH_bFbSpcFactSTTReq1_Demande_pris_en_compte 1U
#endif /* CoPtUH_bFbSpcFactSTTReq1_Demande_pris_en_compte */

#ifndef ECU_bWkuChDchaUcap_Pas_de_reveil_partiel
#define ECU_bWkuChDchaUcap_Pas_de_reveil_partiel 0U
#endif /* ECU_bWkuChDchaUcap_Pas_de_reveil_partiel */

#ifndef ECU_bWkuChDchaUcap_Reveil_partiel
#define ECU_bWkuChDchaUcap_Reveil_partiel 1U
#endif /* ECU_bWkuChDchaUcap_Reveil_partiel */

#ifndef ECU_bWkuMain_le_CMM_n_est_pas_en_reveil_principal_ou_reveil_principal_degrade
#define ECU_bWkuMain_le_CMM_n_est_pas_en_reveil_principal_ou_reveil_principal_degrade 0U
#endif /* ECU_bWkuMain_le_CMM_n_est_pas_en_reveil_principal_ou_reveil_principal_degrade */

#ifndef ECU_bWkuMain_le_CMM_est_en_reveil_principal_ou_reveil_principal_degrade
#define ECU_bWkuMain_le_CMM_est_en_reveil_principal_ou_reveil_principal_degrade 1U
#endif /* ECU_bWkuMain_le_CMM_est_en_reveil_principal_ou_reveil_principal_degrade */

#ifndef Ext_bNotAvl_iBattMes_Information_disponible
#define Ext_bNotAvl_iBattMes_Information_disponible 0U
#endif /* Ext_bNotAvl_iBattMes_Information_disponible */

#ifndef Ext_bNotAvl_iBattMes_Information_indisponible
#define Ext_bNotAvl_iBattMes_Information_indisponible 1U
#endif /* Ext_bNotAvl_iBattMes_Information_indisponible */

#ifndef Ext_bNotAvl_rBattSoC_Information_disponible
#define Ext_bNotAvl_rBattSoC_Information_disponible 0U
#endif /* Ext_bNotAvl_rBattSoC_Information_disponible */

#ifndef Ext_bNotAvl_rBattSoC_Information_indisponible
#define Ext_bNotAvl_rBattSoC_Information_indisponible 1U
#endif /* Ext_bNotAvl_rBattSoC_Information_indisponible */

#ifndef Ext_bNotAvl_resBattIt_Information_disponible
#define Ext_bNotAvl_resBattIt_Information_disponible 0U
#endif /* Ext_bNotAvl_resBattIt_Information_disponible */

#ifndef Ext_bNotAvl_resBattIt_Information_indisponible
#define Ext_bNotAvl_resBattIt_Information_indisponible 1U
#endif /* Ext_bNotAvl_resBattIt_Information_indisponible */

#ifndef Ext_bSTTCf_STT_inhibe
#define Ext_bSTTCf_STT_inhibe 0U
#endif /* Ext_bSTTCf_STT_inhibe */

#ifndef Ext_bSTTCf_STT_actif
#define Ext_bSTTCf_STT_actif 1U
#endif /* Ext_bSTTCf_STT_actif */

#ifndef Ext_stBattTypCf__42_Ah
#define Ext_stBattTypCf__42_Ah 0U
#endif /* Ext_stBattTypCf__42_Ah */

#ifndef Ext_stBattTypCf__50_Ah
#define Ext_stBattTypCf__50_Ah 1U
#endif /* Ext_stBattTypCf__50_Ah */

#ifndef Ext_stBattTypCf__55_Ah
#define Ext_stBattTypCf__55_Ah 2U
#endif /* Ext_stBattTypCf__55_Ah */

#ifndef Ext_stBattTypCf__60_Ah
#define Ext_stBattTypCf__60_Ah 3U
#endif /* Ext_stBattTypCf__60_Ah */

#ifndef Ext_stBattTypCf__64_Ah
#define Ext_stBattTypCf__64_Ah 4U
#endif /* Ext_stBattTypCf__64_Ah */

#ifndef Ext_stBattTypCf__70_Ah
#define Ext_stBattTypCf__70_Ah 5U
#endif /* Ext_stBattTypCf__70_Ah */

#ifndef Ext_stBattTypCf__75_Ah
#define Ext_stBattTypCf__75_Ah 6U
#endif /* Ext_stBattTypCf__75_Ah */

#ifndef Ext_stBattTypCf__80_Ah
#define Ext_stBattTypCf__80_Ah 7U
#endif /* Ext_stBattTypCf__80_Ah */

#ifndef Ext_stBattTypCf__82_Ah
#define Ext_stBattTypCf__82_Ah 8U
#endif /* Ext_stBattTypCf__82_Ah */

#ifndef Ext_stBattTypCf__90_Ah
#define Ext_stBattTypCf__90_Ah 9U
#endif /* Ext_stBattTypCf__90_Ah */

#ifndef Ext_stBattTypCf__95_Ah
#define Ext_stBattTypCf__95_Ah 10U
#endif /* Ext_stBattTypCf__95_Ah */

#ifndef Ext_stBattTypCf_reserve_11
#define Ext_stBattTypCf_reserve_11 11U
#endif /* Ext_stBattTypCf_reserve_11 */

#ifndef Ext_stBattTypCf_reserve_12
#define Ext_stBattTypCf_reserve_12 12U
#endif /* Ext_stBattTypCf_reserve_12 */

#ifndef Ext_stBattTypCf_reserve_13
#define Ext_stBattTypCf_reserve_13 13U
#endif /* Ext_stBattTypCf_reserve_13 */

#ifndef Ext_stBattTypCf_reserve_14
#define Ext_stBattTypCf_reserve_14 14U
#endif /* Ext_stBattTypCf_reserve_14 */

#ifndef Ext_stBattTypCf_reserve_15
#define Ext_stBattTypCf_reserve_15 15U
#endif /* Ext_stBattTypCf_reserve_15 */

#ifndef Ext_stElProdCf_Alternateur_standard
#define Ext_stElProdCf_Alternateur_standard 0U
#endif /* Ext_stElProdCf_Alternateur_standard */

#ifndef Ext_stElProdCf_Alternateur_pilote
#define Ext_stElProdCf_Alternateur_pilote 1U
#endif /* Ext_stElProdCf_Alternateur_pilote */

#ifndef Ext_stElProdCf_Alternateur_reversible
#define Ext_stElProdCf_Alternateur_reversible 2U
#endif /* Ext_stElProdCf_Alternateur_reversible */

#ifndef Ext_stElProdCf_Convertisseur_DC_div_DC
#define Ext_stElProdCf_Convertisseur_DC_div_DC 3U
#endif /* Ext_stElProdCf_Convertisseur_DC_div_DC */

#ifndef Ext_stUcapChSpElMgt_Consigne_a_0A
#define Ext_stUcapChSpElMgt_Consigne_a_0A 0U
#endif /* Ext_stUcapChSpElMgt_Consigne_a_0A */

#ifndef Ext_stUcapChSpElMgt_Consigne_a_10A
#define Ext_stUcapChSpElMgt_Consigne_a_10A 1U
#endif /* Ext_stUcapChSpElMgt_Consigne_a_10A */

#ifndef Ext_stUcapChSpElMgt_Consigne_a_28A
#define Ext_stUcapChSpElMgt_Consigne_a_28A 2U
#endif /* Ext_stUcapChSpElMgt_Consigne_a_28A */

#ifndef Ext_stUcapChSpElMgt_Reserve
#define Ext_stUcapChSpElMgt_Reserve 3U
#endif /* Ext_stUcapChSpElMgt_Reserve */

#ifndef Ext_stUcapTypCf_non_identifie
#define Ext_stUcapTypCf_non_identifie 0U
#endif /* Ext_stUcapTypCf_non_identifie */

#ifndef Ext_stUcapTypCf_cellules_de_650_F
#define Ext_stUcapTypCf_cellules_de_650_F 1U
#endif /* Ext_stUcapTypCf_cellules_de_650_F */

#ifndef Ext_stUcapTypCf_cellules_de_1200_F
#define Ext_stUcapTypCf_cellules_de_1200_F 2U
#endif /* Ext_stUcapTypCf_cellules_de_1200_F */

#ifndef Ext_stUcapTypCf_cellules_de_1500_F
#define Ext_stUcapTypCf_cellules_de_1500_F 3U
#endif /* Ext_stUcapTypCf_cellules_de_1500_F */

#ifndef Ext_stUcapTypCf_cellules_de_2000_F
#define Ext_stUcapTypCf_cellules_de_2000_F 4U
#endif /* Ext_stUcapTypCf_cellules_de_2000_F */

#ifndef Ext_stUcapTypCf_cellules_de_3000_F
#define Ext_stUcapTypCf_cellules_de_3000_F 5U
#endif /* Ext_stUcapTypCf_cellules_de_3000_F */

#ifndef Ext_stUcapTypCf_reserve_6
#define Ext_stUcapTypCf_reserve_6 6U
#endif /* Ext_stUcapTypCf_reserve_6 */

#ifndef Ext_stUcapTypCf_reserve_7
#define Ext_stUcapTypCf_reserve_7 7U
#endif /* Ext_stUcapTypCf_reserve_7 */

#ifndef Ext_stVSSCf_Pas_de_DMT
#define Ext_stVSSCf_Pas_de_DMT 0U
#endif /* Ext_stVSSCf_Pas_de_DMT */

#ifndef Ext_stVSSCf_DMTC
#define Ext_stVSSCf_DMTC 1U
#endif /* Ext_stVSSCf_DMTC */

#ifndef Ext_stVSSCf_DMTR
#define Ext_stVSSCf_DMTR 2U
#endif /* Ext_stVSSCf_DMTR */

#ifndef Ext_stVSSCf_reserve_3
#define Ext_stVSSCf_reserve_3 3U
#endif /* Ext_stVSSCf_reserve_3 */

#ifndef StaStrtMgt_bStaReq_OFF
#define StaStrtMgt_bStaReq_OFF 0U
#endif /* StaStrtMgt_bStaReq_OFF */

#ifndef StaStrtMgt_bStaReq_ON
#define StaStrtMgt_bStaReq_ON 1U
#endif /* StaStrtMgt_bStaReq_ON */

#ifndef VSSCtzMgt_stVSSCtzAcvSt_DMTC_passif
#define VSSCtzMgt_stVSSCtzAcvSt_DMTC_passif 0U
#endif /* VSSCtzMgt_stVSSCtzAcvSt_DMTC_passif */

#ifndef VSSCtzMgt_stVSSCtzAcvSt_DMTC_en_charge
#define VSSCtzMgt_stVSSCtzAcvSt_DMTC_en_charge 1U
#endif /* VSSCtzMgt_stVSSCtzAcvSt_DMTC_en_charge */

#ifndef VSSCtzMgt_stVSSCtzAcvSt_DMTC_en_decharge
#define VSSCtzMgt_stVSSCtzAcvSt_DMTC_en_decharge 2U
#endif /* VSSCtzMgt_stVSSCtzAcvSt_DMTC_en_decharge */

#ifndef VSSCtzMgt_stVSSCtzAcvSt_DMTC_en_avertissement_de_decharge_forcee
#define VSSCtzMgt_stVSSCtzAcvSt_DMTC_en_avertissement_de_decharge_forcee 3U
#endif /* VSSCtzMgt_stVSSCtzAcvSt_DMTC_en_avertissement_de_decharge_forcee */

#ifndef VSSCtzMgt_stVSSCtzFctLvl_Niveau_0
#define VSSCtzMgt_stVSSCtzFctLvl_Niveau_0 0U
#endif /* VSSCtzMgt_stVSSCtzFctLvl_Niveau_0 */

#ifndef VSSCtzMgt_stVSSCtzFctLvl_Niveau_1
#define VSSCtzMgt_stVSSCtzFctLvl_Niveau_1 1U
#endif /* VSSCtzMgt_stVSSCtzFctLvl_Niveau_1 */

#ifndef VSSCtzMgt_stVSSCtzFctLvl_Niveau_2
#define VSSCtzMgt_stVSSCtzFctLvl_Niveau_2 2U
#endif /* VSSCtzMgt_stVSSCtzFctLvl_Niveau_2 */

#ifndef VSSCtzMgt_stVSSCtzFctLvl_Reserve
#define VSSCtzMgt_stVSSCtzFctLvl_Reserve 3U
#endif /* VSSCtzMgt_stVSSCtzFctLvl_Reserve */

#ifndef Afts_bLrnRstReq_iElNwStop_Pas_de_demande
#define Afts_bLrnRstReq_iElNwStop_Pas_de_demande 0U
#endif /* Afts_bLrnRstReq_iElNwStop_Pas_de_demande */

#ifndef Afts_bLrnRstReq_iElNwStop_Demande
#define Afts_bLrnRstReq_iElNwStop_Demande 1U
#endif /* Afts_bLrnRstReq_iElNwStop_Demande */

#ifndef Afts_bVSSCtzActrTestCmd_Arreter_le_test
#define Afts_bVSSCtzActrTestCmd_Arreter_le_test 0U
#endif /* Afts_bVSSCtzActrTestCmd_Arreter_le_test */

#ifndef Afts_bVSSCtzActrTestCmd_Lancer_le_test
#define Afts_bVSSCtzActrTestCmd_Lancer_le_test 1U
#endif /* Afts_bVSSCtzActrTestCmd_Lancer_le_test */

#ifndef BatMgt_stBattSoH_Bon
#define BatMgt_stBattSoH_Bon 0U
#endif /* BatMgt_stBattSoH_Bon */

#ifndef BatMgt_stBattSoH_Moyen
#define BatMgt_stBattSoH_Moyen 1U
#endif /* BatMgt_stBattSoH_Moyen */

#ifndef BatMgt_stBattSoH_Faible
#define BatMgt_stBattSoH_Faible 2U
#endif /* BatMgt_stBattSoH_Faible */

#ifndef BatMgt_stBattSoH_Indisponible
#define BatMgt_stBattSoH_Indisponible 3U
#endif /* BatMgt_stBattSoH_Indisponible */

#ifndef CoEmCkg_stRstrtTyp_nominal
#define CoEmCkg_stRstrtTyp_nominal 0U
#endif /* CoEmCkg_stRstrtTyp_nominal */

#ifndef CoEmCkg_stRstrtTyp_favorable
#define CoEmCkg_stRstrtTyp_favorable 1U
#endif /* CoEmCkg_stRstrtTyp_favorable */

#ifndef CoEmCkg_stRstrtTyp_critique
#define CoEmCkg_stRstrtTyp_critique 2U
#endif /* CoEmCkg_stRstrtTyp_critique */

#ifndef CoEmCkg_stRstrtTyp_reserve_3
#define CoEmCkg_stRstrtTyp_reserve_3 3U
#endif /* CoEmCkg_stRstrtTyp_reserve_3 */

#ifndef CoEmCkg_stRstrtTyp_reserve_4
#define CoEmCkg_stRstrtTyp_reserve_4 4U
#endif /* CoEmCkg_stRstrtTyp_reserve_4 */

#ifndef CoEmCkg_stRstrtTyp_reserve_5
#define CoEmCkg_stRstrtTyp_reserve_5 5U
#endif /* CoEmCkg_stRstrtTyp_reserve_5 */

#ifndef CoEmCkg_stRstrtTyp_reserve_6
#define CoEmCkg_stRstrtTyp_reserve_6 6U
#endif /* CoEmCkg_stRstrtTyp_reserve_6 */

#ifndef CoEmCkg_stRstrtTyp_reserve_7
#define CoEmCkg_stRstrtTyp_reserve_7 7U
#endif /* CoEmCkg_stRstrtTyp_reserve_7 */

#ifndef CoEmCkg_stSTTCf_non_STT
#define CoEmCkg_stSTTCf_non_STT 0U
#endif /* CoEmCkg_stSTTCf_non_STT */

#ifndef CoEmCkg_stSTTCf_STTd
#define CoEmCkg_stSTTCf_STTd 1U
#endif /* CoEmCkg_stSTTCf_STTd */

#ifndef CoEmCkg_stSTTCf_STTa_avec_demarreur
#define CoEmCkg_stSTTCf_STTa_avec_demarreur 2U
#endif /* CoEmCkg_stSTTCf_STTa_avec_demarreur */

#ifndef CoEmCkg_stSTTCf_STTa_sans_demarreur
#define CoEmCkg_stSTTCf_STTa_sans_demarreur 3U
#endif /* CoEmCkg_stSTTCf_STTa_sans_demarreur */

#ifndef CoOptmEl_stSoCRefTyp_Referentiel_B0
#define CoOptmEl_stSoCRefTyp_Referentiel_B0 0U
#endif /* CoOptmEl_stSoCRefTyp_Referentiel_B0 */

#ifndef CoOptmEl_stSoCRefTyp_Referentiel_B1
#define CoOptmEl_stSoCRefTyp_Referentiel_B1 1U
#endif /* CoOptmEl_stSoCRefTyp_Referentiel_B1 */

#ifndef CoOptmEl_stSoCRefTyp_Referentiel_B2
#define CoOptmEl_stSoCRefTyp_Referentiel_B2 2U
#endif /* CoOptmEl_stSoCRefTyp_Referentiel_B2 */

#ifndef CoPtSynt_stPwt_Coupe
#define CoPtSynt_stPwt_Coupe 1U
#endif /* CoPtSynt_stPwt_Coupe */

#ifndef CoPtSynt_stPwt_Coupure_en_cours
#define CoPtSynt_stPwt_Coupure_en_cours 3U
#endif /* CoPtSynt_stPwt_Coupure_en_cours */

#ifndef CoPtSynt_stPwt_Demarrage
#define CoPtSynt_stPwt_Demarrage 5U
#endif /* CoPtSynt_stPwt_Demarrage */

#ifndef CoPtSynt_stPwt_Mobilite_active
#define CoPtSynt_stPwt_Mobilite_active 7U
#endif /* CoPtSynt_stPwt_Mobilite_active */

#ifndef CoPtSynt_stPwt_Tournant
#define CoPtSynt_stPwt_Tournant 9U
#endif /* CoPtSynt_stPwt_Tournant */

#ifndef CoPtSynt_stPwt_Arret_en_cours
#define CoPtSynt_stPwt_Arret_en_cours 11U
#endif /* CoPtSynt_stPwt_Arret_en_cours */

#ifndef CoPtSynt_stPwt_Arret
#define CoPtSynt_stPwt_Arret 13U
#endif /* CoPtSynt_stPwt_Arret */

#ifndef CoPtSynt_stPwt_Redemarrage
#define CoPtSynt_stPwt_Redemarrage 15U
#endif /* CoPtSynt_stPwt_Redemarrage */

#ifndef CoPtSynt_stPwt_Calage_en_cours
#define CoPtSynt_stPwt_Calage_en_cours 21U
#endif /* CoPtSynt_stPwt_Calage_en_cours */

#ifndef CoPtSynt_stPwt_Cale
#define CoPtSynt_stPwt_Cale 23U
#endif /* CoPtSynt_stPwt_Cale */

#ifndef CoPtSynt_stPwt_Sortie_calage
#define CoPtSynt_stPwt_Sortie_calage 25U
#endif /* CoPtSynt_stPwt_Sortie_calage */

#ifndef CoPtUH_stTypSTTNotAvl_Reserve
#define CoPtUH_stTypSTTNotAvl_Reserve 0U
#endif /* CoPtUH_stTypSTTNotAvl_Reserve */

#ifndef CoPtUH_stTypSTTNotAvl_indisponibilite_indeterminee
#define CoPtUH_stTypSTTNotAvl_indisponibilite_indeterminee 1U
#endif /* CoPtUH_stTypSTTNotAvl_indisponibilite_indeterminee */

#ifndef CoPtUH_stTypSTTNotAvl_indisponibilie_moyenne
#define CoPtUH_stTypSTTNotAvl_indisponibilie_moyenne 2U
#endif /* CoPtUH_stTypSTTNotAvl_indisponibilie_moyenne */

#ifndef CoPtUH_stTypSTTNotAvl_indisponibilite_longue
#define CoPtUH_stTypSTTNotAvl_indisponibilite_longue 3U
#endif /* CoPtUH_stTypSTTNotAvl_indisponibilite_longue */

#ifndef Ext_bNotAvl_tBattMes_Disponible
#define Ext_bNotAvl_tBattMes_Disponible 0U
#endif /* Ext_bNotAvl_tBattMes_Disponible */

#ifndef Ext_bNotAvl_tBattMes_Indisponible
#define Ext_bNotAvl_tBattMes_Indisponible 1U
#endif /* Ext_bNotAvl_tBattMes_Indisponible */

#ifndef Ext_bVSSNwAcvSt_maintien_inactif
#define Ext_bVSSNwAcvSt_maintien_inactif 0U
#endif /* Ext_bVSSNwAcvSt_maintien_inactif */

#ifndef Ext_bVSSNwAcvSt_maintien_actif
#define Ext_bVSSNwAcvSt_maintien_actif 1U
#endif /* Ext_bVSSNwAcvSt_maintien_actif */

#ifndef Ext_stTraTypCf_AL4
#define Ext_stTraTypCf_AL4 0U
#endif /* Ext_stTraTypCf_AL4 */

#ifndef Ext_stTraTypCf_Ax6
#define Ext_stTraTypCf_Ax6 1U
#endif /* Ext_stTraTypCf_Ax6 */

#ifndef Ext_stTraTypCf_XXX1Auto
#define Ext_stTraTypCf_XXX1Auto 2U
#endif /* Ext_stTraTypCf_XXX1Auto */

#ifndef Ext_stTraTypCf_DCT
#define Ext_stTraTypCf_DCT 3U
#endif /* Ext_stTraTypCf_DCT */

#ifndef Ext_stTraTypCf_MCP
#define Ext_stTraTypCf_MCP 4U
#endif /* Ext_stTraTypCf_MCP */

#ifndef Ext_stTraTypCf_MAP
#define Ext_stTraTypCf_MAP 5U
#endif /* Ext_stTraTypCf_MAP */

#ifndef Ext_stTraTypCf_XXX1Pilote
#define Ext_stTraTypCf_XXX1Pilote 6U
#endif /* Ext_stTraTypCf_XXX1Pilote */

#ifndef Ext_stTraTypCf_BVM
#define Ext_stTraTypCf_BVM 7U
#endif /* Ext_stTraTypCf_BVM */

#ifndef RvAltMgt_bAntStopStrtWarn_pas_d_anticipation_Stop_Start_Warning
#define RvAltMgt_bAntStopStrtWarn_pas_d_anticipation_Stop_Start_Warning 0U
#endif /* RvAltMgt_bAntStopStrtWarn_pas_d_anticipation_Stop_Start_Warning */

#ifndef RvAltMgt_bAntStopStrtWarn_anticipation_Stop_Start_Warning
#define RvAltMgt_bAntStopStrtWarn_anticipation_Stop_Start_Warning 1U
#endif /* RvAltMgt_bAntStopStrtWarn_anticipation_Stop_Start_Warning */

#ifndef RvAltMgt_bStopStrtWarn_pas_de_Stop_Start_Warning
#define RvAltMgt_bStopStrtWarn_pas_de_Stop_Start_Warning 0U
#endif /* RvAltMgt_bStopStrtWarn_pas_de_Stop_Start_Warning */

#ifndef RvAltMgt_bStopStrtWarn_Stop_Start_Warning
#define RvAltMgt_bStopStrtWarn_Stop_Start_Warning 1U
#endif /* RvAltMgt_bStopStrtWarn_Stop_Start_Warning */

#ifndef RvAltMgt_stRvAltRstrtFbCmd_Autorise
#define RvAltMgt_stRvAltRstrtFbCmd_Autorise 0U
#endif /* RvAltMgt_stRvAltRstrtFbCmd_Autorise */

#ifndef RvAltMgt_stRvAltRstrtFbCmd_Actif
#define RvAltMgt_stRvAltRstrtFbCmd_Actif 1U
#endif /* RvAltMgt_stRvAltRstrtFbCmd_Actif */

#ifndef RvAltMgt_stRvAltRstrtFbCmd_Interdit
#define RvAltMgt_stRvAltRstrtFbCmd_Interdit 2U
#endif /* RvAltMgt_stRvAltRstrtFbCmd_Interdit */

#ifndef RvAltMgt_stRvAltRstrtFbCmd_Echec
#define RvAltMgt_stRvAltRstrtFbCmd_Echec 3U
#endif /* RvAltMgt_stRvAltRstrtFbCmd_Echec */

#ifndef StaRstrtMgt_bProt10StopInh_Non_inhibe
#define StaRstrtMgt_bProt10StopInh_Non_inhibe 0U
#endif /* StaRstrtMgt_bProt10StopInh_Non_inhibe */

#ifndef StaRstrtMgt_bProt10StopInh_Inhibe
#define StaRstrtMgt_bProt10StopInh_Inhibe 1U
#endif /* StaRstrtMgt_bProt10StopInh_Inhibe */

#ifndef StaRstrtMgt_stStaRstrtFbCmd_Autorise
#define StaRstrtMgt_stStaRstrtFbCmd_Autorise 0U
#endif /* StaRstrtMgt_stStaRstrtFbCmd_Autorise */

#ifndef StaRstrtMgt_stStaRstrtFbCmd_Actif
#define StaRstrtMgt_stStaRstrtFbCmd_Actif 1U
#endif /* StaRstrtMgt_stStaRstrtFbCmd_Actif */

#ifndef StaRstrtMgt_stStaRstrtFbCmd_Interdit
#define StaRstrtMgt_stStaRstrtFbCmd_Interdit 2U
#endif /* StaRstrtMgt_stStaRstrtFbCmd_Interdit */

#ifndef StaRstrtMgt_stStaRstrtFbCmd_Echec
#define StaRstrtMgt_stStaRstrtFbCmd_Echec 3U
#endif /* StaRstrtMgt_stStaRstrtFbCmd_Echec */

#ifndef StopStrtEng_stCdnNxtCkg_Nominal
#define StopStrtEng_stCdnNxtCkg_Nominal 0U
#endif /* StopStrtEng_stCdnNxtCkg_Nominal */

#ifndef StopStrtEng_stCdnNxtCkg_Favorable
#define StopStrtEng_stCdnNxtCkg_Favorable 1U
#endif /* StopStrtEng_stCdnNxtCkg_Favorable */

#ifndef StopStrtEng_stCdnNxtCkg_Defavorable
#define StopStrtEng_stCdnNxtCkg_Defavorable 2U
#endif /* StopStrtEng_stCdnNxtCkg_Defavorable */

#ifndef VSSCtzMgt_bUcapSerAcvTest_Non_realise
#define VSSCtzMgt_bUcapSerAcvTest_Non_realise 0U
#endif /* VSSCtzMgt_bUcapSerAcvTest_Non_realise */

#ifndef VSSCtzMgt_bUcapSerAcvTest_Realise
#define VSSCtzMgt_bUcapSerAcvTest_Realise 1U
#endif /* VSSCtzMgt_bUcapSerAcvTest_Realise */

#ifndef VSSCtzMgt_stUcapDchaRslt_Pas_de_decharge
#define VSSCtzMgt_stUcapDchaRslt_Pas_de_decharge 0U
#endif /* VSSCtzMgt_stUcapDchaRslt_Pas_de_decharge */

#ifndef VSSCtzMgt_stUcapDchaRslt_Decharge_en_cours
#define VSSCtzMgt_stUcapDchaRslt_Decharge_en_cours 1U
#endif /* VSSCtzMgt_stUcapDchaRslt_Decharge_en_cours */

#ifndef VSSCtzMgt_stUcapDchaRslt_Decharge_echouee
#define VSSCtzMgt_stUcapDchaRslt_Decharge_echouee 2U
#endif /* VSSCtzMgt_stUcapDchaRslt_Decharge_echouee */

#ifndef VSSCtzMgt_stUcapDchaRslt_Decharge_reussie
#define VSSCtzMgt_stUcapDchaRslt_Decharge_reussie 3U
#endif /* VSSCtzMgt_stUcapDchaRslt_Decharge_reussie */

#ifndef Afts_bLrnRstReq_uEmPredRstrt_Pas_de_demande
#define Afts_bLrnRstReq_uEmPredRstrt_Pas_de_demande 0U
#endif /* Afts_bLrnRstReq_uEmPredRstrt_Pas_de_demande */

#ifndef Afts_bLrnRstReq_uEmPredRstrt_Demande
#define Afts_bLrnRstReq_uEmPredRstrt_Demande 1U
#endif /* Afts_bLrnRstReq_uEmPredRstrt_Demande */

#ifndef Afts_bUcapChgIdc_Pas_de_remplacement_effectue
#define Afts_bUcapChgIdc_Pas_de_remplacement_effectue 0U
#endif /* Afts_bUcapChgIdc_Pas_de_remplacement_effectue */

#ifndef Afts_bUcapChgIdc_Remplacement_effectue
#define Afts_bUcapChgIdc_Remplacement_effectue 1U
#endif /* Afts_bUcapChgIdc_Remplacement_effectue */

#ifndef CoPtUH_bRStrtReqAvl_pas_de_dmd_Redemarrage
#define CoPtUH_bRStrtReqAvl_pas_de_dmd_Redemarrage 0U
#endif /* CoPtUH_bRStrtReqAvl_pas_de_dmd_Redemarrage */

#ifndef CoPtUH_bRStrtReqAvl_dmd_Redemarrage
#define CoPtUH_bRStrtReqAvl_dmd_Redemarrage 1U
#endif /* CoPtUH_bRStrtReqAvl_dmd_Redemarrage */

#ifndef StaStrtMgt_bDmgLimStopInh_Non_inhibe
#define StaStrtMgt_bDmgLimStopInh_Non_inhibe 0U
#endif /* StaStrtMgt_bDmgLimStopInh_Non_inhibe */

#ifndef StaStrtMgt_bDmgLimStopInh_Inhibe
#define StaStrtMgt_bDmgLimStopInh_Inhibe 1U
#endif /* StaStrtMgt_bDmgLimStopInh_Inhibe */

#ifndef CoEmSTT_bStaProt_Cause_absente
#define CoEmSTT_bStaProt_Cause_absente 0U
#endif /* CoEmSTT_bStaProt_Cause_absente */

#ifndef CoEmSTT_bStaProt_Cause_presente
#define CoEmSTT_bStaProt_Cause_presente 1U
#endif /* CoEmSTT_bStaProt_Cause_presente */

#ifndef CoEmSTT_bSTTWaitStrtReq_Pas_de_demande_de_mise_en_attente
#define CoEmSTT_bSTTWaitStrtReq_Pas_de_demande_de_mise_en_attente 0U
#endif /* CoEmSTT_bSTTWaitStrtReq_Pas_de_demande_de_mise_en_attente */

#ifndef CoEmSTT_bSTTWaitStrtReq_Demande_de_mise_en_attente
#define CoEmSTT_bSTTWaitStrtReq_Demande_de_mise_en_attente 1U
#endif /* CoEmSTT_bSTTWaitStrtReq_Demande_de_mise_en_attente */

#ifndef CoEmSTT_bUcapUndVolt_Cause_absente
#define CoEmSTT_bUcapUndVolt_Cause_absente 0U
#endif /* CoEmSTT_bUcapUndVolt_Cause_absente */

#ifndef CoEmSTT_bUcapUndVolt_Cause_presente
#define CoEmSTT_bUcapUndVolt_Cause_presente 1U
#endif /* CoEmSTT_bUcapUndVolt_Cause_presente */

#ifndef CoEmSTT_bVSSAcvSt_maintien_inactif
#define CoEmSTT_bVSSAcvSt_maintien_inactif 0U
#endif /* CoEmSTT_bVSSAcvSt_maintien_inactif */

#ifndef CoEmSTT_bVSSAcvSt_maintien_actif
#define CoEmSTT_bVSSAcvSt_maintien_actif 1U
#endif /* CoEmSTT_bVSSAcvSt_maintien_actif */

#ifndef CoEmSTT_bVSSCtzEngRstrtAuth_Interdiction
#define CoEmSTT_bVSSCtzEngRstrtAuth_Interdiction 0U
#endif /* CoEmSTT_bVSSCtzEngRstrtAuth_Interdiction */

#ifndef CoEmSTT_bVSSCtzEngRstrtAuth_Autorisation
#define CoEmSTT_bVSSCtzEngRstrtAuth_Autorisation 1U
#endif /* CoEmSTT_bVSSCtzEngRstrtAuth_Autorisation */

#ifndef CoEmSTT_bVSSCtzEngRstrtReq_Pas_de_demande
#define CoEmSTT_bVSSCtzEngRstrtReq_Pas_de_demande 0U
#endif /* CoEmSTT_bVSSCtzEngRstrtReq_Pas_de_demande */

#ifndef CoEmSTT_bVSSCtzEngRstrtReq_Demande
#define CoEmSTT_bVSSCtzEngRstrtReq_Demande 1U
#endif /* CoEmSTT_bVSSCtzEngRstrtReq_Demande */

#ifndef CoEmSTT_bVSSCtzEngStopAuth_Interdiction
#define CoEmSTT_bVSSCtzEngStopAuth_Interdiction 0U
#endif /* CoEmSTT_bVSSCtzEngStopAuth_Interdiction */

#ifndef CoEmSTT_bVSSCtzEngStopAuth_Autorisation
#define CoEmSTT_bVSSCtzEngStopAuth_Autorisation 1U
#endif /* CoEmSTT_bVSSCtzEngStopAuth_Autorisation */

#ifndef CoEmSTT_bVSSCtzStrtAuth_Interdiction
#define CoEmSTT_bVSSCtzStrtAuth_Interdiction 0U
#endif /* CoEmSTT_bVSSCtzStrtAuth_Interdiction */

#ifndef CoEmSTT_bVSSCtzStrtAuth_Autorisation
#define CoEmSTT_bVSSCtzStrtAuth_Autorisation 1U
#endif /* CoEmSTT_bVSSCtzStrtAuth_Autorisation */

#ifndef CoEmSTT_stUcapChSp_Consigne_nulle
#define CoEmSTT_stUcapChSp_Consigne_nulle 0U
#endif /* CoEmSTT_stUcapChSp_Consigne_nulle */

#ifndef CoEmSTT_stUcapChSp_Consigne_moyenne
#define CoEmSTT_stUcapChSp_Consigne_moyenne 1U
#endif /* CoEmSTT_stUcapChSp_Consigne_moyenne */

#ifndef CoEmSTT_stUcapChSp_Consigne_maximale
#define CoEmSTT_stUcapChSp_Consigne_maximale 2U
#endif /* CoEmSTT_stUcapChSp_Consigne_maximale */

#ifndef CoEmSTT_stUcapChSp_Reserve
#define CoEmSTT_stUcapChSp_Reserve 3U
#endif /* CoEmSTT_stUcapChSp_Reserve */

#ifndef CoEmSTT_bBattPrf_Cause_absente
#define CoEmSTT_bBattPrf_Cause_absente 0U
#endif /* CoEmSTT_bBattPrf_Cause_absente */

#ifndef CoEmSTT_bBattPrf_Cause_presente
#define CoEmSTT_bBattPrf_Cause_presente 1U
#endif /* CoEmSTT_bBattPrf_Cause_presente */

#ifndef CoEmSTT_bBattProt_Cause_absente
#define CoEmSTT_bBattProt_Cause_absente 0U
#endif /* CoEmSTT_bBattProt_Cause_absente */

#ifndef CoEmSTT_bBattProt_Cause_presente
#define CoEmSTT_bBattProt_Cause_presente 1U
#endif /* CoEmSTT_bBattProt_Cause_presente */

#ifndef CoEmSTT_bBattUncrtSoC_Cause_absente
#define CoEmSTT_bBattUncrtSoC_Cause_absente 0U
#endif /* CoEmSTT_bBattUncrtSoC_Cause_absente */

#ifndef CoEmSTT_bBattUncrtSoC_Cause_presente
#define CoEmSTT_bBattUncrtSoC_Cause_presente 1U
#endif /* CoEmSTT_bBattUncrtSoC_Cause_presente */

#ifndef CoEmSTT_bEngStallAuth_Interdiction
#define CoEmSTT_bEngStallAuth_Interdiction 0U
#endif /* CoEmSTT_bEngStallAuth_Interdiction */

#ifndef CoEmSTT_bEngStallAuth_Autorisation
#define CoEmSTT_bEngStallAuth_Autorisation 1U
#endif /* CoEmSTT_bEngStallAuth_Autorisation */

#ifndef CoEmSTT_bRvAltCritT_Cause_absente
#define CoEmSTT_bRvAltCritT_Cause_absente 0U
#endif /* CoEmSTT_bRvAltCritT_Cause_absente */

#ifndef CoEmSTT_bRvAltCritT_Cause_presente
#define CoEmSTT_bRvAltCritT_Cause_presente 1U
#endif /* CoEmSTT_bRvAltCritT_Cause_presente */

#ifndef CoEmSTT_bRvAltEngRstrtAuth_Interdiction
#define CoEmSTT_bRvAltEngRstrtAuth_Interdiction 0U
#endif /* CoEmSTT_bRvAltEngRstrtAuth_Interdiction */

#ifndef CoEmSTT_bRvAltEngRstrtAuth_Autorisation
#define CoEmSTT_bRvAltEngRstrtAuth_Autorisation 1U
#endif /* CoEmSTT_bRvAltEngRstrtAuth_Autorisation */

#ifndef CoEmSTT_bRvAltEngRstrtReq_Pas_de_demande
#define CoEmSTT_bRvAltEngRstrtReq_Pas_de_demande 0U
#endif /* CoEmSTT_bRvAltEngRstrtReq_Pas_de_demande */

#ifndef CoEmSTT_bRvAltEngRstrtReq_Demande
#define CoEmSTT_bRvAltEngRstrtReq_Demande 1U
#endif /* CoEmSTT_bRvAltEngRstrtReq_Demande */

#ifndef CoEmSTT_bRvAltEngStopAuth_Interdiction
#define CoEmSTT_bRvAltEngStopAuth_Interdiction 0U
#endif /* CoEmSTT_bRvAltEngStopAuth_Interdiction */

#ifndef CoEmSTT_bRvAltEngStopAuth_Autorisation
#define CoEmSTT_bRvAltEngStopAuth_Autorisation 1U
#endif /* CoEmSTT_bRvAltEngStopAuth_Autorisation */

#ifndef CoEmSTT_bVSSCtzCrit_Cause_absente
#define CoEmSTT_bVSSCtzCrit_Cause_absente 0U
#endif /* CoEmSTT_bVSSCtzCrit_Cause_absente */

#ifndef CoEmSTT_bVSSCtzCrit_Cause_presente
#define CoEmSTT_bVSSCtzCrit_Cause_presente 1U
#endif /* CoEmSTT_bVSSCtzCrit_Cause_presente */

#ifndef CoEmSTT_stBattEngRstrtReq_Pas_de_demande
#define CoEmSTT_stBattEngRstrtReq_Pas_de_demande 0U
#endif /* CoEmSTT_stBattEngRstrtReq_Pas_de_demande */

#ifndef CoEmSTT_stBattEngRstrtReq_Demande_redemarrage
#define CoEmSTT_stBattEngRstrtReq_Demande_redemarrage 1U
#endif /* CoEmSTT_stBattEngRstrtReq_Demande_redemarrage */

#ifndef CoEmSTT_stBattEngRstrtReq_Demande_redemarrage_urgent
#define CoEmSTT_stBattEngRstrtReq_Demande_redemarrage_urgent 2U
#endif /* CoEmSTT_stBattEngRstrtReq_Demande_redemarrage_urgent */

#ifndef CoEmSTT_stBattEngRstrtReq_Demande_redemarrage_immediat
#define CoEmSTT_stBattEngRstrtReq_Demande_redemarrage_immediat 3U
#endif /* CoEmSTT_stBattEngRstrtReq_Demande_redemarrage_immediat */

#ifndef CoEmSTT_stBattEngRstrtReq_Demande_coupure
#define CoEmSTT_stBattEngRstrtReq_Demande_coupure 4U
#endif /* CoEmSTT_stBattEngRstrtReq_Demande_coupure */

#ifndef CoEmSTT_stBattEngStopAuth_Pas_d_autorisation_arret_indeterminee
#define CoEmSTT_stBattEngStopAuth_Pas_d_autorisation_arret_indeterminee 0U
#endif /* CoEmSTT_stBattEngStopAuth_Pas_d_autorisation_arret_indeterminee */

#ifndef CoEmSTT_stBattEngStopAuth_Autorisation_arret_normal
#define CoEmSTT_stBattEngStopAuth_Autorisation_arret_normal 1U
#endif /* CoEmSTT_stBattEngStopAuth_Autorisation_arret_normal */

#ifndef CoEmSTT_stBattEngStopAuth_Pas_d_autorisation_arret_duree_moyenne
#define CoEmSTT_stBattEngStopAuth_Pas_d_autorisation_arret_duree_moyenne 2U
#endif /* CoEmSTT_stBattEngStopAuth_Pas_d_autorisation_arret_duree_moyenne */

#ifndef CoEmSTT_stBattEngStopAuth_Pas_d_autorisation_arret_duree_longue
#define CoEmSTT_stBattEngStopAuth_Pas_d_autorisation_arret_duree_longue 3U
#endif /* CoEmSTT_stBattEngStopAuth_Pas_d_autorisation_arret_duree_longue */

#ifndef CoEmSTT_stEngRStrtReq_Pas_de_demande
#define CoEmSTT_stEngRStrtReq_Pas_de_demande 0U
#endif /* CoEmSTT_stEngRStrtReq_Pas_de_demande */

#ifndef CoEmSTT_stEngRStrtReq_Demande_redemarrage
#define CoEmSTT_stEngRStrtReq_Demande_redemarrage 1U
#endif /* CoEmSTT_stEngRStrtReq_Demande_redemarrage */

#ifndef CoEmSTT_stEngRStrtReq_Demande_redemarrage_urgent
#define CoEmSTT_stEngRStrtReq_Demande_redemarrage_urgent 2U
#endif /* CoEmSTT_stEngRStrtReq_Demande_redemarrage_urgent */

#ifndef CoEmSTT_stEngRStrtReq_Demande_redemarrage_immediat
#define CoEmSTT_stEngRStrtReq_Demande_redemarrage_immediat 3U
#endif /* CoEmSTT_stEngRStrtReq_Demande_redemarrage_immediat */

#ifndef CoEmSTT_stEngRStrtReq_Demande_coupure
#define CoEmSTT_stEngRStrtReq_Demande_coupure 4U
#endif /* CoEmSTT_stEngRStrtReq_Demande_coupure */

#ifndef CoEmSTT_stEngStopAuth_Pas_d_autorisation_arret_indeterminee
#define CoEmSTT_stEngStopAuth_Pas_d_autorisation_arret_indeterminee 0U
#endif /* CoEmSTT_stEngStopAuth_Pas_d_autorisation_arret_indeterminee */

#ifndef CoEmSTT_stEngStopAuth_Autorisation_arret_normal
#define CoEmSTT_stEngStopAuth_Autorisation_arret_normal 1U
#endif /* CoEmSTT_stEngStopAuth_Autorisation_arret_normal */

#ifndef CoEmSTT_stEngStopAuth_Pas_d_autorisation_arret_duree_moyenne
#define CoEmSTT_stEngStopAuth_Pas_d_autorisation_arret_duree_moyenne 2U
#endif /* CoEmSTT_stEngStopAuth_Pas_d_autorisation_arret_duree_moyenne */

#ifndef CoEmSTT_stEngStopAuth_Pas_d_autorisation_arret_duree_longue
#define CoEmSTT_stEngStopAuth_Pas_d_autorisation_arret_duree_longue 3U
#endif /* CoEmSTT_stEngStopAuth_Pas_d_autorisation_arret_duree_longue */

#ifndef CoEmSTT_stTypEmPredRstrt_Type_1
#define CoEmSTT_stTypEmPredRstrt_Type_1 0U
#endif /* CoEmSTT_stTypEmPredRstrt_Type_1 */

#ifndef CoEmSTT_stTypEmPredRstrt_Type_2
#define CoEmSTT_stTypEmPredRstrt_Type_2 1U
#endif /* CoEmSTT_stTypEmPredRstrt_Type_2 */

#ifndef CoEmSTT_stTypEmPredRstrt_Type_3
#define CoEmSTT_stTypEmPredRstrt_Type_3 2U
#endif /* CoEmSTT_stTypEmPredRstrt_Type_3 */

#ifndef CoEmSTT_stTypEmPredRstrt_Reserve
#define CoEmSTT_stTypEmPredRstrt_Reserve 3U
#endif /* CoEmSTT_stTypEmPredRstrt_Reserve */

#ifndef CoEmSTT_bOverThdUcapBoost_Seuil_non_depasse
#define CoEmSTT_bOverThdUcapBoost_Seuil_non_depasse 0U
#endif /* CoEmSTT_bOverThdUcapBoost_Seuil_non_depasse */

#ifndef CoEmSTT_bOverThdUcapBoost_Seuil_depasse
#define CoEmSTT_bOverThdUcapBoost_Seuil_depasse 1U
#endif /* CoEmSTT_bOverThdUcapBoost_Seuil_depasse */

#ifndef CoEmSTT_bUcapDchaAuth_Pas_d_autorisation
#define CoEmSTT_bUcapDchaAuth_Pas_d_autorisation 0U
#endif /* CoEmSTT_bUcapDchaAuth_Pas_d_autorisation */

#ifndef CoEmSTT_bUcapDchaAuth_Autorisation
#define CoEmSTT_bUcapDchaAuth_Autorisation 1U
#endif /* CoEmSTT_bUcapDchaAuth_Autorisation */

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
#endif /* !defined(RTE_COEMSTT_TYPE_H) */
/*==================[end of file]============================================*/


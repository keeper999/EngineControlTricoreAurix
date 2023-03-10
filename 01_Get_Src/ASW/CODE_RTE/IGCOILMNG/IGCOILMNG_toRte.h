/******************************************************************************/
/*                                                                            */
/* !Layer           : null                                                    */
/*                                                                            */
/* !Component       : IGCOILMNG                                               */
/* !Description     : IGCOILMNG Component                                     */
/*                                                                            */
/* !Module          : IGCOILMNG                                               */
/* !Description     :                                                         */
/*                                                                            */
/* !File            : IGCOILMNG_toRte.h                                       */
/*                                                                            */
/* !Scope           : Public                                                  */
/*                                                                            */
/* !Target          : 32BIT                                                   */
/*                                                                            */
/* !Vendor          : Valeo VEMS                                              */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2014 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::                                                                $*/
/* $Revision::                                                               $*/
/* $Author::                                          $$Date::               $*/
/******************************************************************************/
/* !VnrOff  : Names imposed by AUTOSAR                                        */
/******************************************************************************/
/* !CompReq :                                                                 */
/******************************************************************************/
/*                       AUTOMATIC GENERATION CODE                            */
/*  Generated by         AutosarLayer - Version 01.01                         */
/*  Date : lundi 20 octobre 2014 a 15:04:53                                   */
/******************************************************************************/

#ifndef IGCOILMNG_TORTE_H_
#define IGCOILMNG_TORTE_H_

#include "Rte_type.h"
#include "Rte_IGCOILMNG.h"

/**********************************************************************************
Macros generique du vidSet (variable simple)
**********************************************************************************/
#define VEMS_vidSET(name,value) vidSET_VALUE_##name(value)
#define VEMS_vidGET(varName,tempVar) vidGET_VALUE_##varName(tempVar)

/**********************************************************************************
   Macros generique du vidSet (pour les tableaux)
 **********************************************************************************/
#define VEMS_vidSET1DArray(tabname,size,tabvalue) vidSET_ARRAY_##tabname(tabvalue,size)
#define VEMS_vidGET1DArray(tabname,size,tabvalue) vidGET_ARRAY_##tabname(tabvalue,size)

#define VEMS_vidSET1DArrayElement(tabname,pos,variable) vidSET_ARRAY_ELEMENT_##tabname(variable,pos)
#define VEMS_vidGET1DArrayElement(tabname,pos,variable) vidGET_ARRAY_ELEMENT_##tabname(variable,pos)

/**********************************************************************************
   Macros generique du vidSet (pour les matrices)
 **********************************************************************************/
#define VEMS_vidSET2DArray(matname,lines,columns,matvalue) vidSET_ARRAY2D_##matname(matvalue,lines*columns)
#define VEMS_vidGET2DArray(matname,lines,columns,matvalue) vidGET_ARRAY2D_##matname(matvalue,lines*columns)

#define VEMS_vidSET2DArrayElement(matname,PosLin,PosCol,variable) vidSET_ARRAY2D_ELEMENT_##matname(variable,PosLin,PosCol)
#define VEMS_vidGET2DArrayElement(matname,PosLin,PosCol,variable) vidGET_ARRAY2D_ELEMENT_##matname(variable,PosLin,PosCol)

/**********************************************************************************
Interfaces avec le RTE
**********************************************************************************/
/**********************************************************************************
   Create interface for variable Clef_de_contact
  **********************************************************************************/

#define vidSET_VALUE_Clef_de_contact(value)
#define vidGET_VALUE_Clef_de_contact(variable)                                   Rte_Read_R_Clef_de_contact_Clef_de_contact(&variable)

/**********************************************************************************
   Create interface for variable Code_test_action
  **********************************************************************************/

#define vidSET_VALUE_Code_test_action(value)
#define vidGET_VALUE_Code_test_action(variable)                                  Rte_Read_R_Code_test_action_Code_test_action(&variable)

/**********************************************************************************
   Create interface for variable Dena_oc_bobine1
  **********************************************************************************/

#define vidSET_VALUE_Dena_oc_bobine1(value)                                      Rte_Write_P_Dena_oc_bobine1_Dena_oc_bobine1(value)
#define vidGET_VALUE_Dena_oc_bobine1(variable)

/**********************************************************************************
   Create interface for variable Dena_oc_bobine2
  **********************************************************************************/

#define vidSET_VALUE_Dena_oc_bobine2(value)                                      Rte_Write_P_Dena_oc_bobine2_Dena_oc_bobine2(value)
#define vidGET_VALUE_Dena_oc_bobine2(variable)

/**********************************************************************************
   Create interface for variable Dena_oc_bobine3
  **********************************************************************************/

#define vidSET_VALUE_Dena_oc_bobine3(value)                                      Rte_Write_P_Dena_oc_bobine3_Dena_oc_bobine3(value)
#define vidGET_VALUE_Dena_oc_bobine3(variable)

/**********************************************************************************
   Create interface for variable Dena_oc_bobine4
  **********************************************************************************/

#define vidSET_VALUE_Dena_oc_bobine4(value)                                      Rte_Write_P_Dena_oc_bobine4_Dena_oc_bobine4(value)
#define vidGET_VALUE_Dena_oc_bobine4(variable)

/**********************************************************************************
   Create interface for variable Dena_scg_bobine1
  **********************************************************************************/

#define vidSET_VALUE_Dena_scg_bobine1(value)                                     Rte_Write_P_Dena_scg_bobine1_Dena_scg_bobine1(value)
#define vidGET_VALUE_Dena_scg_bobine1(variable)

/**********************************************************************************
   Create interface for variable Dena_scg_bobine2
  **********************************************************************************/

#define vidSET_VALUE_Dena_scg_bobine2(value)                                     Rte_Write_P_Dena_scg_bobine2_Dena_scg_bobine2(value)
#define vidGET_VALUE_Dena_scg_bobine2(variable)

/**********************************************************************************
   Create interface for variable Dena_scg_bobine3
  **********************************************************************************/

#define vidSET_VALUE_Dena_scg_bobine3(value)                                     Rte_Write_P_Dena_scg_bobine3_Dena_scg_bobine3(value)
#define vidGET_VALUE_Dena_scg_bobine3(variable)

/**********************************************************************************
   Create interface for variable Dena_scg_bobine4
  **********************************************************************************/

#define vidSET_VALUE_Dena_scg_bobine4(value)                                     Rte_Write_P_Dena_scg_bobine4_Dena_scg_bobine4(value)
#define vidGET_VALUE_Dena_scg_bobine4(variable)

/**********************************************************************************
   Create interface for variable Dena_scp_bobine1
  **********************************************************************************/

#define vidSET_VALUE_Dena_scp_bobine1(value)                                     Rte_Write_P_Dena_scp_bobine1_Dena_scp_bobine1(value)
#define vidGET_VALUE_Dena_scp_bobine1(variable)

/**********************************************************************************
   Create interface for variable Dena_scp_bobine2
  **********************************************************************************/

#define vidSET_VALUE_Dena_scp_bobine2(value)                                     Rte_Write_P_Dena_scp_bobine2_Dena_scp_bobine2(value)
#define vidGET_VALUE_Dena_scp_bobine2(variable)

/**********************************************************************************
   Create interface for variable Dena_scp_bobine3
  **********************************************************************************/

#define vidSET_VALUE_Dena_scp_bobine3(value)                                     Rte_Write_P_Dena_scp_bobine3_Dena_scp_bobine3(value)
#define vidGET_VALUE_Dena_scp_bobine3(variable)

/**********************************************************************************
   Create interface for variable Dena_scp_bobine4
  **********************************************************************************/

#define vidSET_VALUE_Dena_scp_bobine4(value)                                     Rte_Write_P_Dena_scp_bobine4_Dena_scp_bobine4(value)
#define vidGET_VALUE_Dena_scp_bobine4(variable)

/**********************************************************************************
   Create interface for variable Dft_oc_bobine1
  **********************************************************************************/

#define vidSET_VALUE_Dft_oc_bobine1(value)                                       Rte_Write_P_Dft_oc_bobine1_Dft_oc_bobine1(value)
#define vidGET_VALUE_Dft_oc_bobine1(variable)

/**********************************************************************************
   Create interface for variable Dft_oc_bobine2
  **********************************************************************************/

#define vidSET_VALUE_Dft_oc_bobine2(value)                                       Rte_Write_P_Dft_oc_bobine2_Dft_oc_bobine2(value)
#define vidGET_VALUE_Dft_oc_bobine2(variable)

/**********************************************************************************
   Create interface for variable Dft_oc_bobine3
  **********************************************************************************/

#define vidSET_VALUE_Dft_oc_bobine3(value)                                       Rte_Write_P_Dft_oc_bobine3_Dft_oc_bobine3(value)
#define vidGET_VALUE_Dft_oc_bobine3(variable)

/**********************************************************************************
   Create interface for variable Dft_oc_bobine4
  **********************************************************************************/

#define vidSET_VALUE_Dft_oc_bobine4(value)                                       Rte_Write_P_Dft_oc_bobine4_Dft_oc_bobine4(value)
#define vidGET_VALUE_Dft_oc_bobine4(variable)

/**********************************************************************************
   Create interface for variable Dft_scg_bobine1
  **********************************************************************************/

#define vidSET_VALUE_Dft_scg_bobine1(value)                                      Rte_Write_P_Dft_scg_bobine1_Dft_scg_bobine1(value)
#define vidGET_VALUE_Dft_scg_bobine1(variable)

/**********************************************************************************
   Create interface for variable Dft_scg_bobine2
  **********************************************************************************/

#define vidSET_VALUE_Dft_scg_bobine2(value)                                      Rte_Write_P_Dft_scg_bobine2_Dft_scg_bobine2(value)
#define vidGET_VALUE_Dft_scg_bobine2(variable)

/**********************************************************************************
   Create interface for variable Dft_scg_bobine3
  **********************************************************************************/

#define vidSET_VALUE_Dft_scg_bobine3(value)                                      Rte_Write_P_Dft_scg_bobine3_Dft_scg_bobine3(value)
#define vidGET_VALUE_Dft_scg_bobine3(variable)

/**********************************************************************************
   Create interface for variable Dft_scg_bobine4
  **********************************************************************************/

#define vidSET_VALUE_Dft_scg_bobine4(value)                                      Rte_Write_P_Dft_scg_bobine4_Dft_scg_bobine4(value)
#define vidGET_VALUE_Dft_scg_bobine4(variable)

/**********************************************************************************
   Create interface for variable Dft_scp_bobine1
  **********************************************************************************/

#define vidSET_VALUE_Dft_scp_bobine1(value)                                      Rte_Write_P_Dft_scp_bobine1_Dft_scp_bobine1(value)
#define vidGET_VALUE_Dft_scp_bobine1(variable)

/**********************************************************************************
   Create interface for variable Dft_scp_bobine2
  **********************************************************************************/

#define vidSET_VALUE_Dft_scp_bobine2(value)                                      Rte_Write_P_Dft_scp_bobine2_Dft_scp_bobine2(value)
#define vidGET_VALUE_Dft_scp_bobine2(variable)

/**********************************************************************************
   Create interface for variable Dft_scp_bobine3
  **********************************************************************************/

#define vidSET_VALUE_Dft_scp_bobine3(value)                                      Rte_Write_P_Dft_scp_bobine3_Dft_scp_bobine3(value)
#define vidGET_VALUE_Dft_scp_bobine3(variable)

/**********************************************************************************
   Create interface for variable Dft_scp_bobine4
  **********************************************************************************/

#define vidSET_VALUE_Dft_scp_bobine4(value)                                      Rte_Write_P_Dft_scp_bobine4_Dft_scp_bobine4(value)
#define vidGET_VALUE_Dft_scp_bobine4(variable)

/**********************************************************************************
   Create interface for variable Eng_noCmprCyl
  **********************************************************************************/

#define vidSET_VALUE_Eng_noCmprCyl(value)
#define vidGET_VALUE_Eng_noCmprCyl(variable)                                     Rte_Read_R_Eng_noCmprCyl_Eng_noCmprCyl(&variable)

/**********************************************************************************
   Create interface for variable Eng_noCmprNxtCyl
  **********************************************************************************/

#define vidSET_VALUE_Eng_noCmprNxtCyl(value)
#define vidGET_VALUE_Eng_noCmprNxtCyl(variable)                                  Rte_Read_R_Eng_noCmprNxtCyl_Eng_noCmprNxtCyl(&variable)

/**********************************************************************************
   Create interface for variable Ext_bDirRotCk
  **********************************************************************************/

#define vidSET_VALUE_Ext_bDirRotCk(value)
#define vidGET_VALUE_Ext_bDirRotCk(variable)                                     Rte_Read_R_Ext_bDirRotCk_Ext_bDirRotCk(&variable)

/**********************************************************************************
   Create interface for variable Ext_noCylEng
  **********************************************************************************/

#define vidSET_VALUE_Ext_noCylEng(value)
#define vidGET_VALUE_Ext_noCylEng(variable)                                      Rte_Read_R_Ext_noCylEng_Ext_noCylEng(&variable)

/**********************************************************************************
   Create interface for variable Ext_rTotLd
  **********************************************************************************/

#define vidSET_VALUE_Ext_rTotLd(value)
#define vidGET_VALUE_Ext_rTotLd(variable)                                        Rte_Read_R_Ext_rTotLd_Ext_rTotLd(&variable)

/**********************************************************************************
   Create interface for variable IMMO_stEcuLockStTyp
  **********************************************************************************/

#define vidSET_VALUE_IMMO_stEcuLockStTyp(value)
#define vidGET_VALUE_IMMO_stEcuLockStTyp(variable)                               Rte_Read_R_IMMO_stEcuLockStTyp_IMMO_stEcuLockStTyp(&variable)

/**********************************************************************************
   Create interface for variable Icd_ratio_energy
  **********************************************************************************/

#define vidSET_VALUE_Icd_ratio_energy(value)                                     Rte_Write_P_Icd_ratio_energy_Icd_ratio_energy(value)
#define vidGET_VALUE_Icd_ratio_energy(variable)

/**********************************************************************************
   Create interface for variable Icd_state
  **********************************************************************************/

#define vidSET_VALUE_Icd_state(value)                                            Rte_Write_P_Icd_state_Icd_state(value)
#define vidGET_VALUE_Icd_state(variable)                                         Rte_Read_R_Icd_state_Icd_state(&variable)

/**********************************************************************************
   Create interface for variable IgCmd_agIgSp
  **********************************************************************************/

#define vidSET_VALUE_IgCmd_agIgSp(value)
#define vidGET_VALUE_IgCmd_agIgSp(variable)                                      Rte_Read_R_IgCmd_agIgSp_IgCmd_agIgSp(&variable)

/**********************************************************************************
   Create interface for variable IgCmd_agIgSpNxt
  **********************************************************************************/

#define vidSET_VALUE_IgCmd_agIgSpNxt(value)
#define vidGET_VALUE_IgCmd_agIgSpNxt(variable)                                   Rte_Read_R_IgCmd_agIgSpNxt_IgCmd_agIgSpNxt(&variable)

/**********************************************************************************
   Create interface for variable IgCmd_bPwrRlyCmd
  **********************************************************************************/

#define vidSET_VALUE_IgCmd_bPwrRlyCmd(value)
#define vidGET_VALUE_IgCmd_bPwrRlyCmd(variable)                                  Rte_Read_R_IgCmd_bPwrRlyCmd_IgCmd_bPwrRlyCmd(&variable)

/**********************************************************************************
   Create interface for variable IgSys_bIgBenchModEna
  **********************************************************************************/

#define vidSET_VALUE_IgSys_bIgBenchModEna(value)
#define vidGET_VALUE_IgSys_bIgBenchModEna(variable)                              Rte_Read_R_IgSys_bIgBenchModEna_IgSys_bIgBenchModEna(&variable)

/**********************************************************************************
   Create interface for variable IgSys_iESpBenchMod
  **********************************************************************************/

#define vidSET_VALUE_IgSys_iESpBenchMod(value)
#define vidGET_VALUE_IgSys_iESpBenchMod(variable)                                Rte_Read_R_IgSys_iESpBenchMod_IgSys_iESpBenchMod(&variable)

/**********************************************************************************
   Create interface for variable IgSys_tiDwellSpBenchMod
  **********************************************************************************/

#define vidSET_VALUE_IgSys_tiDwellSpBenchMod(value)
#define vidGET_VALUE_IgSys_tiDwellSpBenchMod(variable)                           Rte_Read_R_IgSys_tiDwellSpBenchMod_IgSys_tiDwellSpBenchMod(&variable)

/**********************************************************************************
   Create interface for variable Misfire_cylindre_1
  **********************************************************************************/

#define vidSET_VALUE_Misfire_cylindre_1(value)
#define vidGET_VALUE_Misfire_cylindre_1(variable)                                Rte_Read_R_Misfire_cylindre_1_Misfire_cylindre_1(&variable)

/**********************************************************************************
   Create interface for variable Misfire_cylindre_2
  **********************************************************************************/

#define vidSET_VALUE_Misfire_cylindre_2(value)
#define vidGET_VALUE_Misfire_cylindre_2(variable)                                Rte_Read_R_Misfire_cylindre_2_Misfire_cylindre_2(&variable)

/**********************************************************************************
   Create interface for variable Misfire_cylindre_3
  **********************************************************************************/

#define vidSET_VALUE_Misfire_cylindre_3(value)
#define vidGET_VALUE_Misfire_cylindre_3(variable)                                Rte_Read_R_Misfire_cylindre_3_Misfire_cylindre_3(&variable)

/**********************************************************************************
   Create interface for variable Misfire_cylindre_4
  **********************************************************************************/

#define vidSET_VALUE_Misfire_cylindre_4(value)
#define vidGET_VALUE_Misfire_cylindre_4(variable)                                Rte_Read_R_Misfire_cylindre_4_Misfire_cylindre_4(&variable)

/**********************************************************************************
   Create interface for variable Regime_moteur
  **********************************************************************************/

#define vidSET_VALUE_Regime_moteur(value)
#define vidGET_VALUE_Regime_moteur(variable)                                     Rte_Read_R_Regime_moteur_Regime_moteur(&variable)

/**********************************************************************************
   Create interface for variable Regime_moteur_32
  **********************************************************************************/

#define vidSET_VALUE_Regime_moteur_32(value)
#define vidGET_VALUE_Regime_moteur_32(variable)                                  Rte_Read_R_Regime_moteur_32_Regime_moteur_32(&variable)

/**********************************************************************************
   Create interface for variable SenAct_tIGBTAcq
  **********************************************************************************/

#define vidSET_VALUE_SenAct_tIGBTAcq(value)
#define vidGET_VALUE_SenAct_tIGBTAcq(variable)                                   Rte_Read_R_SenAct_tIGBTAcq_SenAct_tIGBTAcq(&variable)

/**********************************************************************************
   Create interface for variable Srv_stActrTstStatus
  **********************************************************************************/

#define vidSET_VALUE_Srv_stActrTstStatus(value)
#define vidGET_VALUE_Srv_stActrTstStatus(variable)                               Rte_Read_R_Srv_stActrTstStatus_Srv_stActrTstStatus(&variable)

/**********************************************************************************
   Create interface for variable Sync_bEngSyncAccu
  **********************************************************************************/

#define vidSET_VALUE_Sync_bEngSyncAccu(value)
#define vidGET_VALUE_Sync_bEngSyncAccu(variable)                                 Rte_Read_R_Sync_bEngSyncAccu_Sync_bEngSyncAccu(&variable)

/**********************************************************************************
   Create interface for variable Temperature_eau
  **********************************************************************************/

#define vidSET_VALUE_Temperature_eau(value)
#define vidGET_VALUE_Temperature_eau(variable)                                   Rte_Read_R_Temperature_eau_Temperature_eau(&variable)

/**********************************************************************************
   Create interface for variable Tension_batterie_filt
  **********************************************************************************/

#define vidSET_VALUE_Tension_batterie_filt(value)
#define vidGET_VALUE_Tension_batterie_filt(variable)                             Rte_Read_R_Tension_batterie_filt_Tension_batterie_filt(&variable)

#endif   /* #ifndef IGCOILMNG_TORTE_H_ */

/******************************************************************************/
/*                  END OF AUTOMATIC CODE GENERATION                          */
/******************************************************************************/

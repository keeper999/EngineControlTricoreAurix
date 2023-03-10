/******************************************************************************/
/*                                                                            */
/* !Layer           : null                                                    */
/*                                                                            */
/* !Component       : CMDPWM                                                  */
/* !Description     : CMDPWM Component                                        */
/*                                                                            */
/* !Module          : CMDPWM                                                  */
/* !Description     :                                                         */
/*                                                                            */
/* !File            : CMDPWM_toRte.h                                          */
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
/* $Archive::   P:/EBx_V46/LDA/REF/modules/CMDPWM/CMDPWM_toRte.h_v           $*/
/* $Revision::   1.1                                                         $*/
/* $Author::   wbouach                                $$Date::   29 Jul 2014 $*/
/******************************************************************************/
/* !VnrOff  : Names imposed by AUTOSAR                                        */
/******************************************************************************/
/* !CompReq :                                                                 */
/******************************************************************************/
/*                       AUTOMATIC GENERATION CODE                            */
/*  Generated by         AutosarLayer - Version 01.00                         */
/*  Date : mardi 29 juillet 2014 a 10:38:47                                   */
/******************************************************************************/

#ifndef CMDPWM_TORTE_H_
#define CMDPWM_TORTE_H_

#include "Rte_type.h"
#include "Rte_CMDPWM.h"

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
   Create interface for variable Cf_cooling_fan_equipment
  **********************************************************************************/

#define vidSET_VALUE_Cf_cooling_fan_equipment(value)
#define vidGET_VALUE_Cf_cooling_fan_equipment(variable)                          Rte_Read_R_Cf_cooling_fan_equipment_Cf_cooling_fan_equipment(&variable)

/**********************************************************************************
   Create interface for variable Commande_GMV_C
  **********************************************************************************/

#define vidSET_VALUE_Commande_GMV_C(value)
#define vidGET_VALUE_Commande_GMV_C(variable)                                    Rte_Read_R_Commande_GMV_C_Commande_GMV_C(&variable)

/**********************************************************************************
   Create interface for variable Commande_bpm_pwm_rco
  **********************************************************************************/

#define vidSET_VALUE_Commande_bpm_pwm_rco(value)
#define vidGET_VALUE_Commande_bpm_pwm_rco(variable)                              Rte_Read_R_Commande_bpm_pwm_rco_Commande_bpm_pwm_rco(&variable)

/**********************************************************************************
   Create interface for variable Commande_ectdrv_pwm_rco
  **********************************************************************************/

#define vidSET_VALUE_Commande_ectdrv_pwm_rco(value)
#define vidGET_VALUE_Commande_ectdrv_pwm_rco(variable)                           Rte_Read_R_Commande_ectdrv_pwm_rco_Commande_ectdrv_pwm_rco(&variable)

/**********************************************************************************
   Create interface for variable Commande_pompe_ess_pwm
  **********************************************************************************/

#define vidSET_VALUE_Commande_pompe_ess_pwm(value)
#define vidGET_VALUE_Commande_pompe_ess_pwm(variable)                            Rte_Read_R_Commande_pompe_ess_pwm_Commande_pompe_ess_pwm(&variable)

/**********************************************************************************
   Create interface for variable Commande_purge_pwm_freq
  **********************************************************************************/

#define vidSET_VALUE_Commande_purge_pwm_freq(value)
#define vidGET_VALUE_Commande_purge_pwm_freq(variable)                           Rte_Read_R_Commande_purge_pwm_freq_Commande_purge_pwm_freq(&variable)

/**********************************************************************************
   Create interface for variable Commande_purge_pwm_rco
  **********************************************************************************/

#define vidSET_VALUE_Commande_purge_pwm_rco(value)
#define vidGET_VALUE_Commande_purge_pwm_rco(variable)                            Rte_Read_R_Commande_purge_pwm_rco_Commande_purge_pwm_rco(&variable)

/**********************************************************************************
   Create interface for variable Commande_vvt_adm_pwm_rco
  **********************************************************************************/

#define vidSET_VALUE_Commande_vvt_adm_pwm_rco(value)
#define vidGET_VALUE_Commande_vvt_adm_pwm_rco(variable)                          Rte_Read_R_Commande_vvt_adm_pwm_rco_Commande_vvt_adm_pwm_rco(&variable)

/**********************************************************************************
   Create interface for variable Commande_vvt_ech_pwm_rco
  **********************************************************************************/

#define vidSET_VALUE_Commande_vvt_ech_pwm_rco(value)
#define vidGET_VALUE_Commande_vvt_ech_pwm_rco(variable)                          Rte_Read_R_Commande_vvt_ech_pwm_rco_Commande_vvt_ech_pwm_rco(&variable)

/**********************************************************************************
   Create interface for variable Ctrl_bAcv_ECTReq
  **********************************************************************************/

#define vidSET_VALUE_Ctrl_bAcv_ECTReq(value)
#define vidGET_VALUE_Ctrl_bAcv_ECTReq(variable)                                  Rte_Read_R_Ctrl_bAcv_ECTReq_Ctrl_bAcv_ECTReq(&variable)

/**********************************************************************************
   Create interface for variable Ctrl_bAcv_FuTnkPmp
  **********************************************************************************/

#define vidSET_VALUE_Ctrl_bAcv_FuTnkPmp(value)
#define vidGET_VALUE_Ctrl_bAcv_FuTnkPmp(variable)                                Rte_Read_R_Ctrl_bAcv_FuTnkPmp_Ctrl_bAcv_FuTnkPmp(&variable)

/**********************************************************************************
   Create interface for variable Demande_inhibition_hbridge
  **********************************************************************************/

#define vidSET_VALUE_Demande_inhibition_hbridge(value)
#define vidGET_VALUE_Demande_inhibition_hbridge(variable)                        Rte_Read_R_Demande_inhibition_hbridge_Demande_inhibition_hbridge(&variable)

/**********************************************************************************
   Create interface for variable ECU_bImmoUnlockWkuSt
  **********************************************************************************/

#define vidSET_VALUE_ECU_bImmoUnlockWkuSt(value)
#define vidGET_VALUE_ECU_bImmoUnlockWkuSt(variable)                              Rte_Read_R_ECU_bImmoUnlockWkuSt_ECU_bImmoUnlockWkuSt(&variable)

/**********************************************************************************
   Create interface for variable ECU_bWkuMain
  **********************************************************************************/

#define vidSET_VALUE_ECU_bWkuMain(value)
#define vidGET_VALUE_ECU_bWkuMain(variable)                                      Rte_Read_R_ECU_bWkuMain_ECU_bWkuMain(&variable)

/**********************************************************************************
   Create interface for variable UCE_bPwrlAcv
  **********************************************************************************/

#define vidSET_VALUE_UCE_bPwrlAcv(value)
#define vidGET_VALUE_UCE_bPwrlAcv(variable)                                      Rte_Read_R_UCE_bPwrlAcv_UCE_bPwrlAcv(&variable)

#endif   /* #ifndef CMDPWM_TORTE_H_ */

/******************************************************************************/
/*                  END OF AUTOMATIC CODE GENERATION                          */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/* !Layer           : null                                                    */
/*                                                                            */
/* !Component       : CMDPWMACT_DT                                            */
/* !Description     : CMDPWMACT_DT Component                                  */
/*                                                                            */
/* !Module          : CMDPWMACT_DT                                            */
/* !Description     :                                                         */
/*                                                                            */
/* !File            : CMDPWMACT_DT_toRte.h                                    */
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
/*  Date : lundi 20 octobre 2014 a 18:43:44                                   */
/******************************************************************************/

#ifndef CMDPWMACT_DT_TORTE_H_
#define CMDPWMACT_DT_TORTE_H_

#include "Rte_type.h"
#include "Rte_CMDPWMACT_DT.h"

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
   Create interface for variable Commande_DmpVlv_pwm_freq
  **********************************************************************************/

#define vidSET_VALUE_Commande_DmpVlv_pwm_freq(value)
#define vidGET_VALUE_Commande_DmpVlv_pwm_freq(variable)                          Rte_Read_R_Commande_DmpVlv_pwm_freq_Commande_DmpVlv_pwm_freq(&variable)

/**********************************************************************************
   Create interface for variable Commande_DmpVlv_pwm_rco
  **********************************************************************************/

#define vidSET_VALUE_Commande_DmpVlv_pwm_rco(value)
#define vidGET_VALUE_Commande_DmpVlv_pwm_rco(variable)                           Rte_Read_R_Commande_DmpVlv_pwm_rco_Commande_DmpVlv_pwm_rco(&variable)

/**********************************************************************************
   Create interface for variable Commande_water_pump_pwm_freq
  **********************************************************************************/

#define vidSET_VALUE_Commande_water_pump_pwm_freq(value)
#define vidGET_VALUE_Commande_water_pump_pwm_freq(variable)                      Rte_Read_R_Commande_water_pump_pwm_freq_Commande_water_pump_pwm_freq(&variable)

/**********************************************************************************
   Create interface for variable Commande_water_pump_pwm_rco
  **********************************************************************************/

#define vidSET_VALUE_Commande_water_pump_pwm_rco(value)
#define vidGET_VALUE_Commande_water_pump_pwm_rco(variable)                       Rte_Read_R_Commande_water_pump_pwm_rco_Commande_water_pump_pwm_rco(&variable)

/**********************************************************************************
   Create interface for variable Ctrl_bAcv_TrbCoWaPmp
  **********************************************************************************/

#define vidSET_VALUE_Ctrl_bAcv_TrbCoWaPmp(value)
#define vidGET_VALUE_Ctrl_bAcv_TrbCoWaPmp(variable)                              Rte_Read_R_Ctrl_bAcv_TrbCoWaPmp_Ctrl_bAcv_TrbCoWaPmp(&variable)

/**********************************************************************************
   Create interface for variable Ctrl_bOilPmpCmd
  **********************************************************************************/

#define vidSET_VALUE_Ctrl_bOilPmpCmd(value)
#define vidGET_VALUE_Ctrl_bOilPmpCmd(variable)                                   Rte_Read_R_Ctrl_bOilPmpCmd_Ctrl_bOilPmpCmd(&variable)

/**********************************************************************************
   Create interface for variable Ctrl_bTrbAct_rCtl
  **********************************************************************************/

#define vidSET_VALUE_Ctrl_bTrbAct_rCtl(value)
#define vidGET_VALUE_Ctrl_bTrbAct_rCtl(variable)                                 Rte_Read_R_Ctrl_bTrbAct_rCtl_Ctrl_bTrbAct_rCtl(&variable)

/**********************************************************************************
   Create interface for variable ECU_bWkuMain
  **********************************************************************************/

#define vidSET_VALUE_ECU_bWkuMain(value)
#define vidGET_VALUE_ECU_bWkuMain(variable)                                      Rte_Read_R_ECU_bWkuMain_ECU_bWkuMain(&variable)

/**********************************************************************************
   Create interface for variable OilSysHw_frqPmpCmd
  **********************************************************************************/

#define vidSET_VALUE_OilSysHw_frqPmpCmd(value)
#define vidGET_VALUE_OilSysHw_frqPmpCmd(variable)                                Rte_Read_R_OilSysHw_frqPmpCmd_OilSysHw_frqPmpCmd(&variable)

/**********************************************************************************
   Create interface for variable Oil_rPmpCmdAppl
  **********************************************************************************/

#define vidSET_VALUE_Oil_rPmpCmdAppl(value)
#define vidGET_VALUE_Oil_rPmpCmdAppl(variable)                                   Rte_Read_R_Oil_rPmpCmdAppl_Oil_rPmpCmdAppl(&variable)

/**********************************************************************************
   Create interface for variable UCE_bPwrlAcv
  **********************************************************************************/

#define vidSET_VALUE_UCE_bPwrlAcv(value)
#define vidGET_VALUE_UCE_bPwrlAcv(variable)                                      Rte_Read_R_UCE_bPwrlAcv_UCE_bPwrlAcv(&variable)

/**********************************************************************************
   Create interface for variable WgCmd_DutyCycTrbAct_rCtl
  **********************************************************************************/

#define vidSET_VALUE_WgCmd_DutyCycTrbAct_rCtl(value)
#define vidGET_VALUE_WgCmd_DutyCycTrbAct_rCtl(variable)                          Rte_Read_R_WgCmd_DutyCycTrbAct_rCtl_WgCmd_DutyCycTrbAct_rCtl(&variable)

/**********************************************************************************
   Create interface for variable WgcCmd_frqTrbAct_rCtl
  **********************************************************************************/

#define vidSET_VALUE_WgcCmd_frqTrbAct_rCtl(value)
#define vidGET_VALUE_WgcCmd_frqTrbAct_rCtl(variable)                             Rte_Read_R_WgcCmd_frqTrbAct_rCtl_WgcCmd_frqTrbAct_rCtl(&variable)

#endif   /* #ifndef CMDPWMACT_DT_TORTE_H_ */

/******************************************************************************/
/*                  END OF AUTOMATIC CODE GENERATION                          */
/******************************************************************************/

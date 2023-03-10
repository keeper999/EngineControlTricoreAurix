/******************************************************************************/
/*                                                                            */
/* !Layer           : null                                                    */
/*                                                                            */
/* !Component       : ACQPWD                                                  */
/* !Description     : ACQPWD Component                                        */
/*                                                                            */
/* !Module          : ACQPWD                                                  */
/* !Description     :                                                         */
/*                                                                            */
/* !File            : ACQPWD_toRte.h                                          */
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
/* $Archive::   P:/EBx_V46/LDA/REF/modules/ACQPWD/ACQPWD_toRte.h_v           $*/
/* $Revision::   1.1                                                         $*/
/* $Author::   achebino                               $$Date::   05 Sep 2014 $*/
/******************************************************************************/
/* !VnrOff  : Names imposed by AUTOSAR                                        */
/******************************************************************************/
/* !CompReq :                                                                 */
/******************************************************************************/
/*                       AUTOMATIC GENERATION CODE                            */
/*  Generated by         AutosarLayer - Version 01.00                         */
/*  Date : vendredi 5 septembre 2014 a 12:08:50                               */
/******************************************************************************/

#ifndef ACQPWD_TORTE_H_
#define ACQPWD_TORTE_H_

#include "Rte_type.h"
#include "Rte_ACQPWD.h"

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
   Create interface for variable Acqui_diag_pompe_ess_pwd_per
  **********************************************************************************/

#define vidSET_VALUE_Acqui_diag_pompe_ess_pwd_per(value)                         Rte_Write_P_Acqui_diag_pompe_ess_pwd_per_Acqui_diag_pompe_ess_pwd_per(value)
#define vidGET_VALUE_Acqui_diag_pompe_ess_pwd_per(variable)

/**********************************************************************************
   Create interface for variable Acqui_diag_pompe_ess_pwd_rco
  **********************************************************************************/

#define vidSET_VALUE_Acqui_diag_pompe_ess_pwd_rco(value)                         Rte_Write_P_Acqui_diag_pompe_ess_pwd_rco_Acqui_diag_pompe_ess_pwd_rco(value)
#define vidGET_VALUE_Acqui_diag_pompe_ess_pwd_rco(variable)

/**********************************************************************************
   Create interface for variable Acqui_pedale_embrayage_pwd_per
  **********************************************************************************/

#define vidSET_VALUE_Acqui_pedale_embrayage_pwd_per(value)                       Rte_Write_P_Acqui_pedale_embrayage_pwd_per_Acqui_pedale_embrayage_pwd_per(value)
#define vidGET_VALUE_Acqui_pedale_embrayage_pwd_per(variable)

/**********************************************************************************
   Create interface for variable Acqui_pedale_embrayage_pwd_rco
  **********************************************************************************/

#define vidSET_VALUE_Acqui_pedale_embrayage_pwd_rco(value)                       Rte_Write_P_Acqui_pedale_embrayage_pwd_rco_Acqui_pedale_embrayage_pwd_rco(value)
#define vidGET_VALUE_Acqui_pedale_embrayage_pwd_rco(variable)

/**********************************************************************************
   Create interface for variable Acquis_point_mort_periode
  **********************************************************************************/

#define vidSET_VALUE_Acquis_point_mort_periode(value)                            Rte_Write_P_Acquis_point_mort_periode_Acquis_point_mort_periode(value)
#define vidGET_VALUE_Acquis_point_mort_periode(variable)

/**********************************************************************************
   Create interface for variable Acquis_point_mort_rco
  **********************************************************************************/

#define vidSET_VALUE_Acquis_point_mort_rco(value)                                Rte_Write_P_Acquis_point_mort_rco_Acquis_point_mort_rco(value)
#define vidGET_VALUE_Acquis_point_mort_rco(variable)

/**********************************************************************************
   Create interface for variable Acquisition_etat_gmvC
  **********************************************************************************/

#define vidSET_VALUE_Acquisition_etat_gmvC(value)                                Rte_Write_P_Acquisition_etat_gmvC_Acquisition_etat_gmvC(value)
#define vidGET_VALUE_Acquisition_etat_gmvC(variable)

/**********************************************************************************
   Create interface for variable Cf_cooling_fan_equipment
  **********************************************************************************/

#define vidSET_VALUE_Cf_cooling_fan_equipment(value)
#define vidGET_VALUE_Cf_cooling_fan_equipment(variable)                          Rte_Read_R_Cf_cooling_fan_equipment_Cf_cooling_fan_equipment(&variable)

/**********************************************************************************
   Create interface for variable DIAGCAN_bIntegratioElectronique
  **********************************************************************************/

#define vidSET_VALUE_DIAGCAN_bIntegratioElectronique(value)
#define vidGET_VALUE_DIAGCAN_bIntegratioElectronique(variable)                   Rte_Read_R_DIAGCAN_bIntegratioElectronique_DIAGCAN_bIntegratioElectronique(&variable)

/**********************************************************************************
   Create interface for variable FlowMng_bCluPropSnsrEna
  **********************************************************************************/

#define vidSET_VALUE_FlowMng_bCluPropSnsrEna(value)
#define vidGET_VALUE_FlowMng_bCluPropSnsrEna(variable)                           Rte_Read_R_FlowMng_bCluPropSnsrEna_FlowMng_bCluPropSnsrEna(&variable)

/**********************************************************************************
   Create interface for variable Gear_bAcvNeutPosnAcq
  **********************************************************************************/

#define vidSET_VALUE_Gear_bAcvNeutPosnAcq(value)
#define vidGET_VALUE_Gear_bAcvNeutPosnAcq(variable)                              Rte_Read_R_Gear_bAcvNeutPosnAcq_Gear_bAcvNeutPosnAcq(&variable)

#endif   /* #ifndef ACQPWD_TORTE_H_ */

/******************************************************************************/
/*                  END OF AUTOMATIC CODE GENERATION                          */
/******************************************************************************/

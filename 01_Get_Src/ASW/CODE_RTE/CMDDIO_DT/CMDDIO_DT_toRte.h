/******************************************************************************/
/*                                                                            */
/* !Layer           : null                                                    */
/*                                                                            */
/* !Component       : CMDDIO_DT                                               */
/* !Description     : CMDDIO_DT Component                                     */
/*                                                                            */
/* !Module          : CMDDIO_DT                                               */
/* !Description     :                                                         */
/*                                                                            */
/* !File            : CMDDIO_DT_toRte.h                                       */
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
/*  Date : lundi 20 octobre 2014 a 17:51:37                                   */
/******************************************************************************/

#ifndef CMDDIO_DT_TORTE_H_
#define CMDDIO_DT_TORTE_H_

#include "Rte_type.h"
#include "Rte_CMDDIO_DT.h"

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
   Create interface for variable AdHeatCmd_bAcvCTP1Drv
  **********************************************************************************/

#define vidSET_VALUE_AdHeatCmd_bAcvCTP1Drv(value)
#define vidGET_VALUE_AdHeatCmd_bAcvCTP1Drv(variable)                             Rte_Read_R_AdHeatCmd_bAcvCTP1Drv_AdHeatCmd_bAcvCTP1Drv(&variable)

/**********************************************************************************
   Create interface for variable AdHeatCmd_bAcvCTP2Drv
  **********************************************************************************/

#define vidSET_VALUE_AdHeatCmd_bAcvCTP2Drv(value)
#define vidGET_VALUE_AdHeatCmd_bAcvCTP2Drv(variable)                             Rte_Read_R_AdHeatCmd_bAcvCTP2Drv_AdHeatCmd_bAcvCTP2Drv(&variable)

/**********************************************************************************
   Create interface for variable Ctrl_bTreatAdHeatRly
  **********************************************************************************/

#define vidSET_VALUE_Ctrl_bTreatAdHeatRly(value)
#define vidGET_VALUE_Ctrl_bTreatAdHeatRly(variable)                              Rte_Read_R_Ctrl_bTreatAdHeatRly_Ctrl_bTreatAdHeatRly(&variable)

/**********************************************************************************
   Create interface for variable ECU_bWkuMain
  **********************************************************************************/

#define vidSET_VALUE_ECU_bWkuMain(value)
#define vidGET_VALUE_ECU_bWkuMain(variable)                                      Rte_Read_R_ECU_bWkuMain_ECU_bWkuMain(&variable)

#endif   /* #ifndef CMDDIO_DT_TORTE_H_ */

/******************************************************************************/
/*                  END OF AUTOMATIC CODE GENERATION                          */
/******************************************************************************/

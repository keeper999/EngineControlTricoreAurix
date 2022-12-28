/**************************************************************************************************\
 *** 
 ***                            P. C. A.
 *** 
 ***                     Peugeot Citroen Automobile
 *** 
 ***         This file is the property of PCA. All rights are reserved
 ***         by PCA and this file must not be copied or disclosed
 ***        (in whole or in part) without prior written consent of PCA.
 *** 
 *** *******************************************************************************
 *** 
 ***  %name: CoStopStart_008_TEV_fct.h %
 *** 
 ***  %version: 11.4 %
 *** 
 ***  %date_modified: Tue Jun  5 11:25:33 2012 %
 *** 
 *** 
 ***  %derived_by: u261238 %
 ***  %release: CoStopStart/11.0 %
 ***  %full_filespec: CoStopStart_008_TEV_fct.h-11.4:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : TL_01460_10_03525
 *** TargetLink subsystem : TL_01460_10_03525/CoStopStart_008
 *** Codefile             : costopstart_008_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2012-05-30 12:16:30
 ***
 *** CODE GENERATOR OPTIONS:
 *** Compiler                            : <unknown>
 *** Target                              : Generic
 *** ANSI-C compatible code              : yes
 *** Optimization level                  : 2
 *** Constant style                      : decimal
 *** Clean code option                   : enabled
 *** Logging mode                        : Do not log anything
 *** Linker sections                     : enabled
 *** Assembler statements                : disabled
 *** Variable name length                : 31 chars
 *** Use global bitfields                : disabled
 *** Stateflow: use of bitfields         : enabled
 *** State activity encoding limit       : 5
 *** Omit zero inits in restart function : disabled
 *** Share fcns between TL subsystems    : enabled
 *** Generate 64bit functions            : enabled
 *** Inlining Threshold                  : 6
 *** Line break limit                    : 100
 *** Target optimized boolean data type  : enabled
 *** Keep saturation elements            : disabled
 *** Extended variable sharing           : disabled
 *** Style definition file               : C:\dSPACE301\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE301\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSource
 ***                                       CodeSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _COSTOPSTART_008_TEV_FCT_H_
#define _COSTOPSTART_008_TEV_FCT_H_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "tl_defines.h"
#include "tl_basetypes.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/

struct tag_SBFS_F13_01_02_01_Compteur_de_Redem_successifs_loupes_008_tp {
   unsigned int C0082_Compteur_Rdm_successif_ns : 4;
   unsigned int C0082_Compteur_Rdm_successif : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#define COSTOPSTART_START_SEC_GLOBAL_16BIT
#include "CoStopStart_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_16BIT: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_008_Ext_nEng_in /* 
   Unit       : RPM
   Description: R�gime moteur valeur brut PMH. toujours pr�sent. voir CSMT_CGMT_08_0941
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_008_Ext_spdVehSecu_in /* 
   Description: Vitesse v�hicule s�curis�e
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_008_Veh_spdVeh_in /* 
   Unit       : km/h
   Description: vitesse v�hicule. La provenance est fonction de l'architecture Electique
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_16BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 CoPtUH_stBfBfLstRStrtFail_out /* 
   Description: Pour APV. avant avant derni�re cause d'echec de redem Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 63 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPtUH_stBfLstRStrtFailCase_out /* 
   Description: Pour APV. avant derni�re cause d'echec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 63 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPtUH_stLstRStrtFailCase_out /* 
   Description: Pour APV. derni�re cause d'echec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 63 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_008_CoEmCkg_stStrtRstrtFbCmd_in /* 
   Description: Retour de commande d�marrage red�marrage du SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_008_CoEmSTT_stEngRStrtReq_in /* 
   Description: Demande de red�marrage par le SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_008_CoPTStNew_stEng_in /* 
   Description: Nouvel �tat moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  1 .. 9 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_008_CoPtUH_stMaxRStrtReq_in /* 
   Description: Classe la plus �lev�e des demandes de Redemarrage Automatique pr�sentes Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_008_CoPtUH_stPwt_in /* 
   Description: Etat GMP UH Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_008_CoReqVeh_stEngRStrtReq_in /* 
   Description: Demande de redem/coupure moteur par sous-syst�me V�hicule
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_008_Ext_stGBxCf_in /* 
   Description: Type de boite
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT_IRV: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern UInt8 CoCut_ctForcRstrtFail /* 
   Description: Compteur d'�chec redem d�faut forc� Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 10 */;
extern UInt8 CoCut_ctRstrtFail /* 
   Description: nombre de red�marrages rat�s successifs Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 10 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseAutRStrt_out /* 
   Description: Pour APV. Demande de coupure par red�marrage trop tardif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseClsTra_out /* 
   Description: Pour APV. Coupure caus�e par CDT ferm�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseDgoBlt_out /* 
   Description: Demande de coupure par glissement courroie Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseElMecRStrtReq_out /* 
   Description: Demande de coupure par SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseLongGc_out /* 
   Description: Pour APV. Coupure caus�e par Changement de rapport MAP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseNotRStrtAuth_out /* 
   Description: Pour APV. Coupure caus�e par l'absence de l'autorisation de red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseRCfTyp3_out /* 
   Description: Pour APV. Coupure caus�e par une Reconfiguration de Type 3
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseRStrtReqForc_out /* 
   Description: Pour APV. Coupure caus�e par un besoin red�marrage forc� avec r�gime moteur non comp
   atible Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseSpdMax_out /* 
   Description: Pour APV. Demande de coupure par vitesse haute
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCutCaseVehRStrtReq_out /* 
   Description: Pour APV. Demande de coupure par l'habitacle
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bDgoCutReq_out /* 
   Description: R�sultat diag. pour demande de coupure
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bEngCutOffReq_out /* 
   Description: Demande de coupure moteur UH
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bEngStallReq_out /* 
   Description: Demande d'entr�e en SCA
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bMonRunCutReq_out /* 
   Description: Diag actif. pour demande de coupure
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_008_CoPtUH_bInhHiSpdAltRstrtReq_in /* 
   Description: demande de coupure en redeml ou en stop sur un seuil de vitesse v�hicule si le redem
    non engag� au dessus de seuil
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_008_CoPtUH_bRStrtMchAuth_in /* 
   Description: Autorisation bo�te de vitesse pour le pilotage MEL en red�marrage Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_008_CoPtUH_bRStrtReqAvl_in /* 
   Description: Demande de red�marrage pr�sente Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_008_CoSync_bStuckEngStaAcv_in /* 
   Description: Risque moteur bloqu� et machine �lectrique active
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_008_FRM_bAcvCutCoPtUH_in /* 
   Description: Demande de coupure si moteur en stop
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_008_FRM_bAcvCutTotCoPtUH_in /* 
   Description: Demande de coupure quelquesoit l'�tat moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_008_FRM_bInhspdVehCoPtUH_in /* 
   Description: Info impliquant une reconfiguration li�e � un d�faut sur l'info vitesse v�hicule
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_DgoFct_bHealDiagCfLvl1_in /* 
   Description: R�sultat test curatif niveau 1 Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_MgtDrv_bDftHld_in /* 
   Description: D�faut forc� Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_MgtEng_bLgRstrt_in /* 
   Description: Red�marrage jug� trop long Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_MonDrv_bRstrtAntCncl_in /* 
   Description: Annulation redem anticip� Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_MonDrv_bRstrtReq_in /* 
   Description: Demande par le conducteur du redemarrage moteur Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_MonGB_bCutCaseLgGc_in /* 
   Description: Changement de rapport MAP qui pourrait �tre trop long Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_MonGB_bRstrtAuth_in /* 
   Description: Autorisation de redemarrage par la boite de vitesse Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_MonVeh_bPresPtlRstrtReqForc_in /* 
   Description: Demande partielle de redem par besoin assistance freinage forc�e Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_MonVeh_bPtlVehRstrtReqForc_in /* 
   Description: Demande partielle de redem par besoin vitesse forc�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_008_TEV_MonVeh_bRstrtAuth_in /* 
   Description: Autorisation de red�marrage Emove trait�e Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN_IRV: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern Boolean CoCut_bElMecIntrRstrt /* 
   Description: Interruption redem par alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern Boolean CoCut_bRstrtFail /* 
   Description: Echec de red�marrage d�tect� Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void CoStopStart_007_MSE_ini(Void);
extern Void CoStopStart_008_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void CoStopStart_008_FctVarInit(Void);


#endif/*_COSTOPSTART_008_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

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
 ***  %name: CoStopStart_018_TEV_fct.h %
 *** 
 ***  %version: 12.0 %
 *** 
 ***  %date_modified: Wed Apr 24 16:11:43 2013 %
 *** 
 *** 
 ***  %derived_by: u169773 %
 ***  %release: CoStopStart/12.0 %
 ***  %full_filespec: CoStopStart_018_TEV_fct.h-12.0:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : TL_01460_10_03530
 *** TargetLink subsystem : TL_01460_10_03530/CoStopStart_018
 *** Codefile             : costopstart_018_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2013-04-24 15:07:28
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
 *** Style definition file               : C:\dSPACE\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceCod
 ***                                       eSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _COSTOPSTART_018_TEV_FCT_H_
#define _COSTOPSTART_018_TEV_FCT_H_

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
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_018_Ext_spdVehSecu_in /* 
   Unit       : km/h
   Description: Vitesse v�hicule s�curis�e
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_018_Veh_spdVeh_in /* 
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
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_018_CoPTStNew_stEng_in /* 
   Description: Nouvel �tat moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  1 .. 9 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_018_CoPtASE_stPwt_in /* 
   Description: Etats GMP SCAr
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_018_CoPtUH_stMaxRStrtReq_in /* 
   Description: Classe la plus �lev�e des demandes de Redemarrage Automatique pr�sentes Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_018_CoPtUH_stPwt_in /* 
   Description: Etat GMP UH Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bAltInh_out /* 
   Description: Inhibition de l'alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bAltPrepRStrtReq_out /* 
   Description: Demande de Preparation Red�marrage pour l'alternateur (Preflux)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bAltRPosnEngReq_out /* 
   Description: Demande de Repositionnement du moteur  par l'alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bAltRStrtReq_out /* 
   Description: Demande de Red�marrage pour l'alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bAltStallReq_out /* 
   Description: Demande de Callage pour l'alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bCdnInhRStrt_out /* 
   Description: Condition Inhibition du red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bRStrtAnt_out /* 
   Description: Indication d'anticipation de Redem en Cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bVSSNwAcvAuth_out /* 
   Description: Autorisation de maintien DMTR
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_018_CoPtUH_bRStrtMchAuth_in /* 
   Description: Autorisation bo�te de vitesse pour le pilotage MEL en red�marrage Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_018_CoReqRStrt_bAuthSA_in /* 
   Description: Autorisation Stall Assist sur red�marrabilit�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_018_CoStrt_bStrtAuth_in /* 
   Description: Flux d'autorisation du premier d�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_018_CoTqRStrt_bEngStrtSuc_in /* 
   Description: Signal indiquant que le d�marrage au sens large est r�ussi
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_018_EngReqH_bEngRStrtAutnAvl_in /* 
   Description: Capacit� Redem autonome
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_018_FRM_bInhspdVehCoPtUH_in /* 
   Description: Info impliquant une reconfiguration li�e � un d�faut sur l'info vitesse v�hicule
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_018_PARM_bEngRstrtAutnAvl_in /* 
   Description: Capacit� Redem Autonome Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_018_TqLimUH_bAcvUnBlsEng_in /* 
   Description: Bool�en de demande de boost moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_018_TEV_CoRStrt_bRstrtReq_in /* 
   Description: Demande de redemarrage moteur validee Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_018_TEV_MgtEng_bLgRstrt_in /* 
   Description: Red�marrage jug� trop long Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_018_TEV_MonDrv_bPrepRstrtReq_in /* 
   Description: Demande conducteur de pr�fluxage Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_018_TEV_MonDrv_bRstrtAntCncl_in /* 
   Description: Annulation redem anticip� Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_018_TEV_MonVeh_bHiSpdRstrtAuth_in /* 
   Description: Autorisation de la demande de red�marrage pour l'alternateur sur vitesse haute
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_018_TEV_MonVeh_bRstrtAuthMch_in /* 
   Description: Autorisation de red�marrage pour la machine Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN_IRV: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern Boolean MgtAlt_bIntrAltRstrtReqRaw /* 
   Description: Condition d'interruption du red�marrage alternateur qui permet de demander l'arr�t
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
extern Void CoStopStart_017_MSE_ini(Void);
extern Void CoStopStart_018_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void CoStopStart_018_FctVarInit(Void);


#endif/*_COSTOPSTART_018_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
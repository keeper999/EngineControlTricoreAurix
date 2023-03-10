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
 ***  %name: CoStopStart_004_TEV_fct.h %
 *** 
 ***  %version: 11.2 %
 *** 
 ***  %date_modified: Wed Feb 22 11:37:16 2012 %
 *** 
 *** 
 ***  %derived_by: e375697 %
 ***  %release: CoStopStart/11.0 %
 ***  %full_filespec: CoStopStart_004_TEV_fct.h-11.2:incl:2 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : TL_01460_09_1903
 *** TargetLink subsystem : TL_01460_09_1903/CoStopStart_004
 *** Codefile             : costopstart_004_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2012-02-22 10:53:01
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

#ifndef _COSTOPSTART_004_TEV_FCT_H_
#define _COSTOPSTART_004_TEV_FCT_H_

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

struct tag_SBFS_F15_Enregistrement_N_PMH_004_tp {
   unsigned int Aux_C0041_sflag0 : 3;
   unsigned int C0041_F15_Enre__rement_N_PMH_ns : 3;
   unsigned int C0041_glflag : 2;
   unsigned int C0045_Enregistrement_PMH1 : 1;
   unsigned int C0048_Enregistrement_PMH2 : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
struct tag_SBFS_F16_Enregistrement_ti_redem_004_tp {
   unsigned int Aux_C00411_sflag1 : 2;
   unsigned int C00411_glflag : 2;
   unsigned int C00412_Attente_Redem : 1;
   unsigned int C00413_Regime_non_nul : 1;
   unsigned int C00414_Regime_cible_atteint : 1;
   unsigned int C00415_Temps_N___enregistrement : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#define COSTOPSTART_START_SEC_CONST_8BIT
#include "CoStopStart_MemMap.h"
/******************************************************************************\
   AR_SEC_CONST_8BIT: Const 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_SEC_CONST_8BIT SInt8 S00495_LookUpTable_x_table[8];
extern AR_SEC_CONST_8BIT UInt8 S00495_LookUpTable_z_table[8];

#define COSTOPSTART_STOP_SEC_CONST_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_16BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_16BIT: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_004_BatMgt_resBattIt_in /* 
   Unit       : mOhm
   Description: Resistance interne de la batterie a fort courant renvoyee par BatMgt
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_004_BatMgt_uBattOc_in /* 
   Unit       : V
   Description: Pseudo tension circuit ouvert renvoyee par BatMgt
   LSB: 2^-7 OFF:  0 MIN/MAX:  11 .. 14 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_004_Ext_pAirExtMes_in /* 
   Unit       : mbar
   Description: pression atmospherique
   LSB: 2^0 OFF:  0 MIN/MAX:  500 .. 1500 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoStopStart_004_Ext_tCoMes_in /* 
   Unit       : C
   Description: Temperature d eau  coolant temperature toujours present voir CSMT_CGMT_08_0941
   LSB: 2^0 OFF:  0 MIN/MAX:  -40 .. 214 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoStopStart_004_Ext_tOilMes_in /* 
   Unit       : C
   Description: temperature huile mesuree
   LSB: 0.1 OFF:  0 MIN/MAX:  -50 .. 200 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_004_PredEs_agEs_in /* 
   Unit       : Ck
   Description: Angle predit ou mesure
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 720 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoStopStart_004_PredEs_nFast_in /* 
   Unit       : RPM
   Description: Regime rapide
   LSB: 2^0 OFF:  0 MIN/MAX:  -500 .. 1000 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_004_PredRstrt_tiMax2TDC_in /* 
   Unit       : s
   Description: Duree maximale permettant le redemarrage en 2 PMH
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoStopStart_004_Veh_spdVeh_in /* 
   Unit       : kmh
   Description: vitesse vehicule La provenance est fonction de larchitecture Electique
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_16BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 CoReqRStrt_stRStrtTyp_out /* 
   Description: Typage redemarrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_004_CoEmCkg_stStrtRstrtFbCmd_in /* 
   Description: Retour de commande demarrage redemarrage du SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_004_CoEmSTT_iElNwStop_in /* 
   Unit       : A
   Description: Courant du reseau de bord en phase de stop
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 250 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_004_CoOptmEl_stElEProv_in /* 
   Description: Etat de la fourniture en energie electrique
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_004_CoPtSynt_stPwt_in /* 
   Description: Etat GMP Synthese
   LSB: 2^0 OFF:  0 MIN/MAX:  1 .. 55 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_004_PredEs_agUncrtEs_in /* 
   Unit       : Ck
   Description: Incertitude dangle predit ou mesure
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 90 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_004_PredRstrt_noTDC_in /* 
   Description: Nombre de PMH garanti pour le prochain redemarrage STT
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_IF_GLOBAL_8BIT SInt8 CoStopStart_004_RvAltMgt_tRvAltStatEstim_in /* 
   Unit       : C
   Description: Temperature stator alternateur reversible estimee
   LSB: 2^1 OFF:  0 MIN/MAX:  -30 .. 218 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_004_Sync_agEng_in /* 
   Unit       : Ck
   Description: Angle moteur calcule
   LSB: 6 OFF:  0 MIN/MAX:  0 .. 720 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_004_TqLimUH_stDrivTyp_in /* 
   Description: Type de roulage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_004_VSSCtzMgt_uUcapMes_in /* 
   Unit       : V
   Description: Tension mesuree aux bornes des Ucaps DMTC renvoyee par VSSCtzMgt
   LSB: 2^-5 OFF:  0 MIN/MAX:  0 .. 6.3125 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean CoReqRStrt_bAuthSA_out /* 
   Description: Autorisation Stall Assist sur redemarrabilite
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoReqRStrt_bEngRStrtReq_out /* 
   Description: Dde Redem sur redemarrabilite
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoReqRStrt_bEngStopAuth_out /* 
   Description: Autorisation Stop sur redemarrabilite
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoReqRStrt_bNotBlsVehReq_out /* 
   Description: Demande de delestage vers le vehicule
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoReqRStrt_bRstrtAuth_out /* 
   Description: Autorisation de redemarrage par FSR
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_004_Afts_bRstMemCoReqRStrt_in /* 
   Description: Demande deffacement valeurs memorisees par la fonction CoReqRStrt
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_004_CoPtUH_bDrvTraOp_in /* 
   Description: Pour APV Etat CDT
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_004_CoPtUH_bRstrtCritAuth_in /* 
   Description: Autorisation de redemarrage critique par supervision STT
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_004_CoSync_bAgEsCfm_in /* 
   Description: Information Position arret moteur confirmee
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_004_CoSync_bDetNNull_in /* 
   Description: Detection dun regime nul
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_004_Ext_bNotAvl_resBattIt_in /* 
   Description: Indisponibilite de linformation de resistance interne de la batterie a fort courant
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_004_Ext_bNotAvl_uBattOc_in /* 
   Description: Indisponibilite de linformation de pseudo tension circuit ouvert
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_VAR_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_SEC_NVM_INIT_BOOLEAN: Var Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_SEC_NVM_INIT_BOOLEAN Boolean CoReqRstrt_ctRStrtMem_NV_init;
extern AR_SEC_NVM_INIT_BOOLEAN Boolean CoReqRstrt_nTDC1FastMem_NV_init;
extern AR_SEC_NVM_INIT_BOOLEAN Boolean CoReqRstrt_nTDC1SlowMem_NV_init;
extern AR_SEC_NVM_INIT_BOOLEAN Boolean CoReqRstrt_nTDC2FastMem_NV_init;
extern AR_SEC_NVM_INIT_BOOLEAN Boolean CoReqRstrt_nTDC2SlowMem_NV_init;
extern AR_SEC_NVM_INIT_BOOLEAN Boolean CoReqRstrt_tiRStrtFastMem_NV_init;
extern AR_SEC_NVM_INIT_BOOLEAN Boolean CoReqRstrt_tiRStrtSlowMem_NV_init;

#define COSTOPSTART_STOP_SEC_VAR_BOOLEAN
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
extern Void CoStopStart_003_MSE_ini(Void);
extern Void CoStopStart_004_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void CoStopStart_004_FctVarInit(Void);

/******************************************************************************\
   UserGlobalSFAux: static function(s) (invisible for other module)
\******************************************************************************/
extern Void C00411_F16_Enr__redem_node_fcn1(Void);
extern Void C0041_F15_Enre__N_PMH_node_fcn1(Void);


#endif/*_COSTOPSTART_004_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

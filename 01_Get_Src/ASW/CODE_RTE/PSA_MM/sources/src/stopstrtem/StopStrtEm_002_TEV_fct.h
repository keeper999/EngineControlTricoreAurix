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
 ***  %name: StopStrtEm_002_TEV_fct.h %
 *** 
 ***  %version: 3.1 %
 *** 
 ***  %date_modified: Fri Apr 12 12:23:43 2013 %
 *** 
 *** 
 ***  %derived_by: u261238 %
 ***  %release: StopStrtEm/5.0 %
 ***  %full_filespec: StopStrtEm_002_TEV_fct.h-3.1:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : StopStrtEm_002
 *** TargetLink subsystem : StopStrtEm_002/StopStrtEm_002
 *** Codefile             : stopstrtem_002_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2013-04-02 14:14:09
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
 *** Share fcns between TL subsystems    : disabled
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
 *** TargetLink version      : 3.0.1p1 from 06-Oct-2009
 *** Code generator version  : Build Id 3.0.1.8 from 2009-03-10 10:34:41
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _STOPSTRTEM_002_TEV_FCT_H_
#define _STOPSTRTEM_002_TEV_FCT_H_

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

struct tag_SBFS_F02_04_Retour_commande_SEEM_STT_A_avec_DEM_002_tp {
   unsigned int C0022_INIT : 1;
   unsigned int C0023_DEM : 1;
   unsigned int C0024_REDEM : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#define STOPSTRTEM_START_SEC_GLOBAL_16BIT
#include "StopStrtEm_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_16BIT: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_IF_GLOBAL_16BIT SInt16 CoEmCkg_nFast_out /* 
   Unit       : RPM
   Description: R�gime rapide renvoy� par CoEmCkg
   LSB: 2^0 OFF:  0 MIN/MAX:  -500 .. 1000 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoEmCkg_nStaEgdHiThd_out /* 
   Unit       : RPM
   Description: ecter le r�gime faible renvoy� par CoEmCkg
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoEmCkg_nStaEgdLoThd_out /* 
   Unit       : RPM
   Description: R�gime mini pour engager depuis la commande d'engagement
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_IF_GLOBAL_16BIT SInt16 StopStrtEm_002_PredEs_nFast_in /* 
   Unit       : RPM
   Description: R�gime rapide
   LSB: 2^0 OFF:  0 MIN/MAX:  -500 .. 1000 */;
extern AR_IF_GLOBAL_16BIT UInt16 StopStrtEm_002_StaRstrtMgt_nStaEgdHiThd_in /* 
   Unit       : RPM
   Description: R�gime maxi pour engager depuis la commande d'engagement
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_IF_GLOBAL_16BIT UInt16 StopStrtEm_002_StaRstrtMgt_nStaEgdLoThd_in /* 
   Unit       : RPM
   Description: R�gime mini pour engager depuis la commande d'engagement
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 500 */;

#define STOPSTRTEM_STOP_SEC_GLOBAL_16BIT
#include "StopStrtEm_MemMap.h"

#define STOPSTRTEM_START_SEC_GLOBAL_8BIT
#include "StopStrtEm_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 CoEmCkg_stReqAltBoost_out /* 
   Description: Requ�te de boost
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoEmCkg_stRstrtTyp_out /* 
   Description: Typage de red�marrage renvoy� par CoEmCkg
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoEmCkg_stSTTCf_out /* 
   Description: Type STT
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoEmCkg_stStrtRstrtFbCmd_out /* 
   Description: Retour de commande d�marrage red�marrage du SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoEmCkg_tiStaEgdHiThd_out /* 
   Unit       : s
   Description: Temps maxi pour engager depuis la commande d'engagement
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.25 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoEmCkg_tiStaEgdLoThd_out /* 
   Unit       : s
   Description: Temps mini pour engager depuis la commande d'engagement
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.25 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEm_002_CoPtSynt_stPwt_in /* 
   Description: Etat GMP Synth�se
   LSB: 2^0 OFF:  0 MIN/MAX:  1 .. 55 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEm_002_CoReqRStrt_stRStrtTyp_in /* 
   Description: Typage de red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEm_002_CoStrtRStrt_stAcvReq_in /* 
   Description: Synth�se des consignes de d�marrage et red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEm_002_Ext_stElProdCf_in /* 
   Description: Configuration du producteur d'�nergie �lectrique 12V
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEm_002_Ext_stStaCf_in /* 
   Description: Configuration du d�marreur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEm_002_RvAltMgt_stRvAltRstrtFbCmd_in /* 
   Description: Retour de commande red�marrage de l'alternateur r�versible
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEm_002_StaRstrtMgt_tiStaEgdHiThd_in /* 
   Unit       : s
   Description: Temps maxi pour engager depuis la commande d'engagement
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.25 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEm_002_StaRstrtMgt_tiStaEgdLoThd_in /* 
   Unit       : s
   Description: Temps mini pour engager depuis la commande d'engagement
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.25 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEm_002_StaStrtMgt_stStaFbCmd_in /* 
   Description: Retour de commande du d�marreur pour le d�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;

#define STOPSTRTEM_STOP_SEC_GLOBAL_8BIT
#include "StopStrtEm_MemMap.h"

#define STOPSTRTEM_START_SEC_GLOBAL_BOOLEAN
#include "StopStrtEm_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bDetSlowN_out /* 
   Description: D�tection de r�gime faible compris entre 2 seuils renvoy� par CoEmCkg
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bInfoCplReq_out /* 
   Description: Information demande d'engagement du d�marreur renvoy� par CoEmCkg
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bInfoCplSt_out /* 
   Description: Information �tat d'engagement du d�marreur renvoy� par CoEmCkg
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bReqAltBoostFil_out /* 
   Description: Requ�te de boost simplifi�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bRvAltPrepRstrtReq_out /* 
   Description: Demande de pr�paration au red�marrage pour l'AR (pr�flux)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bRvAltRstrtReq_out /* 
   Description: Demande de red�marrage par AR
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bStaRstrtReq_out /* 
   Description: Demande de red�marrage par d�marreur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bStaStrtReq_out /* 
   Description: Demande de d�marrage par d�marreur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bVldFastN_out /* 
   Description: Validation du calcul du r�gime rapide renvoy� par CoEmCkg
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoEmCkg_bWaitStrtReq_out /* 
   Description: Mise en attente du d�marrage / Demande d'allumage voyant "Pr�chauffage" du SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_CoEmSTT_bAuthBoost_in /* 
   Description: Autorisation de boost 
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_CoEmSTT_bSTTWaitStrtReq_in /* 
   Description: Mise en attente du d�marrage / Demande d'allumage voyant "Pr�chauffage" du SEEM li�s
    au STT
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_CoEmSTT_bVSSAcvSt_in /* 
   Description: Etat de maintien du DMT
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_CoPtUH_bAltPrepRStrtReq_in /* 
   Description: Demande de Preparation Red�marrage pour l'alternateur (Preflux)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_Ext_bSTTCf_in /* 
   Description: Activation de la fonction STT, par t�l�codage ou calibration
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_PredEs_bDetSlowN_in /* 
   Description: D�tection de r�gime faible compris entre 2 seuils
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_PredEs_bVldFastN_in /* 
   Description: Validation du calcul du r�gime rapide
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_StaRstrtMgt_bInfoCplReq_in /* 
   Description: Information demande d'engagement du d�marreur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_StaRstrtMgt_bInfoCplSt_in /* 
   Description: Information �tat d'engagement du d�marreur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEm_002_TqLimUH_bAcvUnBlsEng_in /* 
   Description: Demande de boost GMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define STOPSTRTEM_STOP_SEC_GLOBAL_BOOLEAN
#include "StopStrtEm_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void StopStrtEm_001_MSE_ini(Void);
extern Void StopStrtEm_002_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void StopStrtEm_002_FctVarInit(Void);


#endif/*_STOPSTRTEM_002_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

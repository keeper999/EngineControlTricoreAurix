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
 ***  %name: TraBVx_028_TEV_fct.h %
 *** 
 ***  %version: 14.3.build1 %
 *** 
 ***  %date_modified: Mon Feb 24 09:29:29 2014 %
 *** 
 *** 
 ***  %derived_by: e390179 %
 ***  %release: TqStruct/14.0 %
 ***  %full_filespec: TraBVx_028_TEV_fct.h-14.3.build1:incl:2 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : Re_028
 *** TargetLink subsystem : Re_028/F00_Superviseur_Synthese
 *** Codefile             : trabvx_028_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2014-02-21 11:54:09
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

#ifndef _TRABVX_028_TEV_FCT_H_
#define _TRABVX_028_TEV_FCT_H_

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

#define TRABVX_START_SEC_GLOBAL_16BIT
#include "TraBVx_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_16BIT: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_IF_GLOBAL_16BIT UInt16 CoPt_facAntiJerk_out /* 
   Unit       : -
   Description: Pond�ration du couple d'agr�ment curatif
   LSB: 2^-8 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoPt_nMinTqMaxGBxMsg_out /* 
   Unit       : RPM
   Description: R�gime mini au couple max (message intersyst�me)
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoPt_nPrimShaftTar_out /* 
   Unit       : RPM
   Description: R�gime arbre primaire en rapport cible
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoPt_nPrimShaft_out /* 
   Unit       : RPM
   Description: R�gime arbre primaire
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoPt_nTar_out /* 
   Unit       : RPM
   Description: R�gime cible en r�gulation par la BV
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoPt_nTrb_out /* 
   Unit       : RPM
   Description: R�gime turbine
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoPt_rCnvTq_out /* 
   Unit       : -
   Description: Taux de conversion de couple
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 20 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tOilGBx_out /* 
   Unit       : �C
   Description: Temp�rature d'huile BV
   LSB: 2^-2 OFF:  0 MIN/MAX:  -50 .. 200 */;
extern AR_IF_GLOBAL_16BIT UInt16 CoPt_tiDeacPrfMod_out /* 
   Unit       : s
   Description: Temps de d�sactivation de la demande ocerboost/perfo
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tqAirMaxGBx_out /* 
   Unit       : N.m
   Description: Couple max admissible par la BV pour la branche air
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tqCnvClu_out /* 
   Unit       : N.m
   Description: Couple pr�lev� par le convertisseur de couple
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tqFfNReg_out /* 
   Unit       : N.m
   Description: Couple de feed-forward pour la r�gulation de r�gime
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tqMaxClu_out /* 
   Unit       : N.m
   Description: Couple transmissible par l'embrayage
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tqMaxGBxAir_out /* 
   Unit       : N.m
   Description: Couple max BV pour le pilotage de la branche air
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tqMaxGBx_nReg_out /* 
   Unit       : N.m
   Description: Couple de limitation BV en r�gulation de r�gime
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tqMaxGBx_out /* 
   Unit       : N.m
   Description: Couple max admissible par la BV
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tqMinGBxMsg_out /* 
   Unit       : N.m
   Description: Couple mini (message intersyst�me)
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 CoPt_tqReqClu_out /* 
   Unit       : N.m
   Description: Consigne de couple embrayage
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 Re_TraBVx_028_TEV_CoPt_tqGBxLossNReg_irv_out /* 
   Unit       : N.m
   Description: Couple de pertes BV en r�gulation de r�gime
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_CoCha_tqEfcAirReq_in /* 
   Unit       : N.m
   Description: Couple air coordonn� avec les consignes de couple ESP
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_CoPt_facAntiJerkExt_in /* 
   Unit       : -
   Description: Pond�ration du couple d'agr�ment curatif ext�rieure
   LSB: 2^-8 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_CoVSCtl_rAccPEngTrv_in /* 
   Unit       : %
   Description: Position p�dale coordonn�e
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_CoVSCtl_tqSIPTar_in /* 
   Unit       : N.m
   Description: Couple cible en SIP de sortie de la coordination XVV
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_EngLim_tqEfcMaxNReg_in /* 
   Unit       : N.m
   Description: Couple de limitation en effectif pour la r�gulation de r�gime BV
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_EngLim_tqEfcMinCurCutOffTrv_in /* 
   Unit       : N.m
   Description: Couple mini avec coupure transversal
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_EngLim_tqEfcMinCurTrv_in /* 
   Unit       : N.m
   Description: Couple mini hors coupure transversal
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_EngLim_tqEfcNRegTakeOffLim_in /* 
   Unit       : N.m
   Description: Couple effectif de limitation max pour la r�gulation de r�gime
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_Ext_nEng_in /* 
   Unit       : RPM
   Description: R�gime moteur au PMH
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_Ext_pAirExtMes_in /* 
   Unit       : mbar
   Description: Pression atmosph�rique
   LSB: 2^0 OFF:  0 MIN/MAX:  500 .. 1500 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_Ext_tCoMes_in /* 
   Unit       : �C
   Description: Temp�rature d eau
   LSB: 2^0 OFF:  0 MIN/MAX:  -40 .. 214 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_Ext_tOilGBx_in /* 
   Unit       : �C
   Description: temp�rature d'huile boite
   LSB: 2^0 OFF:  0 MIN/MAX:  -40 .. 250 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_TqCmp_tqSumLossCmp_in /* 
   Unit       : N.m
   Description: Couple de pertes globales � compenser
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_TqSys_nTarIdl_in /* 
   Unit       : RPM
   Description: R�gime de ralenti cible final
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_TqSys_tiDeacOvbReq_in /* 
   Unit       : s
   Description: Temps de d�sactivation de la demande overboost/perfo
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_TqSys_tqEfcIdl_in /* 
   Unit       : N.m
   Description: Couple effectif du r�gulateur ralenti avance Essence/Diesel
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_Tra_nPrimShaft_in /* 
   Unit       : RPM
   Description: R�gime arbre primaire
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_Tra_nTar_in /* 
   Unit       : RPM
   Description: R�gime cible en r�gulation
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_Tra_nTrb_in /* 
   Unit       : RPM
   Description: R�gime turbine
   LSB: 2^1 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_Tra_rCnvTq_in /* 
   Unit       : -
   Description: Taux de conversion de couple
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 20 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_Tra_tqCnvClu_in /* 
   Unit       : N.m
   Description: Couple pr�lev� par le convertisseur de couple
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_Tra_tqMaxClu_in /* 
   Unit       : N.m
   Description: Couple max admissible par l'embrayage
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_Tra_tqMaxGBx_in /* 
   Unit       : N.m
   Description: Couple max admissible par la boite
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_Tra_tqReqClu_in /* 
   Unit       : N.m
   Description: Consigne de couple embrayage
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT SInt16 TraBVx_028_Tra_tqReqGBx_in /* 
   Unit       : N.m
   Description: Consigne de couple boite
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TraBVx_028_Veh_spdVeh_in /* 
   Unit       : km/h
   Description: Vitesse vehicule
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;

#define TRABVX_STOP_SEC_GLOBAL_16BIT
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_GLOBAL_32BIT
#include "TraBVx_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_32BIT: Global 32 bits for AUTOSAR modules | Width: 32
\******************************************************************************/
extern AR_IF_GLOBAL_32BIT UInt32 TraBVx_028_EOM_tiEngRun_in /* 
   Unit       : s
   Description: Temps pass� depuis le d�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4294967295 */;
extern AR_IF_GLOBAL_32BIT UInt32 TraBVx_028_Ext_dstVehTotMes_in /* 
   Unit       : km
   Description: Kilom�trage absolu
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 16777214 */;

#define TRABVX_STOP_SEC_GLOBAL_32BIT
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_GLOBAL_8BIT
#include "TraBVx_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_idxPrfGBxMsg_out /* 
   Unit       : -
   Description: Indice de perfo moteur (message intersyst�me)
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_idxPtSpt_out /* 
   Description: Indice de sportivit� du GMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_IF_GLOBAL_8BIT SInt8 CoPt_noCylCutAuth_out /* 
   Description: Nombre de cylindre autoris�s � �tre coup�
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 6 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_noDrivFilTyp_out /* 
   Description: Type d'agr�ment pr�ventif demand�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4 */;
extern AR_IF_GLOBAL_8BIT SInt8 CoPt_noEgdGear_out /* 
   Description: Rapport engag� m�caniquement
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 9 */;
extern AR_IF_GLOBAL_8BIT SInt8 CoPt_noTarGear_out /* 
   Description: Rapport cible
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 9 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_posnLev_out /* 
   Description: Position levier
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_stClu_out /* 
   Description: Etat embrayage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_stCnvCluFil_out /* 
   Description: Etat convertisseur filtr�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_stCpl_out /* 
   Description: Etat couplage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_stCrawl_out /* 
   Description: Etat rampage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_stDragRed_out /* 
   Description: Etat de la r�duction de tra�n�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_stGBxMod_out /* 
   Description: Mode BV utilis�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_stGSTyp_out /* 
   Description: Type de changement de rapport
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_stGearRat_out /* 
   Description: Etat d�mul
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT SInt8 CoPt_stVehDirEstim_out /* 
   Description: Sens de marche du v�hicule
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoPt_stVoltAltBoostReq_out /* 
   Description: Etat demande de boost de la tension alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 Re_TraBVx_028_TEV_CoPt_noTypPIDGain_irv_out /* 
   Description: Type de r�gulation de r�gime
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4 */;
extern AR_IF_GLOBAL_8BIT UInt8 Re_TraBVx_028_TEV_CoPt_stPhaGS_irv_out /* 
   Description: Phase de changement de rapport
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT SInt8 TraBVx_028_CoPt_noEgdGearCordIt_in /* 
   Description: Rapport de boite engag� coordonn� pour la structure couple
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 8 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Ext_posnGBxLev_in /* 
   Description: Position levier
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 13 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Ext_stGBxCf_in /* 
   Description: Type de boite de vitesse
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Ext_stTraTypCf_in /* 
   Description: Type de boite automatique ou pilot�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
extern AR_IF_GLOBAL_8BIT SInt8 TraBVx_028_Ext_tAir_in /* 
   Unit       : �C
   Description: Temp�rature d'air ambiant
   LSB: 2^0 OFF:  0 MIN/MAX:  -40 .. 100 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_TqSys_stStrtEngTyp_in /* 
   Description: Type de d�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_TqSys_stTypPwtCf_in /* 
   Description: Type de GMP pr�sent
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_idxPtSpt_in /* 
   Description: Indice de sportivit� du GMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_IF_GLOBAL_8BIT SInt8 TraBVx_028_Tra_noEgdGear_in /* 
   Description: Rapport engag� m�caniquement
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 9 */;
extern AR_IF_GLOBAL_8BIT SInt8 TraBVx_028_Tra_noTarGear_in /* 
   Description: Rapport cible
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 9 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_stClu_in /* 
   Description: Etat embrayage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_stCnvClu_in /* 
   Description: Etat convertisseur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_stCpl_in /* 
   Description: Etat couplage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_stCrawl_in /* 
   Description: Etat rampage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_stDragRed_in /* 
   Description: Etat de la r�duction de tra�n�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_stGBxMod_in /* 
   Description: Programme BV s�lectionn�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_stGSTyp_in /* 
   Description: Type de changement de rapport
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_stGearRat_in /* 
   Description: Etat d�mul
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 TraBVx_028_Tra_stPhaGearShift_in /* 
   Description: Phase de changement de rapport
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT SInt8 TraBVx_028_Tra_stVehDirEstim_in /* 
   Description: Sens de marche du v�hicule
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 2 */;

#define TRABVX_STOP_SEC_GLOBAL_8BIT
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_GLOBAL_BOOLEAN
#include "TraBVx_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bAcvCycMod_out /* 
   Description: Bool�en d'activation du mode cycle
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bAcvDynTqResCrawl_out /* 
   Description: Activation des r�serves pour rampage dynamique
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bAcvIdlCrawl_out /* 
   Description: Bool�en d'activation de la consigne de ralenti sp�cifique au rampage BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bAcvNRegReq_out /* 
   Description: Demande d'activation de la r�gulation de r�gime
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bAcvSptTakeOff_out /* 
   Description: D�collage perfo
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bAcvStatTqResCrawl_out /* 
   Description: Activation des r�serves pour rampage statiques
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bAcvTqNCord_out /* 
   Description: Bool�en d'intervention BV hors SIP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bAcvWupMod_out /* 
   Description: Demande Mode BVA/BVMP mise en temp�rature
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bAuthCrawl_out /* 
   Description: Autorisation de rampage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bBrioUHAuth_out /* 
   Description: Autorisation d'activation de la strat�gie de brio
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bDiagSIPORng_out /* 
   Description: Diagnostique de temps de passage d�pass�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bEngCrawlAuth_out /* 
   Description: Flag d'autorisation de rampage envoy� par le TCU
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bFrzAC_out /* 
   Description: Demande de figeage du compresseur de climatisation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bFrzEGR_out /* 
   Description: Demande de figeage de l'EGR
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bFrzTrbSt_out /* 
   Description: Demande de figeage de l'�tat du turbo
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bInhAC_out /* 
   Description: Demande d'inhibition du compresseur de climatisation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bInhEGR_out /* 
   Description: Demande de coupure EGR
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bInhRecup_out /* 
   Description: Demande d'inhibition de la strat�gie de r�cup�ration
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bInjCutDynAuth3_out /* 
   Description: Autorisation d'activation de la coupure dynamique
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bPrepSIP_out /* 
   Description: Demande de pr�paration de changement de rapport
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bPrfModReq_out /* 
   Description: Demande de mode perfo
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bSIP_out /* 
   Description: Changement de rapport en cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bSmkFil_out /* 
   Description: Demande de limitation de la chute des cartos fum�es
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bSpdVehLoDet_out /* 
   Description: Flag d'arr�t strict du v�hicule
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bTakeOff_out /* 
   Description: Etat d�collage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bTqAltFrzReq_out /* 
   Description: Demande de figeage du couple alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bTqAltGrdLimReq_out /* 
   Description: Demande de limitation de gradient du couple alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_bTqTx_out /* 
   Description: Etat transmission de couple
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPt_stDrvTra_out /* 
   Description: Etat de la chaine de traction
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean Re_TraBVx_028_TEV_CoPt_bInhNCross_irv_out /* 
   Description: Demande d'inhibition de la strat�gie de croisement de r�gime
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_CoPtUH_bRStrtTypAT_in /* 
   Description: Typage de red�marrage pour BVA
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_EOM_bTWCHeatPha_in /* 
   Description: Flag de chauffe cata en cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_FRM_bInhCoPtCrawl_in /* 
   Description: Flag d'inhibition de la fonction de rampage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_FRM_bInhCoPtSIP_in /* 
   Description: Inhibition des fonctions BV en cas de perte de communication
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_InjSys_bFuCutOff_in /* 
   Description: Flag de coupure totale
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_TqSys_bAcvCllIt_in /* 
   Description: Demande de bouclage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_TqSys_bAcvOvbReq_in /* 
   Description: Flag de demande Overboost/perfo (condition conducteur)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_TqSys_bTypFu_in /* 
   Description: Type de carburant
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bEngCrawlAuth_in /* 
   Description: Engine crawling function authorization
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bFrzAC_in /* 
   Description: Demande de figeage du compresseur de climatisation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bInhAC_in /* 
   Description: Torque inhibition request for AC compressor
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bNRegReq_in /* 
   Description: Demande de r�gulation de r�gime
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bNRegTyp_in /* 
   Description: Type d'accostage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bSIPPrep_in /* 
   Description: Demande de pr�paration de changement de rapport
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bSIP_in /* 
   Description: Changement de rapport en cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bSpdVehLoDet_in /* 
   Description: Flag for plain vehicle stop
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bTqTx_in /* 
   Description: Etat transmission de couple
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean TraBVx_028_Tra_bVoltAltBoostReqGBx_in /* 
   Description: flux de demande de boost issu du CAN DCT.
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define TRABVX_STOP_SEC_GLOBAL_BOOLEAN
#include "TraBVx_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void TraBVx_028_MSE_ini(Void);
extern Void TraBVx_028_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void TraBVx_028_FctVarInit(Void);


#endif/*_TRABVX_028_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

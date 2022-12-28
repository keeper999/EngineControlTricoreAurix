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
 ***  %name: CoStopStart_008_calibrations.h %
 *** 
 ***  %version: 11.5 %
 *** 
 ***  %date_modified: Tue Jun  5 11:25:27 2012 %
 *** 
 *** 
 ***  %derived_by: u261238 %
 ***  %release: CoStopStart/11.0 %
 ***  %full_filespec: CoStopStart_008_calibrations.h-11.5:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : TL_01460_10_03525
 *** TargetLink subsystem : TL_01460_10_03525/CoStopStart_008
 *** Codefile             : costopstart_008_calibrations.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2012-06-05 10:54:33
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

#ifndef _COSTOPSTART_008_CALIBRATIONS_H_
#define _COSTOPSTART_008_CALIBRATIONS_H_

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

#define COSTOPSTART_START_SEC_CALIB_16BIT
#include "CoStopStart_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_16BIT: Mergeable Calib 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_nMinEngCmb_C /* 
   Unit       : RPM
   Description: R�gime minimal pour avoir des combustions moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_spdMinCut_C /* 
   Unit       : km/h
   Description: Seuil de vitesse pour demander la coupure en stop
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 300 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiElMecCutReq_C /* 
   Unit       : s
   Description: Temps de validation dde coupure SEEM
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas1_C /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 1
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 120 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas2_C /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 2
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 30 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas3_C /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 3
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 30 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas4_C /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 4
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 30 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas5_C /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 5
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 30 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiMinRstrtFail_C /* 
   Unit       : s
   Description: Temps minimum pendant lequel l'�tat GMP UH peut rester � red�marrage
   LSB: 0.05 OFF:  0 MIN/MAX:  0 .. 30 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiVehCutReq_C /* 
   Unit       : s
   Description: Temps de validation dde coupure habitacle
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;

#define COSTOPSTART_STOP_SEC_CALIB_16BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_CALIB_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_ctMinRstrtFailForc_C /* 
   Description: Nombre de red�marrage rat�s forc� successifs
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_ctMinRstrtFail_C /* 
   Description: Nombre autoris�s de red�marrage rat�s successifs
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_stModStuckEngStaAcv_C /* 
   Description: Mode pour traiter le signal logique "Risque de moteur bloqu� et d�marreur actif"
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiDgoCutReq_C /* 
   Unit       : s
   Description: Temps de maintien du flag Enregistrement d�faut coupure
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiRstrtAuthCutReq_C /* 
   Unit       : s
   Description: Temps de confirmation en stop de l'absence de l'autorisation de red�marrage, au bout
    duquel la coupure est demand�e.
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiSpySTT_C /* 
   Unit       : s
   Description: Temps de maintien des causes de coupure pour enregistrement par SpySTT
   LSB: 0.05 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiStuckEngStaAcv_C /* 
   Unit       : s
   Description: Temps de maintien du flux "Risque de moteur bloqu� et d�marreur actif"
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiTraClsAMT_C /* 
   Unit       : s
   Description: Temps de confirmation en stop de la fermeture de la CdT, au bout duquel la coupure e
   st demand�e. (BVMP uniquement)
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiWaitElMecRstrtFail_C /* 
   Unit       : s
   Description: Temps d'attente mini pour un nouvel �chec de redem suite � une interruption de redem
    sur rotor bloqu�
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiWaitEngStat_C /* 
   Unit       : s
   Description: Temps de v�rification du r�gime moteur nul
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiWaitRstrtFail_C /* 
   Unit       : s
   Description: Temps d'attente mini pour un nouvel �chec de redem suite � une interruption de redem
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiWaitRstrtForc_C /* 
   Unit       : s
   Description: Temps d'attente pour coupure caus�e par un besoin red�marrage forc� avec r�gime mote
   ur non compatible
   LSB: 0.05 OFF:  0 MIN/MAX:  0 .. 2 */;

#define COSTOPSTART_STOP_SEC_CALIB_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_CALIB_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvCntElMecIntrRstrt_C /* 
   Description: Activation du compteur d'echec de redem sur rotor bloqu�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvCutCaseDgoBlt_C /* 
   Description: Activation de la demande de coupure par glissement courroie
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvMemStallReq_C /* 
   Description: M�morisation de la demande d'entr�e en calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvNormRstrt_C /* 
   Description: For�age du red�marrage � Normal
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvRstrtAntCncl_C /* 
   Description: Activation de l'�tat "annulation de red�marrage anticip�"
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvRstrtAntFail_C /* 
   Description: Prise en compte de l'annulation de red�marrage anticip� comme un echec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvStopPwt_C /* 
   Description: Prise en compte de l'Etat GMP Arr�t� comme un �chec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvWaitCutPwtStall_C /* 
   Description: Prise en compte de l'Etat GMP Attente_coupure dans le calcul de la demande d'entr�e 
   en calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bInhPwt_C /* 
   Description: Non prise en compte de l'�tat GMP suite � un �chec sur interruption SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bNotASECf_C /* 
   Description: Flux de config absence SCA
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bStraStuckEng_C /* 
   Description: Choix de strat�gie pour l'�chec de redem sur blocage moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_CALIB_BOOLEAN
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_CARTO_16BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_16BIT: Mergeable Carto 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_MERGEABLE_CARTO_16BIT UInt16 CoCut_nEngTiWaitRstrtAcv_A[5] /* 
   Unit       : RPM
   Description: Points d'appuis en r�gime moteur de la cartographie du temps de masquage d'�chec de 
   red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 CoCut_tiWaitRstrtAcv_T[5] /* 
   Unit       : s
   Description: Valeurs de la cartographie du temps de masquage d'�chec de red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 3 */;

#define COSTOPSTART_STOP_SEC_CARTO_16BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_INTERNAL_VAR_16BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_16BIT: Display 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 CoCut_tiWaitRstrtAcv /* 
   Unit       : s
   Description: Valeur du temps de masquage d'�chec de red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 CoCut_tiWaitRstrtAcvMem /* 
   Unit       : s
   Description: M�morisation de la valeur du temps de masquage d'�chec de red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 3 */;

#define COSTOPSTART_STOP_SEC_INTERNAL_VAR_16BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_INTERNAL_VAR_32BIT

#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_32BIT: Display 32 bits for AUTOSAR modules | Width: 32
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_32BIT UInt32 CoCut_tiTmp /* 
   Unit       : s
   Description: Valeur du temps du compteur de redem successif loup�
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 3600 */;

#define COSTOPSTART_STOP_SEC_INTERNAL_VAR_32BIT

#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_INTERNAL_VAR_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_8BIT: Display 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 CoCut_noPhaRstrtFail /* 
   Description: Phase en cours dans la d�tection d'�chec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 6 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 CoCut_noRstrtFailCaseRaw_MP /* 
   Description: Pour APV, cause d'echec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 63 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 CoCut_stPwt /* 
   Description: Etat GMP UH
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;

#define COSTOPSTART_STOP_SEC_INTERNAL_VAR_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_INTERNAL_VAR_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bAcvCutCoPtUH /* 
   Description: Dmd coupure trait�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bAcvCutTotCoPtUH /* 
   Description: Dmd coupure totale trait�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bCnclRStrtFailCase_MP /* 
   Description: Cause initiale echec redem facteur 16 (echec annulation redem anticip�)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bCutCaseElMecRaw_MP /* 
   Description: Demande coupure brute par SEEM avant validation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bCutCaseRes /* 
   Description: Demande de coupure par cause r�serv�e (actuellement bloqu�e � 0)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bCutCaseVehRaw_MP /* 
   Description: Demande coupure brute par v�hicule avant validation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bElMecIntrRstrtReq /* 
   Description: Demande d'incr�mentation du compteur d'echec de red�marrage sur interruption de red�
   marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bElMecRstrtFailCase_MP /* 
   Description: Cause initiale interruption par  organe de red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bEngCmb_MP /* 
   Description: Moteur capable de r�aliser des combustions
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bEngStat_MP /* 
   Description: R�gime moteur nul v�rifi�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bInhspdVehCoPtUH /* 
   Description: Inhibition vitesse v�hicule trait�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bNormRstrt /* 
   Description: Condition normale de red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bPwtRstrt /* 
   Description: Etat GMP �gal � Red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bPwtStop /* 
   Description: Etat GMP Stop
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRiseRstrtStPwt /*
   Description: Passage en Etat GMP Redem */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstCntFailForc_MP /* 
   Description: R�initialisation du compteur echec redem forc�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCase1_MP /* 
   Description: Cause initiale echec redem facteur 1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCase2_MP /* 
   Description: Cause initiale echec redem facteur 2
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCase32_MP /* 
   Description: Cause initiale echec redem facteur 32
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCase4_MP /* 
   Description: Cause initiale echec redem facteur 4
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCdn_MP /* 
   Description: Condition nombre echec redem classique ou forc� pour demande de calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailRaw /* 
   Description: Echec de red�marrage d�tect� 
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bSlowRstrtCutReq /* 
   Description: Demande de coupure due � une demande de red�marrage trop longue
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bStuckEngStaAcv /* 
   Description: Signal "Risque de moteur bloqu� et d�marreur actif" apr�s traitement
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoPtUH_bEngCutOffReqRaw /*
   Description: Demande de coupure brute */;

#define COSTOPSTART_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "CoStopStart_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#endif/*_COSTOPSTART_008_CALIBRATIONS_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

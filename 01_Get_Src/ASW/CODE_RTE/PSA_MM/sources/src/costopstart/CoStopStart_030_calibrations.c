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
 ***  %name: CoStopStart_030_calibrations.c %
 *** 
 ***  %version: 12.0 %
 *** 
 ***  %date_modified: Tue Apr 23 16:22:35 2013 %
 *** 
 *** 
 ***  %derived_by: u169773 %
 ***  %release: CoStopStart/12.0 %
 ***  %full_filespec: CoStopStart_030_calibrations.c-12.0:csrc:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : TL_01460_10_03536
 *** TargetLink subsystem : TL_01460_10_03536/CoStopStart_030
 *** Codefile             : costopstart_030_calibrations.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2013-04-16 15:38:56
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
 *** Style definition file               : C:\dSPACE\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceCod
 ***                                       eSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** S0301                    TL_01460_10_03536/CoStopStart_030
 *** S0302                    CoStopStart_030/F01_Traiter_entrees
 *** S0303                    CoStopStart_030/F02_Autoriser_arret_par_sous_systeme_BV
 *** S0304                    CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV
 *** S0305                    CoStopStart_030/F01_Traiter_entrees/Traitement_booleen
 *** S0306                    CoStopStart_030/F01_Traiter_entrees/Traitement_booleen1
 *** S0307                    CoStopStart_030/F01_Traiter_entrees/Traitement_booleen2
 *** S0308                    CoStopStart_030/F01_Traiter_entrees/Traitement_booleen3
 *** S0309                    CoStopStart_030/F01_Traiter_entrees/Traitement_booleen4
 *** S03010                   CoStopStart_030/F01_Traiter_entrees/Traitement_booleen5
 *** S03011                   CoStopStart_030/F01_Traiter_entrees/Traitement_booleen6
 *** S03012                   CoStopStart_030/F02_Autoriser_arret_par_sous_systeme_BV/TurnOnDelay1
 *** S03013                   CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Au
 ***                          toriser_redemarrage_machine_electrique
 *** S03014                   CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_02_Au
 ***                          toriser_redemarrage_par_boite_vitesses
 *** S03015                   CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_03_De
 ***                          mander_redemarrage_par_boite_vitesse
 *** S03016                   CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_04_Au
 ***                          toriser_redemarrage_si_BVMP_MAP
 *** S03017                   CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_05_Ca
 ***                          lculer_changement_rapport_MAP_trop_long
 *** S03018                   CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_06_In
 ***                          former_si_levier_BVA_en_Drive
 *** S03019                   CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Au
 ***                          toriser_redemarrage_machine_electrique/HysPos1
 *** S03020                   CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_04_Au
 ***                          toriser_redemarrage_si_BVMP_MAP/TurnOffDelay
 *** S03021                   CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_04_Au
 ***                          toriser_redemarrage_si_BVMP_MAP/TurnOnDelay1
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _COSTOPSTART_030_CALIBRATIONS_C_
#define _COSTOPSTART_030_CALIBRATIONS_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "CoStopStart_030_calibrations.h"
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

#define COSTOPSTART_START_SEC_CALIB_8BIT
#include "CoStopStart_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_rCluPMaxRstrtHys_C = 5 /* 
   Description: Hyst�r�sis Position Embrayage Redem Trop Ferm�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 120 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_rCluPMaxRstrt_C = 15 /* 
   Description: Position Embrayage Redem Trop Ferm�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 120 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_rCluPMinAuthRstrt_C = 55 /* 
   Description: Seuil embrayage autorisation redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 100 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_stModAMTRstrtReq_C = 0 /* 
   Description: Traitement bool�en pour traiter signal logique demande de redem par BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_stModInhCluP_C = 0 /* 
   Description: Traitement bool�en pour traiter signal logique reconfiguration demandant d'ignorer l
   'embrayage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_stModInhNeut_C = 0 /* 
   Description: Traitement bool�en pour traiter signal logique reconfiguration demandant d'ignorer l
   e neutre
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_stModNeut_C = 0 /* 
   Description: Traitement bool�en pour traiter signal logique Point Mort
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_stModProtCluStopAuth_C = 0 /* 
   Description: Traitement bool�en pour traiter signal logique inhibition d'arr�t pour protection em
   brayage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_stModRstrtAuthTra_C = 0 /* 
   Description: Traitement bool�en pour traiter signal logique autorisation de redem par BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_stRstrtClas_C = 2 /* 
   Description: Mode pour traiter signal logique demande redem sur red�marrabilit�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_tiMAPRstrtAuth_C = 2 /* 0.02 */ /* 
   Description: Temps de maintient de l'autorisation changement de rapport MAP, lors de sa perte
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MonGB_tiVldOpDrvTraReq_C = 2 /* 0.02 */ /* 
   Description: Dur�e de validation de la Demande Ouverture CDT (pour BVMP)
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 0.1 */;

#define COSTOPSTART_STOP_SEC_CALIB_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_CALIB_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_BOOLEAN Boolean MonGB_bMAPAuthCutToutGc_C = 1 /* 
   Description: Autorisation de passage en coupure lors d'un changement de rapport MAP trop long
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_CALIB_BOOLEAN
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_INTERNAL_VAR_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bCoReqAMTRstrtReq /* 
   Description: Demande de redem moteur par sous-syst�me BVMP trait�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bCoReqAMTStopAuth /* 
   Description: Autorisation d'arr�t moteur par sous-syst�me BVMP trait�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bCutCaseLgGc_MP /* 
   Description: Le changement de rapport MAP est d�fini comme trop long
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bGc /* 
   Description: Changement de rapport pr�sent
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bInhCluPCoPtUH /* 
   Description: Reconfiguration inhibant la position Emb dans le calcul des autorisations de redem t
   rait�es
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bInhNeutCoPtUH /* 
   Description: Reconfiguration inhibant le Neutre dans le calcul des autorisations de redem trait�e
   s
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bMAP /* 
   Description: BVMP de type MAP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bMAPRstrtAuth_MP /* 
   Description: Valeur pour l'autorisation de redem MAP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bNeut /* 
   Description: Etat capteur Point Mort trait�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bNotGc_MP /* 
   Description: Pas de changement de rapport
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bProtManCluStopAuth /* 
   Description: Authorisation of engine stopping for clutch protection
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MonGB_bRstrtAuthTra /* 
   Description: Autorisation  de Red�marrage BV trait�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "CoStopStart_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INLINE FUNCTIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

#endif/*_COSTOPSTART_030_CALIBRATIONS_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

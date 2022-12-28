/**************************************************************************************************\
 *** 
 *** Simulink model       : MgtASECut_01460_10_02173_TL
 *** TargetLink subsystem : MgtASECut_01460_10_02173_TL/ASE_008
 *** Codefile             : ase_008_calibrations.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-05-20 11:10:08
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
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** S0081                    MgtASECut_01460_10_02173_TL/ASE_008
 *** S0082                    ASE_008/F01_Traitement_booleen
 *** S0083                    ASE_008/F02_Calcul_de_Tattente1_et_Tattente2
 *** S0084                    ASE_008/F03_Synthese_Dde_coupure_horsT1T2
 *** S0085                    ASE_008/F04_Synth_se_Dde_coupure_en_Off
 *** S0086                    ASE_008/F05_Synthese_Dde_coupure_en_Cale_et_Calage_ec
 *** S0087                    ASE_008/F06_Synthese_Dde_Coupure_en_Sortie_calage
 *** S0088                    ASE_008/F07_Synthese_Dde_coupure
 *** S0089                    ASE_008/F08_Dde_coupure_en_Coupure
 *** S00810                   ASE_008/F01_Traitement_booleen/Traitement_booleen
 *** S00811                   ASE_008/F01_Traitement_booleen/Traitement_booleen1
 *** S00812                   ASE_008/F01_Traitement_booleen/Traitement_booleen2
 *** S00813                   ASE_008/F01_Traitement_booleen/Traitement_booleen4
 *** S00814                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/BasculeRS1
 *** S00815                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/BasculeRS5
 *** S00816                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay
 *** S00817                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay1
 *** S00818                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/rising_edge1
 *** S00819                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/rising_edge7
 *** S00820                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay/BasculeRSspec
 ***                          ifique
 *** S00821                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay/DetectSat
 *** S00822                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay/Turnondelay_P
 ***                          art
 *** S00823                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay/rising_edge
 *** S00824                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay/rising_edge2
 *** S00825                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay1/BasculeRSspe
 ***                          cifique
 *** S00826                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay1/DetectSat
 *** S00827                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay1/Turnondelay_
 ***                          Part
 *** S00828                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay1/rising_edge
 *** S00829                   ASE_008/F02_Calcul_de_Tattente1_et_Tattente2/TurnOnDelay1/rising_edge2
 *** S00830                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay1
 *** S00831                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay2
 *** S00832                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay1/DetectSat
 *** S00833                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay1/F03_Synthese_Dd
 ***                          e_coupure_horsT1T2
 *** S00834                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay1/Turnondelay_Par
 ***                          t
 *** S00835                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay1/rising_edge
 *** S00836                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay1/rising_edge2
 *** S00837                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay2/DetectSat
 *** S00838                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay2/F03_Synthese_Dd
 ***                          e_coupure_horsT1T2
 *** S00839                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay2/Turnondelay_Par
 ***                          t
 *** S00840                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay2/rising_edge
 *** S00841                   ASE_008/F03_Synthese_Dde_coupure_horsT1T2/TurnOnDelay2/rising_edge2
 *** S00842                   ASE_008/F04_Synth_se_Dde_coupure_en_Off/TurnOnDelay2
 *** S00843                   ASE_008/F04_Synth_se_Dde_coupure_en_Off/TurnOnDelay2/DetectSat
 *** S00844                   ASE_008/F04_Synth_se_Dde_coupure_en_Off/TurnOnDelay2/F04_Synth_se_Dde_
 ***                          coupure_en_Off
 *** S00845                   ASE_008/F04_Synth_se_Dde_coupure_en_Off/TurnOnDelay2/Turnondelay_Part
 *** S00846                   ASE_008/F04_Synth_se_Dde_coupure_en_Off/TurnOnDelay2/rising_edge
 *** S00847                   ASE_008/F04_Synth_se_Dde_coupure_en_Off/TurnOnDelay2/rising_edge2
 *** S00848                   ASE_008/F05_Synthese_Dde_coupure_en_Cale_et_Calage_ec/TurnOnDelay1
 *** S00849                   ASE_008/F05_Synthese_Dde_coupure_en_Cale_et_Calage_ec/TurnOnDelay1/Det
 ***                          ectSat
 *** S00850                   ASE_008/F05_Synthese_Dde_coupure_en_Cale_et_Calage_ec/TurnOnDelay1/F05
 ***                          _Synthese_Dde_coupure_en_Cale_et_Calage_ec
 *** S00851                   ASE_008/F05_Synthese_Dde_coupure_en_Cale_et_Calage_ec/TurnOnDelay1/Tur
 ***                          nondelay_Part
 *** S00852                   ASE_008/F05_Synthese_Dde_coupure_en_Cale_et_Calage_ec/TurnOnDelay1/ris
 ***                          ing_edge
 *** S00853                   ASE_008/F05_Synthese_Dde_coupure_en_Cale_et_Calage_ec/TurnOnDelay1/ris
 ***                          ing_edge2
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _ASE_008_CALIBRATIONS_C_
#define _ASE_008_CALIBRATIONS_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "ASE_008_calibrations.h"
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

#define ASE_START_SEC_CALIB_16BIT
#include "ASE_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_16BIT: Mergeable Calib 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_MERGEABLE_CALIB_16BIT UInt16 MgtASECut_spdEngCutOffReq_C = 896 /* 7. */ /* 
   Unit       : km/h
   Description: Seuil de vitesse pour coupure SCAr
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
AR_MERGEABLE_CALIB_16BIT UInt16 MgtASECut_spdRstrtAuth_C = 384 /* 3. */ /* 
   Unit       : km/h
   Description: Seuil de vitesse pour red�marrage de classe 3
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 50 */;
AR_MERGEABLE_CALIB_16BIT UInt16 MgtASECut_tiDlyWait1_C = 12000 /* 120. */ /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e en �tat Cal� ou Cal
   age en cours sur maintien d'une demande de red�marrage automatique de classe 1 (Tattente1)
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 180 */;
AR_MERGEABLE_CALIB_16BIT UInt16 MgtASECut_tiDlyWait2_C = 300 /* 3. */ /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e en �tat Cal� ou Cal
   age en cours sur maintien d'une demande de red�marrage automatique de classe 2 (Tattente2)
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;

#define ASE_STOP_SEC_CALIB_16BIT
#include "ASE_MemMap.h"

#define ASE_START_SEC_CALIB_8BIT
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_8BIT UInt8 MgtASECut_stModAcvCutCoPtUH_C = 0 /* 
   Description: Traitement bool�en de la demande de coupure si moteur en stop (FRM type 3)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MgtASECut_stModRstrtMchAuth_C = 0 /* 
   Description: Traitement bool�en de l'autorisation boite de vitesse pour le pilotage MEL en red�ma
   rrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MgtASECut_tiDlyCutReq1_C = 50 /* 0.5 */ /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure par Sous Ensemble Electro Moteu
   r ou V�hicule est valid�e (Tmax1)
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MgtASECut_tiDlyCutReq2_C = 50 /* 0.5 */ /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sans l'autorisation
    de red�marrage Chaine de Traction (Tmax2)
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
AR_MERGEABLE_CALIB_8BIT UInt8 MgtASECut_tiDlyCutReqIni_C = 2 /* 0.02 */ /* 
   Unit       : s
   Description: Temporisation pour initialisation de la demande de coupure en Off
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 0.1 */;

#define ASE_STOP_SEC_CALIB_8BIT
#include "ASE_MemMap.h"

#define ASE_START_SEC_CALIB_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_BOOLEAN Boolean MgtASECut_bAcvHiSpdEngCutReq_C = 1 /* 
   Description: Activation de la strat�gie de demande de coupure SCAr sur vitesse haute
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean MgtASECut_bElMecIntrRstrt_C = 1 /* 
   Description: Gestion Multishoot Sous Ensemble Electro Moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define ASE_STOP_SEC_CALIB_BOOLEAN
#include "ASE_MemMap.h"

#define ASE_START_SEC_INTERNAL_VAR_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bAcvCutCoPtASE /*
   Description: Reconfiguration SCA type 3 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bAcvCutCoPtUH /*
   Description: Reconfiguration type 3 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bDrvTraOp /*
   Description: Etat CDT (Autorisation de red�marrage par sous-syst�me CdT) */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngASEHiReq_MP /*
   Description: Demande de red�marrage de classe 3 ou 4 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutOffReqASE /*
   Description: Demande coupure en Etat GMP SCA en Sortie calage */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutOffReqCutIp /*
   Description: Demande coupure en Etat GMP SCA en Coupure en cours */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutOffReqOff /*
   Description: Demande coupure en Etat GMP SCA Off */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutOffReqStall /*
   Description: Demande coupure en Etat GMP SCA Cal� et Calage ec */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutOffReqSynt /*
   Description: Synth�se des demandes de Coupure hors Tempo Tattente1 et 2 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutReqASE31_MP /*
   Description: Temporisation d'attente 1 ou 2 �coul�e OU pas d'autorisation d'entr�e en SCAr */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutReqASE32_MP /*
   Description: Pas d'autorisation de red�marage moteur OU temporisation de red�marrage manqu� �coul
   �e OU pr�sence d'une demande de red�marrage de classe 3 ou 4 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutReqASE3_MP /*
   Description: 3�me condition de demande de coupure */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutReqOff_MP /*
   Description: Activation demande coupure en Etat GMP SCA Off */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bEngCutReqStall_MP /*
   Description: Activation demande coupure en Etat GMP SCA Cal� et Calage en cours */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bRstrtMchAuth /*
   Description: Autorisation boite de vitesse pour le pilotage MEL en red�marrage */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bWaitTmp1 /*
   Description: Temporisation d'attente 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bWaitTmp1Set_MP /*
   Description: Condition de lancement de la temporisation d'attente 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bWaitTmp1_MP /*
   Description: Lancement de la temporisation d'attente 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bWaitTmp2 /*
   Description: Temporisation d'attente 2 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bWaitTmp2Set_MP /*
   Description: Condition de lancement de la temporisation d'attente 2 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean MgtASECut_bWaitTmp2_MP /*
   Description: Lancement de la temporisation d'attente 2 */;

#define ASE_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "ASE_MemMap.h"

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

#endif/*_ASE_008_CALIBRATIONS_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

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
 ***  %name: CoStopStart_008_calibrations.c %
 *** 
 ***  %version: 11.5 %
 *** 
 ***  %date_modified: Tue Jun  5 11:25:25 2012 %
 *** 
 *** 
 ***  %derived_by: u261238 %
 ***  %release: CoStopStart/11.0 %
 ***  %full_filespec: CoStopStart_008_calibrations.c-11.5:csrc:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : TL_01460_10_03525
 *** TargetLink subsystem : TL_01460_10_03525/CoStopStart_008
 *** Codefile             : costopstart_008_calibrations.c
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
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** S0081                    TL_01460_10_03525/CoStopStart_008
 *** S0082                    CoStopStart_008/F01_Informer_etat_GMP_STT
 *** S0083                    CoStopStart_008/F02_Traiter_entrees
 *** S0084                    CoStopStart_008/F03_Demander_coupure_par_redemarrage_automatique
 *** S0085                    CoStopStart_008/F04_Demander_coupure_par_CdT_fermee
 *** S0086                    CoStopStart_008/F05_Demander_coupure_par_redemarrage_trop_long
 *** S0087                    CoStopStart_008/F06_Demander_coupure_par_reconfiguration_type_3
 *** S0088                    CoStopStart_008/F07_Demander_coupure_par_Interdiction_Redem_Emove
 *** S0089                    CoStopStart_008/F08_Demander_coupure_par_changement_rapport_MAP_trop_l
 ***                          ong
 *** S00810                   CoStopStart_008/F09_Demander_coupure_par_SEEM_ou_Habitacle
 *** S00811                   CoStopStart_008/F10_Demander_coupure_par_vitesse_haute
 *** S00812                   CoStopStart_008/F11_Demander_coupure_par_cause_reservee
 *** S00813                   CoStopStart_008/F12_Construire_consigne_de_coupure_pour_Automate
 *** S00814                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage
 *** S00815                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge
 *** S00816                   CoStopStart_008/F15_Faire_diagnostics_pour_coupure
 *** S00817                   CoStopStart_008/F16_Demander_coupure_par_glissement_courroie
 *** S00818                   CoStopStart_008/F17_Demander_coupure_par_redem_force_regime_non_compat
 ***                          ible
 *** S00819                   CoStopStart_008/F02_Traiter_entrees/Traitement_booleen
 *** S00820                   CoStopStart_008/F02_Traiter_entrees/Traitement_booleen1
 *** S00821                   CoStopStart_008/F02_Traiter_entrees/Traitement_booleen2
 *** S00822                   CoStopStart_008/F02_Traiter_entrees/Traitement_booleen3
 *** S00823                   CoStopStart_008/F03_Demander_coupure_par_redemarrage_automatique/TurnO
 ***                          nDelay
 *** S00824                   CoStopStart_008/F03_Demander_coupure_par_redemarrage_automatique/TurnO
 ***                          nDelay1
 *** S00825                   CoStopStart_008/F03_Demander_coupure_par_redemarrage_automatique/TurnO
 ***                          nDelay2
 *** S00826                   CoStopStart_008/F03_Demander_coupure_par_redemarrage_automatique/TurnO
 ***                          nDelay3
 *** S00827                   CoStopStart_008/F03_Demander_coupure_par_redemarrage_automatique/TurnO
 ***                          nDelay4
 *** S00828                   CoStopStart_008/F04_Demander_coupure_par_CdT_fermee/TurnOffDelay1
 *** S00829                   CoStopStart_008/F04_Demander_coupure_par_CdT_fermee/TurnOnDelay
 *** S00830                   CoStopStart_008/F05_Demander_coupure_par_redemarrage_trop_long/TurnOnD
 ***                          elay1
 *** S00831                   CoStopStart_008/F06_Demander_coupure_par_reconfiguration_type_3/TurnOf
 ***                          fDelay1
 *** S00832                   CoStopStart_008/F07_Demander_coupure_par_Interdiction_Redem_Emove/Turn
 ***                          OffDelay1
 *** S00833                   CoStopStart_008/F07_Demander_coupure_par_Interdiction_Redem_Emove/Turn
 ***                          OnDelay
 *** S00834                   CoStopStart_008/F08_Demander_coupure_par_changement_rapport_MAP_trop_l
 ***                          ong/TurnOffDelay1
 *** S00835                   CoStopStart_008/F08_Demander_coupure_par_changement_rapport_MAP_trop_l
 ***                          ong/TurnOnDelay
 *** S00836                   CoStopStart_008/F09_Demander_coupure_par_SEEM_ou_Habitacle/TurnOffDela
 ***                          y1
 *** S00837                   CoStopStart_008/F09_Demander_coupure_par_SEEM_ou_Habitacle/TurnOffDela
 ***                          y2
 *** S00838                   CoStopStart_008/F09_Demander_coupure_par_SEEM_ou_Habitacle/TurnOnDelay
 *** S00839                   CoStopStart_008/F09_Demander_coupure_par_SEEM_ou_Habitacle/TurnOnDelay
 ***                          1
 *** S00840                   CoStopStart_008/F10_Demander_coupure_par_vitesse_haute/TurnOffDelay1
 *** S00841                   CoStopStart_008/F11_Demander_coupure_par_cause_reservee/TurnOffDelay1
 *** S00842                   CoStopStart_008/F12_Construire_consigne_de_coupure_pour_Automate/CoSto
 ***                          pStart_001
 *** S00843                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage/F13_01_Compter_echecs_redemarrage_classiques
 *** S00844                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage/F13_02_Compter_echecs_redemarrage_forces
 *** S00845                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage/F13_03_Demander_le_calage
 *** S00846                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 *** rrage/F13_01_Compter_echecs_redemarrage_classiques/F13_01_01_Calculer_
 ***                          transitions
 *** S00847                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 *** rrage/F13_01_Compter_echecs_redemarrage_classiques/F13_01_02_Compter_e
 ***                          checs_redemarrage_classiques_successifs
 *** S00848                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 *** rrage/F13_01_Compter_echecs_redemarrage_classiques/F13_01_03_Traiter_s
 ***                          ortie
 *** S00849                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 *** rrage/F13_01_Compter_echecs_redemarrage_classiques/F13_01_01_Calculer_
 ***                          transitions/TurnOnDelay
 *** S00850                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 *** rrage/F13_01_Compter_echecs_redemarrage_classiques/F13_01_01_Calculer_
 ***                          transitions/rising_edge
 *** S00851                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 *** rrage/F13_01_Compter_echecs_redemarrage_classiques/F13_01_01_Calculer_
 ***                          transitions/rising_edge1
 *** S00852                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 *** rrage/F13_01_Compter_echecs_redemarrage_classiques/F13_01_03_Traiter_s
 ***                          ortie/rising_edge
 *** S00853                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage/F13_02_Compter_echecs_redemarrage_forces/Counter1
 *** S00854                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage/F13_02_Compter_echecs_redemarrage_forces/rising_edge
 *** S00855                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage/F13_03_Demander_le_calage/BasculeRS
 *** S00856                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage/F13_03_Demander_le_calage/TurnOffDelay1
 *** S00857                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage/F13_03_Demander_le_calage/falling_edge
 *** S00858                   CoStopStart_008/F13_Demander_entree_en_calage_et_compter_echecs_redema
 ***                          rrage/F13_03_Demander_le_calage/rising_edge3
 *** S00859                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/BasculeRS
 *** S00860                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/BasculeRS1
 *** S00861                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/BasculeRS2
 *** S00862                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/BasculeRS3
 *** S00863                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/BasculeRS4
 *** S00864                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/BasculeRS5
 *** S00865                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/Mem
 *** S00866                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/Mem1
 *** S00867                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/Mem2
 *** S00868                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/TurnOffDelay1
 *** S00869                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/rising_edge
 *** S00870                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/rising_edge1
 *** S00871                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/rising_edge2
 *** S00872                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/rising_edge3
 *** S00873                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/rising_edge4
 *** S00874                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/rising_edge5
 *** S00875                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/Mem/Mem_Part
 *** S00876                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/Mem1/Mem_Part
 *** S00877                   CoStopStart_008/F14_Enregistrer_les_3_dernieres_causes_echec_redemarra
 ***                          ge/Mem2/Mem_Part
 *** S00878                   CoStopStart_008/F15_Faire_diagnostics_pour_coupure/TmrRst1
 *** S00879                   CoStopStart_008/F15_Faire_diagnostics_pour_coupure/rising_edge
 *** S00880                   CoStopStart_008/F16_Demander_coupure_par_glissement_courroie/TurnOffDe
 ***                          lay1
 *** S00881                   CoStopStart_008/F17_Demander_coupure_par_redem_force_regime_non_compat
 ***                          ible/TurnOffDelay1
 *** S00882                   CoStopStart_008/F17_Demander_coupure_par_redem_force_regime_non_compat
 ***                          ible/TurnOnDelay
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** C0080     TL_01460_10_03525                                      
 *** C0081     CoStopStart_008/F13_Demander_entree_en_calage_et_compt
 *** er_echecs_redemarrage/F13_01_Compter_echecs_redemarrag
 *** e_classiques/F13_01_02_Compter_echecs_redemarrage_clas
 *** siques_successifs/F13_01_02_01_Compteur_de_Redem_succe
 ***           ssifs_loupes                                           
 *** C0082     CoStopStart_008/F13_Demander_entree_en_calage_et_compt
 *** er_echecs_redemarrage/F13_01_Compter_echecs_redemarrag
 *** e_classiques/F13_01_02_Compter_echecs_redemarrage_clas
 *** siques_successifs/F13_01_02_01_Compteur_de_Redem_succe
 ***           ssifs_loupes.Compteur_Rdm_successif                    
 *** C0083     CoStopStart_008/F13_Demander_entree_en_calage_et_compt
 *** er_echecs_redemarrage/F13_01_Compter_echecs_redemarrag
 *** e_classiques/F13_01_02_Compter_echecs_redemarrage_clas
 *** siques_successifs/F13_01_02_01_Compteur_de_Redem_succe
 *** ssifs_loupes.Compteur_Rdm_successif.Renitialisation_du
 ***           _compteur                                              
 *** C0084     CoStopStart_008/F13_Demander_entree_en_calage_et_compt
 *** er_echecs_redemarrage/F13_01_Compter_echecs_redemarrag
 *** e_classiques/F13_01_02_Compter_echecs_redemarrage_clas
 *** siques_successifs/F13_01_02_01_Compteur_de_Redem_succe
 ***           ssifs_loupes.Compteur_Rdm_successif.Attente_Activation 
 *** C0085     CoStopStart_008/F13_Demander_entree_en_calage_et_compt
 *** er_echecs_redemarrage/F13_01_Compter_echecs_redemarrag
 *** e_classiques/F13_01_02_Compter_echecs_redemarrage_clas
 *** siques_successifs/F13_01_02_01_Compteur_de_Redem_succe
 *** ssifs_loupes.Compteur_Rdm_successif.Annulation_Redem_A
 ***           nticipe                                                
 *** C0086     CoStopStart_008/F13_Demander_entree_en_calage_et_compt
 *** er_echecs_redemarrage/F13_01_Compter_echecs_redemarrag
 *** e_classiques/F13_01_02_Compter_echecs_redemarrage_clas
 *** siques_successifs/F13_01_02_01_Compteur_de_Redem_succe
 ***           ssifs_loupes.Compteur_Rdm_successif.Attente            
 *** C0087     CoStopStart_008/F13_Demander_entree_en_calage_et_compt
 *** er_echecs_redemarrage/F13_01_Compter_echecs_redemarrag
 *** e_classiques/F13_01_02_Compter_echecs_redemarrage_clas
 *** siques_successifs/F13_01_02_01_Compteur_de_Redem_succe
 *** ssifs_loupes.Compteur_Rdm_successif.Compteur_Echec_Int
 ***           erruption_SEEM                                         
 *** C0088     CoStopStart_008/F13_Demander_entree_en_calage_et_compt
 *** er_echecs_redemarrage/F13_01_Compter_echecs_redemarrag
 *** e_classiques/F13_01_02_Compter_echecs_redemarrage_clas
 *** siques_successifs/F13_01_02_01_Compteur_de_Redem_succe
 *** ssifs_loupes.Compteur_Rdm_successif.Compteur_Echec_Red
 ***           em_Norm                                                
 *** C0089     CoStopStart_008/F13_Demander_entree_en_calage_et_compt
 *** er_echecs_redemarrage/F13_01_Compter_echecs_redemarrag
 *** e_classiques/F13_01_02_Compter_echecs_redemarrage_clas
 *** siques_successifs/F13_01_02_01_Compteur_de_Redem_succe
 *** ssifs_loupes.Compteur_Rdm_successif.Compteur_Echec_Red
 ***           em_Ant                                                 
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _COSTOPSTART_008_CALIBRATIONS_C_
#define _COSTOPSTART_008_CALIBRATIONS_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "CoStopStart_008_calibrations.h"
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
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_nMinEngCmb_C = 300 /* 
   Unit       : RPM
   Description: R�gime minimal pour avoir des combustions moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1000 */;
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_spdMinCut_C = 300 /* 
   Unit       : km/h
   Description: Seuil de vitesse pour demander la coupure en stop
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 300 */;
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiElMecCutReq_C = 5 /* 0.05 */ /* 
   Unit       : s
   Description: Temps de validation dde coupure SEEM
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas1_C = 1200 /* 120. */ /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 1
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 120 */;
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas2_C = 30 /* 3. */ /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 2
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 30 */;
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas3_C = 5 /* 0.5 */ /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 3
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 30 */;
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas4_C = 5 /* 0.5 */ /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 4
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 30 */;
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiEngCutRstrtReqClas5_C = 2 /* 0.2 */ /* 
   Unit       : s
   Description: Temps minimum � partir duquel une demande de coupure est valid�e sur maintien d'une 
   demande de red�marrage automatique de classe 5
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 30 */;
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiMinRstrtFail_C = 80 /* 4. */ /* 
   Unit       : s
   Description: Temps minimum pendant lequel l'�tat GMP UH peut rester � red�marrage
   LSB: 0.05 OFF:  0 MIN/MAX:  0 .. 30 */;
AR_MERGEABLE_CALIB_16BIT UInt16 CoCut_tiVehCutReq_C = 5 /* 0.05 */ /* 
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
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_ctMinRstrtFailForc_C = 3 /* 
   Description: Nombre de red�marrage rat�s forc� successifs
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 10 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_ctMinRstrtFail_C = 3 /* 
   Description: Nombre autoris�s de red�marrage rat�s successifs
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_stModStuckEngStaAcv_C = 0 /* 
   Description: Mode pour traiter le signal logique "Risque de moteur bloqu� et d�marreur actif"
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiDgoCutReq_C = 1 /* 0.1 */ /* 
   Unit       : s
   Description: Temps de maintien du flag Enregistrement d�faut coupure
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiRstrtAuthCutReq_C = 10 /* 1. */ /* 
   Unit       : s
   Description: Temps de confirmation en stop de l'absence de l'autorisation de red�marrage, au bout
    duquel la coupure est demand�e.
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 5 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiSpySTT_C = 4 /* 0.2 */ /* 
   Unit       : s
   Description: Temps de maintien des causes de coupure pour enregistrement par SpySTT
   LSB: 0.05 OFF:  0 MIN/MAX:  0 .. 2 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiStuckEngStaAcv_C = 20 /* 0.2 */ /* 
   Unit       : s
   Description: Temps de maintien du flux "Risque de moteur bloqu� et d�marreur actif"
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiTraClsAMT_C = 10 /* 1. */ /* 
   Unit       : s
   Description: Temps de confirmation en stop de la fermeture de la CdT, au bout duquel la coupure e
   st demand�e. (BVMP uniquement)
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 5 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiWaitElMecRstrtFail_C = 30 /* 0.3 */ /* 
   Unit       : s
   Description: Temps d'attente mini pour un nouvel �chec de redem suite � une interruption de redem
    sur rotor bloqu�
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiWaitEngStat_C = 20 /* 0.2 */ /* 
   Unit       : s
   Description: Temps de v�rification du r�gime moteur nul
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiWaitRstrtFail_C = 30 /* 0.3 */ /* 
   Unit       : s
   Description: Temps d'attente mini pour un nouvel �chec de redem suite � une interruption de redem
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoCut_tiWaitRstrtForc_C = 4 /* 0.2 */ /* 
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
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvCntElMecIntrRstrt_C = 0 /* 
   Description: Activation du compteur d'echec de redem sur rotor bloqu�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvCutCaseDgoBlt_C = 0 /* 
   Description: Activation de la demande de coupure par glissement courroie
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvMemStallReq_C = 1 /* 
   Description: M�morisation de la demande d'entr�e en calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvNormRstrt_C = 1 /* 
   Description: For�age du red�marrage � Normal
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvRstrtAntCncl_C = 0 /* 
   Description: Activation de l'�tat "annulation de red�marrage anticip�"
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvRstrtAntFail_C = 1 /* 
   Description: Prise en compte de l'annulation de red�marrage anticip� comme un echec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvStopPwt_C = 0 /* 
   Description: Prise en compte de l'Etat GMP Arr�t� comme un �chec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bAcvWaitCutPwtStall_C = 0 /* 
   Description: Prise en compte de l'Etat GMP Attente_coupure dans le calcul de la demande d'entr�e 
   en calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bInhPwt_C = 0 /* 
   Description: Non prise en compte de l'�tat GMP suite � un �chec sur interruption SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bNotASECf_C = 0 /* 
   Description: Flux de config absence SCA
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoCut_bStraStuckEng_C = 1 /* 
   Description: Choix de strat�gie pour l'�chec de redem sur blocage moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_CALIB_BOOLEAN
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_CARTO_16BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_16BIT: Mergeable Carto 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_MERGEABLE_CARTO_16BIT UInt16 CoCut_nEngTiWaitRstrtAcv_A[5] = 
{
   /*[0..4]*/ 0, 50, 150, 300, 1000
   /* 0., 50., 150., 300., 1000. */
} /* 
   Unit       : RPM
   Description: Points d'appuis en r�gime moteur de la cartographie du temps de masquage d'�chec de 
   red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1000 */;
AR_MERGEABLE_CARTO_16BIT UInt16 CoCut_tiWaitRstrtAcv_T[5] = 
{
   /*[0..4]*/ 20, 20, 25, 30, 30
   /* 0.2, 0.2, 0.25, 0.3, 0.3 */
} /* 
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
AR_INTERNAL_VAR_DISP_16BIT UInt16 CoCut_tiWaitRstrtAcv /* 
   Unit       : s
   Description: Valeur du temps de masquage d'�chec de red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_INTERNAL_VAR_DISP_16BIT UInt16 CoCut_tiWaitRstrtAcvMem /* 
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
AR_INTERNAL_VAR_DISP_32BIT UInt32 CoCut_tiTmp /* 
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
AR_INTERNAL_VAR_DISP_8BIT UInt8 CoCut_noPhaRstrtFail /* 
   Description: Phase en cours dans la d�tection d'�chec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 6 */;
AR_INTERNAL_VAR_DISP_8BIT UInt8 CoCut_noRstrtFailCaseRaw_MP /* 
   Description: Pour APV, cause d'echec de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 63 */;
AR_INTERNAL_VAR_DISP_8BIT UInt8 CoCut_stPwt /* 
   Description: Etat GMP UH
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;

#define COSTOPSTART_STOP_SEC_INTERNAL_VAR_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_INTERNAL_VAR_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bAcvCutCoPtUH /* 
   Description: Dmd coupure trait�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bAcvCutTotCoPtUH /* 
   Description: Dmd coupure totale trait�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bCnclRStrtFailCase_MP /* 
   Description: Cause initiale echec redem facteur 16 (echec annulation redem anticip�)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bCutCaseElMecRaw_MP /* 
   Description: Demande coupure brute par SEEM avant validation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bCutCaseRes /* 
   Description: Demande de coupure par cause r�serv�e (actuellement bloqu�e � 0)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bCutCaseVehRaw_MP /* 
   Description: Demande coupure brute par v�hicule avant validation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bElMecIntrRstrtReq /* 
   Description: Demande d'incr�mentation du compteur d'echec de red�marrage sur interruption de red�
   marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bElMecRstrtFailCase_MP /* 
   Description: Cause initiale interruption par  organe de red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bEngCmb_MP /* 
   Description: Moteur capable de r�aliser des combustions
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bEngStat_MP /* 
   Description: R�gime moteur nul v�rifi�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bInhspdVehCoPtUH /* 
   Description: Inhibition vitesse v�hicule trait�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bNormRstrt /* 
   Description: Condition normale de red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bPwtRstrt /* 
   Description: Etat GMP �gal � Red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bPwtStop /* 
   Description: Etat GMP Stop
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRiseRstrtStPwt /*
   Description: Passage en Etat GMP Redem */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstCntFailForc_MP /* 
   Description: R�initialisation du compteur echec redem forc�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCase1_MP /* 
   Description: Cause initiale echec redem facteur 1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCase2_MP /* 
   Description: Cause initiale echec redem facteur 2
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCase32_MP /* 
   Description: Cause initiale echec redem facteur 32
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCase4_MP /* 
   Description: Cause initiale echec redem facteur 4
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailCdn_MP /* 
   Description: Condition nombre echec redem classique ou forc� pour demande de calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bRstrtFailRaw /* 
   Description: Echec de red�marrage d�tect� 
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bSlowRstrtCutReq /* 
   Description: Demande de coupure due � une demande de red�marrage trop longue
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoCut_bStuckEngStaAcv /* 
   Description: Signal "Risque de moteur bloqu� et d�marreur actif" apr�s traitement
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoPtUH_bEngCutOffReqRaw /*
   Description: Demande de coupure brute */;

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

#endif/*_COSTOPSTART_008_CALIBRATIONS_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
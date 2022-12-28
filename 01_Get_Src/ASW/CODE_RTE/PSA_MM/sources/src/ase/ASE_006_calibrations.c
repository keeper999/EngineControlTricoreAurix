/**************************************************************************************************\
 *** 
 *** Simulink model       : CoASEPwt_01460_10_02172_TL
 *** TargetLink subsystem : CoASEPwt_01460_10_02172_TL/ASE_006
 *** Codefile             : ASE_006_calibrations.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2010-12-14 14:29:36
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
 *** Extended variable sharing           : enabled
 *** Style definition file               : C:\dSPACE\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceCod
 ***                                       eSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** S0061                    CoASEPwt_01460_10_02172_TL/ASE_006
 *** S0062                    ASE_006/Description
 *** S0063                    ASE_006/F01_Traitement_booleen
 *** S0064                    ASE_006/F02_Calcul_Transitions_Etat_GMP_SCAr
 *** S0065                    ASE_006/F03_Calcul_Etats_GMP
 *** S0066                    ASE_006/Description/EmptySubsystem
 *** S0067                    ASE_006/F01_Traitement_booleen/Description
 *** S0068                    ASE_006/F01_Traitement_booleen/Traitement_booleen
 *** S0069                    ASE_006/F01_Traitement_booleen/Traitement_booleen1
 *** S00610                   ASE_006/F01_Traitement_booleen/Description/EmptySubsystem
 *** S00611                   ASE_006/F02_Calcul_Transitions_Etat_GMP_SCAr/Description
 *** S00612                   ASE_006/F02_Calcul_Transitions_Etat_GMP_SCAr/Description/EmptySubsyste
 ***                          m
 *** S00613                   ASE_006/F03_Calcul_Etats_GMP/Description
 *** S00614                   ASE_006/F03_Calcul_Etats_GMP/Description/EmptySubsystem
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** C0060     CoASEPwt_01460_10_02172_TL                             
 *** C0061     ASE_006/F03_Calcul_Etats_GMP/F03_01_Automate_Etats_GMP 
 *** C0062     ASE_006/F03_Calcul_Etats_GMP/F03_01_Automate_Etats_GMP
 ***           .Off                                                   
 *** C0063     ASE_006/F03_Calcul_Etats_GMP/F03_01_Automate_Etats_GMP
 ***           .On                                                    
 *** C0064     ASE_006/F03_Calcul_Etats_GMP/F03_01_Automate_Etats_GMP
 ***           .On.Sortie_calage                                      
 *** C0065     ASE_006/F03_Calcul_Etats_GMP/F03_01_Automate_Etats_GMP
 ***           .On.Calage_en_cours                                    
 *** C0066     ASE_006/F03_Calcul_Etats_GMP/F03_01_Automate_Etats_GMP
 ***           .On.Cale                                               
 *** C0067     ASE_006/F03_Calcul_Etats_GMP/F03_01_Automate_Etats_GMP
 ***           .Coupure_en_cours                                      
 *** 
 *** TargetLink version      : 2.2.1 from 21-Jun-2007
 *** Code generator version  : Build Id 2.2.1.9 from 2007-06-21 12:36:51
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/ 

#ifndef _ASE_006_CALIBRATIONS_C_
#define _ASE_006_CALIBRATIONS_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "ASE_006_calibrations.h"
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

#define ASE_START_SEC_CALIB_8BIT
#include "ASE_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_8BIT UInt8 CoASEPwt_stModAcvRun_C = 0 /* 
   Description: Traitement bool�en de For�age Etat GMP STT tournant
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoASEPwt_stModDetNNull_C = 0 /* 
   Description: Traitement bool�en de la confirmation du r�gime moteur nul
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;

#define ASE_STOP_SEC_CALIB_8BIT
#include "ASE_MemMap.h"

#define ASE_START_SEC_CALIB_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranASEToStallIp_C = 1 /* 
   Description: Activation de la Transition Sortie Calage vers Calage en cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranOffToStallIp_C = 1 /* 
   Description: Activation de la Transition Off vers Calage en cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranOnToCutIp_C = 1 /* 
   Description: Activation de la Transition On vers Coupure en cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranStallIpToASE_C = 1 /* 
   Description: Activation de la Transition Calage en cours vers Sortie Calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranStallIpToStall_C = 1 /* 
   Description: Activation de la Transition Calage en cours vers Cal�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranStallToASE_C = 1 /* 
   Description: Activation de la Transition Cal� vers Sortie Calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define ASE_STOP_SEC_CALIB_BOOLEAN
#include "ASE_MemMap.h"

#define ASE_START_SEC_INTERNAL_VAR_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bASEToStallIpTran /*
   Description: Transition Etat GMP SCA de Sortie calage vers Calage en cours */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bAcvRunCoPtASE /*
   Description: Reconfiguration for�ant le mode alternateur */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bDetNNull /*
   Description: R�gime moteur nul confirm� */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bOffToStallIpTran /*
   Description: Transition Etat GMP SCA de Off vers Calage en cours */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bOnToCutIpTran /*
   Description: Transition Etat GMP SCA de On vers Coupure en cours  */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bStallIpToASETran /*
   Description: Transition Etat GMP SCA de Calage en cours vers Sortie calage */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bStallIpToStallTran /*
   Description: Transition Etat GMP SCA de Calage en cours vers Cal� */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bStallToASETran /*
   Description: Transition Etat GMP SCA de Cal� vers Sortie calage */;

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

#endif/*_ASE_006_CALIBRATIONS_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
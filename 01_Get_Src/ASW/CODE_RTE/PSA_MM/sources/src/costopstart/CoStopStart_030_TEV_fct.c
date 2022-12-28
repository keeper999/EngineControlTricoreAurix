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
 ***  %name: CoStopStart_030_TEV_fct.c %
 *** 
 ***  %version: 12.0 %
 *** 
 ***  %date_modified: Tue Apr 23 16:22:35 2013 %
 *** 
 *** 
 ***  %derived_by: u169773 %
 ***  %release: CoStopStart/12.0 %
 ***  %full_filespec: CoStopStart_030_TEV_fct.c-12.0:csrc:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : TL_01460_10_03536
 *** TargetLink subsystem : TL_01460_10_03536/CoStopStart_030
 *** Codefile             : costopstart_030_tev_fct.c
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

#ifndef _COSTOPSTART_030_TEV_FCT_C_
#define _COSTOPSTART_030_TEV_FCT_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "CoStopStart_030_TEV_fct.h"
#include "CoStopStart_030_calibrations.h"
#include "CoStopStart_calibrations.h"
#include "PSA_TL_LibC.h"
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
AR_IF_GLOBAL_16BIT UInt16 CoStopStart_030_Ext_rCluPHiFreq_in /* 
   Description: Provision pour diversit� besoin sur mesure physique capteur embrayage propostionnel.
    valeur de remlpacement : 0. cas ou STTx BVA/BVMP. voir CSMT_CGMT_08_0941. valeur de remlpacement
    : 0. cas ou STTx BVA/BVMP. voir CSMT_CGMT_08_0941
   LSB: 2^-4 OFF:  0 MIN/MAX:  0 .. 100 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_16BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_IF_GLOBAL_8BIT UInt8 CoStopStart_030_CoReqAMT_stEngStopAuth_in /* 
   Description: Autorisation d'arr�t moteur par sous-syst�me BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
AR_IF_GLOBAL_8BIT UInt8 CoStopStart_030_Ext_posnGBxLev_in /* 
   Description: Position levier s�lection BV
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 13 */;
AR_IF_GLOBAL_8BIT UInt8 CoStopStart_030_Ext_stGBxCf_in /* 
   Description: Type de boite
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
AR_IF_GLOBAL_8BIT UInt8 CoStopStart_030_Ext_stTraTypCf_in /* 
   Description: Type de boite automatique ou pilot�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7 */;
AR_IF_GLOBAL_8BIT SInt8 CoStopStart_030_Tra_noEgdGear_in /* 
   Description: Rapport de boite de vitesse engag�
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 9 */;
AR_IF_GLOBAL_8BIT SInt8 CoStopStart_030_Tra_noTarGear_in /* 
   Description: Rapport cible
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 9 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT_IRV: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
UInt8 MonGB_stRstrtReq /* 
   Description: Niveau de priorit� de demande de red�marrage automatique BV Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bDrvTraOp_out /* 
   Description: Pour APV. Etat CDT
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean CoPtUH_bRStrtMchAuth_out /* 
   Description: Autorisation bo�te de vitesse pour le pilotage MEL en red�marrage Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_030_CoPtUH_bOpDrvTraReq_in /* 
   Description: Demande Ouverture CDT. pour BVMP Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_030_CoPt_bInhEngStopProtManClu_in /* 
   Description: Inhibition of engine stopping for clutch protection
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_030_CoReqAMT_bEngRStrtReq_in /* 
   Description: Demande de redem moteur par sous-syst�me BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_030_Ext_bNeut_in /* 
   Description: Etat capteur Point Mort
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_030_Ext_bRStrtAuthTra_in /* 
   Description: Autorisation  de Red�marrage BV
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_030_FRM_bInhCluPCoPtUH_in /* 
   Description: Reconfiguration inhibant la position Emb dans le calcul des autorisations de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_030_FRM_bInhNeutCoPtUH_in /* 
   Description: Reconfiguration inhibant le Neutre dans le calcul des autorisation de redem
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN_IRV: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
Boolean MonGB_bCutCaseLgGc /* 
   Description: Changement de rapport MAP qui pourrait �tre trop long Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean MonGB_bMAPRstrtAuth /* 
   Description: Autorisation de red�marrage sp�cifique MAP Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean MonGB_bRstrtAuth /* 
   Description: Autorisation de redemarrage par la boite de vitesse Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean MonGB_bRstrtTypATReq /* 
   Description: Position levier BVA en Drive Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean MonGB_bStopAuth /* 
   Description: Autorisation d'arret moteur par la boite de vitesse Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_VAR_32BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   UserSLStaticGlobalInit: SLStaticGlobalInit = { AR_SEC_VAR_BOOLEAN AR_SEC_UNSPECIFIED AR_SEC_VAR_8
   BIT AR_SEC_VAR_16BIT AR_SEC_VAR_32BIT AR_SEC_UNSPECIFIED } | Width: 32
\******************************************************************************/
static UInt32 S03012_TurnOnDelay_fct_time;
static UInt32 S03020_TurnOffDelay_fct_time;
static UInt32 S03021_TurnOnDelay_fct_time;

#define COSTOPSTART_STOP_SEC_VAR_32BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_VAR_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   UserSLStaticGlobalInit: SLStaticGlobalInit = { AR_SEC_VAR_BOOLEAN AR_SEC_UNSPECIFIED AR_SEC_VAR_8
   BIT AR_SEC_VAR_16BIT AR_SEC_VAR_32BIT AR_SEC_UNSPECIFIED } | Width: 8
\******************************************************************************/

#define COSTOPSTART_STOP_SEC_VAR_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_VAR_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   UserSLStaticGlobalInit: SLStaticGlobalInit = { AR_SEC_VAR_BOOLEAN AR_SEC_UNSPECIFIED AR_SEC_VAR_8
   BIT AR_SEC_VAR_16BIT AR_SEC_VAR_32BIT AR_SEC_UNSPECIFIED } | Width: 8
\******************************************************************************/
static Boolean S03019_HysPos_fct_first;
static Boolean S03019_HysPos_fct_save;
static Boolean X_S03014_UnitDelay;

#define COSTOPSTART_STOP_SEC_VAR_BOOLEAN
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

/**************************************************************************************************\
 ***  FUNCTION:
 ***      CoStopStart_029_MSE_ini
 *** 
 ***  DESCRIPTION:
 ***      Main restart function
 ***      
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      Void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/

#define COSTOPSTART_START_SEC_CODE
#include "CoStopStart_MemMap.h"
Void CoStopStart_029_MSE_ini(Void)
{
   CoStopStart_030_FctVarInit();
}

#define COSTOPSTART_STOP_SEC_CODE
#include "CoStopStart_MemMap.h"

/**************************************************************************************************\
 ***  FUNCTION:
 ***      CoStopStart_030_TEV_fct
 *** 
 ***  DESCRIPTION:
 ***      
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      Void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/

#define COSTOPSTART_START_SEC_CODE
#include "CoStopStart_MemMap.h"
Void CoStopStart_030_TEV_fct(Void)
{
   /* SLLocal: Default storage class for local variables | Width: 16 */
   SInt16 S03015_Switch /* LSB: 2^-12 OFF:  0 MIN/MAX:  -8 .. 7.999755859375 */;

   /* SLLocal: Default storage class for local variables | Width: 8 */
   Boolean S03011_Multiport_Switch;
   Boolean S03012_TurnOnDelay_fct_out;
   Boolean S03014_Switch2;
   Boolean S03019_HysPos_fct_out;
   Boolean S0305_Multiport_Switch;
   Boolean S0306_Multiport_Switch;
   Boolean S0307_Multiport_Switch;
   Boolean S0308_Multiport_Switch;
   Boolean S0309_Multiport_Switch;

   /* # combined # Update of input(s) for custom code block : CoStopStart_030/F03_Demander_redemarra
      ge_par_sous_systeme_BV/F03_04_Autoriser_redemarrage_si_BVMP_MAP/TurnOffDelay/TurnOffDelay_fct
    */
   
   /* Custom code: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_04_Autoriser_red
      emarrage_si_BVMP_MAP/TurnOffDelay/TurnOffDelay_fct << output code >> */
   {
      PSALib_TurnOffDelay((CoStopStart_030_Tra_noTarGear_in == CoStopStart_030_Tra_noEgdGear_in),
       ((UInt32) MonGB_tiMAPRstrtAuth_C), &S03020_TurnOffDelay_fct_time, &MonGB_bNotGc_MP);
   }

   MonGB_bRstrtTypATReq = CoStopStart_030_Ext_posnGBxLev_in == 9 /* 9. */;
   MonGB_bGc = !(MonGB_bNotGc_MP);
   MonGB_bMAP = CoStopStart_030_Ext_stTraTypCf_in == 5 /* 5. */;

   /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_05_Calculer_changemen
      t_rapport_MAP_trop_long/Switch
      
      CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_05_Calculer_changement_rappor
      t_MAP_trop_long/Switch: Omitted comparison with constant. */
   if (MonGB_bMAP) 
   {
      MonGB_bCutCaseLgGc = MonGB_bGc && MonGB_bMAPAuthCutToutGc_C;
   }
   else 
   {
      /* # combined # TargetLink outport: CoStopStart_030/MonGB_bCutCaseLgGc_out */
      MonGB_bCutCaseLgGc = 0 /* 0. */;
   }

   /* # combined # Update of input(s) for custom code block : CoStopStart_030/F03_Demander_redemarra
      ge_par_sous_systeme_BV/F03_04_Autoriser_redemarrage_si_BVMP_MAP/TurnOnDelay1/TurnOnDelay_fct
    */
   
   /* Custom code: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_04_Autoriser_red
      emarrage_si_BVMP_MAP/TurnOnDelay1/TurnOnDelay_fct << output code >> */
   {
      PSALib_TurnOnDelay(MonGB_bGc, ((UInt32) (MonGB_tiMAPToutGc_C * 10)),
       &S03021_TurnOnDelay_fct_time, &MonGB_bCutCaseLgGc_MP);
   }

   MonGB_bMAPRstrtAuth_MP = MonGB_bCutCaseLgGc_MP && (!(MonGB_bMAPAuthCutToutGc_C));

   /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_04_Autoriser_redemarr
      age_si_BVMP_MAP/Switch
      
      CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_04_Autoriser_redemarrage_si_B
      VMP_MAP/Switch: Omitted comparison with constant. */
   if (MonGB_bMAPRstrtAuth_MP) 
   {
      /* # combined # TargetLink outport: CoStopStart_030/MonGB_bMAPRstrtAuth_out */
      MonGB_bMAPRstrtAuth = 1 /* 1. */;
   }
   else 
   {
      /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_04_Autoriser_redem
         arrage_si_BVMP_MAP/Switch1
         
         CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_04_Autoriser_redemarrage_s
         i_BVMP_MAP/Switch1: Omitted comparison with constant. */
      if (MonGB_bMAP) 
      {
         /* # combined # # combined # TargetLink outport: CoStopStart_030/MonGB_bMAPRstrtAuth_out */
         MonGB_bMAPRstrtAuth = MonGB_bNotGc_MP;
      }
      else 
      {
         /* # combined # # combined # TargetLink outport: CoStopStart_030/MonGB_bMAPRstrtAuth_out */
         MonGB_bMAPRstrtAuth = 1 /* 1. */;
      }
   }

   /* Multiport switch: CoStopStart_030/F01_Traiter_entrees/Traitement_booleen4/Multiport Switch */
   switch (MonGB_stModAMTRstrtReq_C) 
   {
      case 0: 
      {
         S0309_Multiport_Switch = CoStopStart_030_CoReqAMT_bEngRStrtReq_in;
         break;
      }
      case 1: 
      {
         S0309_Multiport_Switch = !(CoStopStart_030_CoReqAMT_bEngRStrtReq_in);
         break;
      }
      case 2: 
      {
         S0309_Multiport_Switch = 0 /* 0. */;
         break;
      }
      case 3: 
      {
         S0309_Multiport_Switch = 1 /* 1. */;
         break;
      }
   }

   /* CoStopStart_030/F01_Traiter_entrees/MonGB_bCoReqAMTRstrtReq_visu */
   MonGB_bCoReqAMTRstrtReq = S0309_Multiport_Switch;

   /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_03_Demander_redemarra
      ge_par_boite_vitesse/Switch
      
      CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_03_Demander_redemarrage_par_b
      oite_vitesse/Switch: Omitted comparison with constant. */
   if (MonGB_bCoReqAMTRstrtReq) 
   {
      S03015_Switch = (SInt16) (((UInt16) MonGB_stRstrtClas_C) << 12);
   }
   else 
   {
      S03015_Switch = 0 /* 0. */;
   }

   /* TargetLink outport: CoStopStart_030/MonGB_stRstrtReq_out */
   MonGB_stRstrtReq = (UInt8) (SInt8) (S03015_Switch >> 12);

   /* # combined # Update of input(s) for custom code block : CoStopStart_030/F02_Autoriser_arret_pa
      r_sous_systeme_BV/TurnOnDelay1/TurnOnDelay_fct */
   
   /* Custom code: CoStopStart_030/F02_Autoriser_arret_par_sous_systeme_BV/TurnOnDelay1/TurnOnDelay_
      fct << output code >> */
   {
      PSALib_TurnOnDelay(CoStopStart_030_CoPtUH_bOpDrvTraReq_in, ((UInt32)
       MonGB_tiVldOpDrvTraReq_C), &S03012_TurnOnDelay_fct_time, &S03012_TurnOnDelay_fct_out);
   }

   /* Multiport switch: CoStopStart_030/F01_Traiter_entrees/Traitement_booleen6/Multiport Switch */
   switch (MonGB_stModProtCluStopAuth_C) 
   {
      case 0: 
      {
         S03011_Multiport_Switch = !(CoStopStart_030_CoPt_bInhEngStopProtManClu_in);
         break;
      }
      case 1: 
      {
         S03011_Multiport_Switch = CoStopStart_030_CoPt_bInhEngStopProtManClu_in;
         break;
      }
      case 2: 
      {
         S03011_Multiport_Switch = 0 /* 0. */;
         break;
      }
      case 3: 
      {
         S03011_Multiport_Switch = 1 /* 1. */;
         break;
      }
   }

   /* Switch: CoStopStart_030/F02_Autoriser_arret_par_sous_systeme_BV/Switch */
   if (CoStopStart_030_Ext_stGBxCf_in != 0) 
   {
      /* SLLocal: Default storage class for local variables | Width: 8 */
      Boolean S03010_Multiport_Switch;
      Boolean S0302_Relational_Operator;

      S0302_Relational_Operator = CoStopStart_030_CoReqAMT_stEngStopAuth_in == 1 /* 1. */;

      /* Multiport switch: CoStopStart_030/F01_Traiter_entrees/Traitement_booleen5/Multiport Switch
       */
      switch (MonGB_stModAMTStopAuth_C) 
      {
         case 0: 
         {
            S03010_Multiport_Switch = S0302_Relational_Operator;
            break;
         }
         case 1: 
         {
            S03010_Multiport_Switch = !(S0302_Relational_Operator);
            break;
         }
         case 2: 
         {
            S03010_Multiport_Switch = 0 /* 0. */;
            break;
         }
         case 3: 
         {
            S03010_Multiport_Switch = 1 /* 1. */;
            break;
         }
      }

      /* CoStopStart_030/F01_Traiter_entrees/MonGB_bCoReqAMTStopAuth_visu */
      MonGB_bCoReqAMTStopAuth = S03010_Multiport_Switch;

      /* # combined # CoStopStart_030/F02_Autoriser_arret_par_sous_systeme_BV/TurnOnDelay1/Rescaler
       */
      MonGB_bStopAuth = S03012_TurnOnDelay_fct_out && MonGB_bCoReqAMTStopAuth;
   }
   else 
   {
      /* CoStopStart_030/F01_Traiter_entrees/MonGB_bProtManCluStopAuth */
      MonGB_bProtManCluStopAuth = S03011_Multiport_Switch;

      /* # combined # TargetLink outport: CoStopStart_030/MonGB_bStopAuth_out */
      MonGB_bStopAuth = MonGB_bProtManCluStopAuth;
   }

   /* Multiport switch: CoStopStart_030/F01_Traiter_entrees/Traitement_booleen3/Multiport Switch */
   switch (MonGB_stModRstrtAuthTra_C) 
   {
      case 0: 
      {
         S0308_Multiport_Switch = CoStopStart_030_Ext_bRStrtAuthTra_in;
         break;
      }
      case 1: 
      {
         S0308_Multiport_Switch = !(CoStopStart_030_Ext_bRStrtAuthTra_in);
         break;
      }
      case 2: 
      {
         S0308_Multiport_Switch = 0 /* 0. */;
         break;
      }
      case 3: 
      {
         S0308_Multiport_Switch = 1 /* 1. */;
         break;
      }
   }

   /* CoStopStart_030/F01_Traiter_entrees/MonGB_bRstrtAuthTra_visu */
   MonGB_bRstrtAuthTra = S0308_Multiport_Switch;

   /* Multiport switch: CoStopStart_030/F01_Traiter_entrees/Traitement_booleen1/Multiport Switch */
   switch (MonGB_stModInhNeut_C) 
   {
      case 0: 
      {
         S0306_Multiport_Switch = CoStopStart_030_FRM_bInhNeutCoPtUH_in;
         break;
      }
      case 1: 
      {
         S0306_Multiport_Switch = !(CoStopStart_030_FRM_bInhNeutCoPtUH_in);
         break;
      }
      case 2: 
      {
         S0306_Multiport_Switch = 0 /* 0. */;
         break;
      }
      case 3: 
      {
         S0306_Multiport_Switch = 1 /* 1. */;
         break;
      }
   }

   /* CoStopStart_030/F01_Traiter_entrees/MonGB_bInhNeutCoPtUH_visu */
   MonGB_bInhNeutCoPtUH = S0306_Multiport_Switch;

   /* Multiport switch: CoStopStart_030/F01_Traiter_entrees/Traitement_booleen/Multiport Switch */
   switch (MonGB_stModNeut_C) 
   {
      case 0: 
      {
         S0305_Multiport_Switch = CoStopStart_030_Ext_bNeut_in;
         break;
      }
      case 1: 
      {
         S0305_Multiport_Switch = !(CoStopStart_030_Ext_bNeut_in);
         break;
      }
      case 2: 
      {
         S0305_Multiport_Switch = 0 /* 0. */;
         break;
      }
      case 3: 
      {
         S0305_Multiport_Switch = 1 /* 1. */;
         break;
      }
   }

   /* CoStopStart_030/F01_Traiter_entrees/MonGB_bNeut_visu */
   MonGB_bNeut = S0305_Multiport_Switch;

   /* Multiport switch: CoStopStart_030/F01_Traiter_entrees/Traitement_booleen2/Multiport Switch */
   switch (MonGB_stModInhCluP_C) 
   {
      case 0: 
      {
         S0307_Multiport_Switch = CoStopStart_030_FRM_bInhCluPCoPtUH_in;
         break;
      }
      case 1: 
      {
         S0307_Multiport_Switch = !(CoStopStart_030_FRM_bInhCluPCoPtUH_in);
         break;
      }
      case 2: 
      {
         S0307_Multiport_Switch = 0 /* 0. */;
         break;
      }
      case 3: 
      {
         S0307_Multiport_Switch = 1 /* 1. */;
         break;
      }
   }

   /* CoStopStart_030/F01_Traiter_entrees/MonGB_bInhCluPCoPtUH_visu */
   MonGB_bInhCluPCoPtUH = S0307_Multiport_Switch;

   /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_02_Autoriser_redemarr
      age_par_boite_vitesses/Switch2 */
   if (CoStopStart_030_Ext_stGBxCf_in != 0) 
   {
      S03014_Switch2 = MonGB_bRstrtAuthTra;
   }
   else 
   {
      /* SLLocal: Default storage class for local variables | Width: 8 */
      Boolean S03014_Switch;
      Boolean S03014_Switch1;

      /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_02_Autoriser_redem
         arrage_par_boite_vitesses/Switch
         
         CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_02_Autoriser_redemarrage_p
         ar_boite_vitesses/Switch: Omitted comparison with constant. */
      if (MonGB_bInhNeutCoPtUH) 
      {
         S03014_Switch = 0 /* 0. */;
      }
      else 
      {
         S03014_Switch = MonGB_bNeut;
      }

      /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_02_Autoriser_redem
         arrage_par_boite_vitesses/Switch1
         
         CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_02_Autoriser_redemarrage_p
         ar_boite_vitesses/Switch1: Omitted comparison with constant. */
      if (MonGB_bInhCluPCoPtUH) 
      {
         S03014_Switch1 = 0 /* 0. */;
      }
      else 
      {
         S03014_Switch1 = ((UInt8) (CoStopStart_030_Ext_rCluPHiFreq_in >> 4)) >=
          MonGB_rCluPMinAuthRstrt_C;
      }
      S03014_Switch2 = S03014_Switch || S03014_Switch1;
   }

   /* TargetLink outport: CoStopStart_030/MonGB_bRstrtAuth_out */
   MonGB_bRstrtAuth = S03014_Switch2;

   /* TargetLink outport: CoStopStart_030/CoPtUH_bDrvTraOp_out */
   CoPtUH_bDrvTraOp_out = X_S03014_UnitDelay;

   /* # combined # Update of input(s) for custom code block : CoStopStart_030/F03_Demander_redemarra
      ge_par_sous_systeme_BV/F03_01_Autoriser_redemarrage_machine_electrique/HysPos1/HysPos_fct
      
      # combined # Sum: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Autorise
      r_redemarrage_machine_electrique/Sum */
   
   /* Custom code: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Autoriser_red
      emarrage_machine_electrique/HysPos1/HysPos_fct << output code >> */
   {
      PSALib_HysPos(((SInt32) CoStopStart_030_Ext_rCluPHiFreq_in), ((SInt32) (((UInt32)
       MonGB_rCluPMaxRstrt_C) << 4)), ((SInt32) (((SInt32) (SInt16) (UInt8)
       (MonGB_rCluPMaxRstrtHys_C + MonGB_rCluPMaxRstrt_C)) << 4)), &S03019_HysPos_fct_out,
       &S03019_HysPos_fct_first, &S03019_HysPos_fct_save);
   }

   /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Autoriser_redemarr
      age_machine_electrique/Switch2 */
   if (CoStopStart_030_Ext_stGBxCf_in != 0) 
   {
      /* # combined # TargetLink outport: CoStopStart_030/CoPtUH_bRStrtMchAuth_out */
      CoPtUH_bRStrtMchAuth_out = MonGB_bRstrtAuthTra;
   }
   else 
   {
      /* SLLocal: Default storage class for local variables | Width: 8 */
      Boolean S03013_Switch;
      Boolean S03013_Switch1;

      /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Autoriser_redem
         arrage_machine_electrique/Switch
         
         CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Autoriser_redemarrage_m
         achine_electrique/Switch: Omitted comparison with constant. */
      if (MonGB_bInhCluPCoPtUH) 
      {
         S03013_Switch = 0 /* 0. */;
      }
      else 
      {
         /* # combined # CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Autoris
            er_redemarrage_machine_electrique/HysPos1/Rescaler */
         S03013_Switch = S03019_HysPos_fct_out;
      }

      /* Switch: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Autoriser_redem
         arrage_machine_electrique/Switch1
         
         CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_01_Autoriser_redemarrage_m
         achine_electrique/Switch1: Omitted comparison with constant. */
      if (MonGB_bInhNeutCoPtUH) 
      {
         S03013_Switch1 = 0 /* 0. */;
      }
      else 
      {
         S03013_Switch1 = MonGB_bNeut;
      }
      CoPtUH_bRStrtMchAuth_out = S03013_Switch || S03013_Switch1;
   }

   /* Unit delay: CoStopStart_030/F03_Demander_redemarrage_par_sous_systeme_BV/F03_02_Autoriser_rede
      marrage_par_boite_vitesses/UnitDelay */
   X_S03014_UnitDelay = S03014_Switch2;
}

#define COSTOPSTART_STOP_SEC_CODE
#include "CoStopStart_MemMap.h"

/**************************************************************************************************\
 ***  FUNCTION:
 ***      CoStopStart_030_FctVarInit
 *** 
 ***  DESCRIPTION:
 ***      AR_IF_GLOBAL_8BIT_IRV
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      Void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/

#define COSTOPSTART_START_SEC_CODE
#include "CoStopStart_MemMap.h"
Void CoStopStart_030_FctVarInit(Void)
{
   S03012_TurnOnDelay_fct_time = 0 /* 0. */;
   S03019_HysPos_fct_first = 1 /* 1. */;
   S03019_HysPos_fct_save = 1 /* 1. */;
   S03020_TurnOffDelay_fct_time = 4294967295U /* 4294967295.U */;
   S03021_TurnOnDelay_fct_time = 0 /* 0. */;
   X_S03014_UnitDelay = 0 /* 0. */;
}

#define COSTOPSTART_STOP_SEC_CODE
#include "CoStopStart_MemMap.h"

/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

#endif/*_COSTOPSTART_030_TEV_FCT_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

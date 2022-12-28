/**************************************************************************************************\
 *** 
 *** Simulink model       : ProdElEng_07_2303_TL
 *** TargetLink subsystem : ProdElEng_07_2303_TL/ProdElEng_002
 *** Codefile             : prodeleng_002_tev_fct.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-05-23 09:18:59
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
 *** Style definition file               : C:\dSPACE30\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE30\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceC
 ***                                       odeSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** S0021                    ProdElEng_07_2303_TL/ProdElEng_002
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _PRODELENG_002_TEV_FCT_C_
#define _PRODELENG_002_TEV_FCT_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "ProdElEng_002_TEV_fct.h"
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

#define PRODELENG_START_SEC_GLOBAL_16BIT
#include "ProdElEng_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_16BIT: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_IF_GLOBAL_16BIT SInt16 ProdElEng_002_EngLim_tqIdcFLdLim_in /* 
   Unit       : N.m
   Description: Couple de limitation pleine charge
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_IF_GLOBAL_16BIT SInt16 ProdElEng_002_EngLim_tqIdcLdMaxTrbMax_in /* 
   Unit       : N.m
   Description: Couple de limitation pleine charge
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_IF_GLOBAL_16BIT SInt16 ProdElEng_002_EngLim_tqIdcLim_in /* 
   Unit       : N.m
   Description: Couple max dynamique
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define PRODELENG_STOP_SEC_GLOBAL_16BIT
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_GLOBAL_16BIT
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_16BIT_IRV: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
SInt16 TqLimUH_tqIdcFLdLim /* 
   Unit       : N.m
   Description: Couple de limitation pleine charge
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
SInt16 TqLimUH_tqIdcMaxLim /* 
   Unit       : N.m
   Description: Couple max dynamique
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define PRODELENG_STOP_SEC_GLOBAL_16BIT
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_GLOBAL_BOOLEAN
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_CoCha_bTqAccuReq_in /* 
   Description: Demande de pr�cision du couple par l'ESP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_CoCha_bTqDynReq_in /* 
   Description: Demande de dynamique du couple par l'ESP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_CoPt_bBrioUHAuth_in /* 
   Description: Autorisation de la fonction Brio par les boites BVA/BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_CoPt_bInhRecup_in /* 
   Description: Demande d'inhibition de la recup par les boites BVA/BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_CoPt_bTqAltFrzReq_in /* 
   Description: Demande de figeage du couple alternateur par les boites BVA/BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_CoPt_bTqAltFrzReq_nCross_in /* 
   Description: Demande de figeage du couple alternateur par la fonction de croisement de r�gime
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_CoPt_bTqAltGrdLimReq_in /* 
   Description: Demande de limitation du gradient de couple Alternateur par les boite BVA/BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_TqEM_bFrzACComp_in /* 
   Description: Flag figeage climatisation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_TqSys_bAcvAntiStall_in /* 
   Description: Vrai si anti-calage BVM est actif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_TqSys_bEngUHNOnIdl_in /* 
   Description: Vrai si ralenti g�n�re la consigne de couple moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_TqSys_bRlsAltBrkAsi_in /* 
   Description: Demande de d�lester l'alternateur pour assistance freinage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_TqSys_bTypFu_in /* 
   Description: Type de carburant du v�hicule (0�: Diesel�; 1�: Essence) / Vehicle fuel type (0�: Di
   esel / 1�: gasoline)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_TqSys_bUHFrzReq_in /* 
   Description: Demande de figeage du couple alternateur par le pr�ventif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_002_VSCtl_bInhRecup_in /* 
   Description: Demande d'inhibition de la recup par la fonction xVV
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean RE_ProdElEng_002_TEV_TqSys_bInjFrzTqUHReq_in /* 
   Description: Demande de figeage du couple alternateur par l'�tat d'injection
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define PRODELENG_STOP_SEC_GLOBAL_BOOLEAN
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_GLOBAL_BOOLEAN
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN_IRV: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
Boolean TqLimUH_bAcvAntiStall /* 
   Description: Vrai si anti-calage BVM est actif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean TqLimUH_bEngUHNOnIdl /* 
   Description: Vrai si ralenti g�n�re la consigne de couple moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean TqLimUH_bRlsAltBrkAsi /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean TqSys_bBrioUHAuth /* 
   Description: Autorisation de brio
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean TqSys_bInhRecupUHVoltCtl /* 
   Description: Demande d'inhibition de la recup
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean TqSys_bTqAltFrzReq /* 
   Description: Demande de figeage de couple alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean TqSys_bTqAltGrdLimReq /* 
   Description: Demande de limitation de gradient du couple alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean TqSys_bTqAltRlsReq /* 
   Description: Demande de d�lestage du couple alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define PRODELENG_STOP_SEC_GLOBAL_BOOLEAN
#include "ProdElEng_MemMap.h"

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
 ***      ProdElEng_001_MSE_ini
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

#define PRODELENG_START_SEC_CODE
#include "ProdElEng_MemMap.h"
Void ProdElEng_001_MSE_ini(Void)
{
}

#define PRODELENG_STOP_SEC_CODE
#include "ProdElEng_MemMap.h"

/**************************************************************************************************\
 ***  FUNCTION:
 ***      ProdElEng_002_TEV_fct
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

#define PRODELENG_START_SEC_CODE
#include "ProdElEng_MemMap.h"
Void ProdElEng_002_TEV_fct(Void)
{
   /* TargetLink outport: ProdElEng_002/TqLimUH_bRlsAltBrkAsi_out */
   TqLimUH_bRlsAltBrkAsi = ProdElEng_002_TqSys_bRlsAltBrkAsi_in;

   /* TargetLink outport: ProdElEng_002/TqLimUH_tqIdcMaxLim */
   TqLimUH_tqIdcMaxLim = ProdElEng_002_EngLim_tqIdcLim_in;

   /* Switch: ProdElEng_002/TqLimUH_tqIdcFLdLim_visu
      ProdElEng_002/TqLimUH_tqIdcFLdLim_visu: Omitted comparison with constant. */
   if (ProdElEng_002_TqSys_bTypFu_in) {
      /* # combined # TargetLink outport: ProdElEng_002/TqLimUH_tqIdcFLdLim_out */
      TqLimUH_tqIdcFLdLim = ProdElEng_002_EngLim_tqIdcLdMaxTrbMax_in;
   }
   else {
      /* # combined # TargetLink outport: ProdElEng_002/TqLimUH_tqIdcFLdLim_out */
      TqLimUH_tqIdcFLdLim = ProdElEng_002_EngLim_tqIdcFLdLim_in;
   }

   /* TargetLink outport: ProdElEng_002/TqLimUH_bEngUHNOnIdl */
   TqLimUH_bEngUHNOnIdl = ProdElEng_002_TqSys_bEngUHNOnIdl_in;
   TqLimUH_bAcvAntiStall = ProdElEng_002_TqSys_bAcvAntiStall_in ||
    ProdElEng_002_TqSys_bRlsAltBrkAsi_in;

   /* TargetLink outport: ProdElEng_002/TqSys_bTqAltGrdLimReq */
   TqSys_bTqAltGrdLimReq = ProdElEng_002_CoPt_bTqAltGrdLimReq_in;

   /* TargetLink outport: ProdElEng_002/TqSys_bBrioUHAuth */
   TqSys_bBrioUHAuth = ProdElEng_002_CoPt_bBrioUHAuth_in;

   /* TargetLink outport: ProdElEng_002/TqSys_bTqAltRlsReq */
   TqSys_bTqAltRlsReq = ProdElEng_002_CoCha_bTqDynReq_in;
   TqSys_bTqAltFrzReq = ProdElEng_002_TqSys_bUHFrzReq_in ||
    RE_ProdElEng_002_TEV_TqSys_bInjFrzTqUHReq_in || ProdElEng_002_CoCha_bTqAccuReq_in ||
    ProdElEng_002_CoPt_bTqAltFrzReq_in || ProdElEng_002_CoPt_bTqAltFrzReq_nCross_in ||
    ProdElEng_002_TqEM_bFrzACComp_in;
   TqSys_bInhRecupUHVoltCtl = ProdElEng_002_CoPt_bInhRecup_in || ProdElEng_002_VSCtl_bInhRecup_in;
}

#define PRODELENG_STOP_SEC_CODE
#include "ProdElEng_MemMap.h"

/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

#endif/*_PRODELENG_002_TEV_FCT_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

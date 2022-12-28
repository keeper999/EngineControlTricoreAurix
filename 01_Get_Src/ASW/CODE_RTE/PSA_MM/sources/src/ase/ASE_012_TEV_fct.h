/**************************************************************************************************\
 *** 
 *** Simulink model       : MgtASE_01460_10_02175_TL
 *** TargetLink subsystem : MgtASE_01460_10_02175_TL/ASE_012
 *** Codefile             : ase_012_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-05-20 11:30:03
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

#ifndef _ASE_012_TEV_FCT_H_
#define _ASE_012_TEV_FCT_H_

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

#define ASE_START_SEC_GLOBAL_8BIT
#include "ASE_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 ASE_012_CoEmCkg_stStrtRstrtFbCmd_in /* 
   Description: Retour de commande d�marrage red�marrage du SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_IF_GLOBAL_8BIT UInt8 ASE_012_CoPtASE_stPwt_in /* 
   Description: Etat_GMP_SCAr
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 10 */;

#define ASE_STOP_SEC_GLOBAL_8BIT
#include "ASE_MemMap.h"

#define ASE_START_SEC_GLOBAL_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean ASE_012_CoPtASE_bEngCutOffReq_in /* 
   Description: Demande de coupure du moteur thermique par la fonction Sortie Calage (A1 : Dde_Coupu
   re_SCAr_MTh)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean ASE_012_CoPtASE_bEngStallReq_in /* 
   Description: Demande de calage venant de la fonction Sortie Calage (A1 : Dde_Calage_MTh)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean ASE_012_CoPtUH_bEngRstrtClsCluCdn_in /* 
   Description: Condition de pilotage du red�marrage CdT ferm�e
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean ASE_012_CoTqRStrt_bEngStrtSuc_in /* 
   Description: Signal indiquant que le d�marrage au sens large est r�ussi
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean ASE_012_EngReqH_bEngRStrtAutnAvl_in /* 
   Description: Capacit� Redem Autonome
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean ASE_012_PARM_bEngRstrtAutnAvl_in /* 
   Description: Capacit� Redem Autonome Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtASE_bAltRStrtTypASEReq_out /* 
   Description: Demande de sortie calage type red�marrage pour l'alternateur (A1 : Dde_Redem_SCAr_SE
   EM)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtASE_bCdnInhRStrt_out /* 
   Description: Condition d'inhibition pour sortie calage (A1 : Inhibition_Redem_SEEM)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtASE_bEngRStrtTypASEReq_out /* 
   Description: Demande de sortie calage type red�marrage (A1 : Dde_Redem_SCAr_MTh)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoPtASE_bVSSNwAcvAuth_out /* 
   Description: Autorisation de maintien DMTR venant de la fonction Sortie Calage (A1 : Autorisation
   _maintien_DMTR)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_ASE_012_TEV_CoASE_bHiSpdRstrtAuth_in /* 
   Description: Autorisation de la demande de red�marrage pour l'alternateur sur vitesse haute
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define ASE_STOP_SEC_GLOBAL_BOOLEAN
#include "ASE_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void ASE_011_MSE_ini(Void);
extern Void ASE_012_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void ASE_012_FctVarInit(Void);


#endif/*_ASE_012_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

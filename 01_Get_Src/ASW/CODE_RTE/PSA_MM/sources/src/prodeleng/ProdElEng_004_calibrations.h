/**************************************************************************************************\
 *** 
 *** Simulink model       : ProdElEng_07_1724_TL
 *** TargetLink subsystem : ProdElEng_07_1724_TL/ProdElEng_004
 *** Codefile             : prodeleng_004_calibrations.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-05-23 09:18:03
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
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _PRODELENG_004_CALIBRATIONS_H_
#define _PRODELENG_004_CALIBRATIONS_H_

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

#define PRODELENG_START_SEC_CALIB_16BIT
#include "ProdElEng_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_16BIT: Mergeable Calib 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_MERGEABLE_CALIB_16BIT UInt16 TqLimUH_tiBrioUHGrdUnlim_C /* 
   Unit       : s
   Description: Temporisation de non limitation du gradient de couple AltR � l'activation d'une dema
   nde de Brio UH
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 TqLimUH_tiDeceAcv_C /* 
   Unit       : s
   Description: Valeur de temporisation de filtrage du flag Activation deceleration
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT SInt16 TqLimUH_tqThdBoostOff_C /* 
   Unit       : N.m
   Description: Seuil de couple AltR en-dessous duquel l'AltR n'est plus consid�r� comme moteur
   LSB: 2^-1 OFF:  0 MIN/MAX:  -50 .. 76 */;

#define PRODELENG_STOP_SEC_CALIB_16BIT
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_CALIB_8BIT
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_8BIT UInt8 TqLimUH_noGbxCfManBrioUH_C /* 
   Unit       : -
   Description: Constante indiquant BVM Pr�sente
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 TqLimUH_rBrioCluPCls_C /* 
   Unit       : %
   Description: Seuil de position p�dale embrayage au-del� duquel l'embrayage est consd�r� ferm�
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 TqLimUH_rBrioCluPOp_C /* 
   Unit       : %
   Description: Seuil de position p�dale embrayage au-desous duquel l'embrayage est consd�r� glissan
   t
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 TqLimUH_spdBrioUHAcv_C /* 
   Unit       : Km/h
   Description: Seuil de vitesse v�hicule en-dessous duquel le Brio UH est activable
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 TqLimUH_spdBrioUHDeac_C /* 
   Unit       : Km/h
   Description: Seuil de vitesse v�hicule au-dessus duquel le Brio UH est interdit
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 TqLimUH_stEngRunBrioUH_C /* 
   Unit       : -
   Description: Constante �tat moteur tournant
   LSB: 2^0 OFF:  0 MIN/MAX:  1 .. 15 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 TqLimUH_tiMaxWaitBrioUH_C /* 
   Unit       : s
   Description: Temps max d'attente du brio UH
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 100 */;

#define PRODELENG_STOP_SEC_CALIB_8BIT
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_CARTO_16BIT
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_16BIT: Mergeable Carto 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nBrioUHBoostDrvAr1Out_T[8] /* 
   Unit       : Tr/min
   Description: Table des Offsets en r�gime moteur pour d�finir la sortie de zone 1 de brio Pour Boo
   st AltR
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nBrioUHBoostDrvAr1_A[8] /* 
   Unit       : Tr/min
   Description: Breackpoints en r�gime moteur de tables de d�finition de la zone 1 de brio Pour Boos
   t AltR
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nBrioUHBoostDrvAr2Out_T[8] /* 
   Unit       : Tr/min
   Description: Table des Offsets en r�gime moteur pour d�finir la sortie de zone 2 de brio Pour Boo
   st AltR
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nBrioUHBoostDrvAr2_A[8] /* 
   Unit       : Tr/min
   Description: Breackpoints en r�gime moteur de tables de d�finition de la zone 2 de brio Pour Boos
   t AltR
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nBrioUHRlsDrvArThdOut_T[8] /* 
   Unit       : Tr/min
   Description: Table des Offsets en r�gime moteur pour d�finir la sortie de zone de brio par d�lest
   age AltR
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nBrioUHRlsDrvAr_A[8] /* 
   Unit       : Tr/min
   Description: Breackpoints en r�gime moteur de tables de d�finition de la zone de brio pour d�lest
   age AltR
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nThdDrvOffFLd_A[8] /* 
   Unit       : Tr/min
   Description: Breackpoints en r�gime moteur de la tables des �carts de couple entre le couple plei
   ne charge CMI et la volont� conducteur pour annuler la demande de Brio UH
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nThdDrvOffSmkLim_A[8] /* 
   Unit       : Tr/min
   Description: Breackpoints en r�gime moteur de la table des �carts de couple entre la volont� cond
   ucteur CMI et la limitation fum�e pour pour annuler la demande de Brio UH
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nThdDrvOnFLd_A[8] /* 
   Unit       : Tr/min
   Description: Breakpoints en r�gime moteur de la table des �carts de couple entre la courbe de ple
   ine charge CMI et la volont� conducteur pour demander le Brio UH
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nThdDrvOnSmkLim_A[8] /* 
   Unit       : Tr/min
   Description: Breackpoints en r�gime moteur de la table des �carts de couple entre la volont� cond
   ucteur CMI et la limitation fum�e pour demande de Brio UH
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nThdSmkLimOffFLd_A[8] /* 
   Unit       : Tr/min
   Description: Breackpoints en r�gime moteur de la table des �carts de couple entre la limitation f
   um�e et le couple de pleine charge CMI n�cessaire pour annuler la demande de Brio UH
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 TqLimUH_nThdSmkLimOnFLd_A[8] /* 
   Unit       : Tr/min
   Description: Breackpoints en r�gime moteur de la table des �carts de couple entre la limitation f
   um�e et le couple de pleine charge CMI n�cessaire pour autoriser le Brio UH
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 TqLimUH_tqThdDrvOffFLd_T[8] /* 
   Unit       : N.m
   Description: Tables des �carts de couple entre le couple pleine charge CMI et la volont� conducte
   ur pour annuler la demande de Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 TqLimUH_tqThdDrvOffSmkLim_T[8] /* 
   Unit       : N.m
   Description: Table des �carts de couple entre la volont� conducteur CMI et la limitation fum�e po
   ur annuler la demande de Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 TqLimUH_tqThdDrvOnFLd_T[8] /* 
   Unit       : N.m
   Description: Table des �carts de couple entre la courbe de pleine charge CMI et la volont� conduc
   teur pour demander le Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 TqLimUH_tqThdDrvOnSmkLim_T[8] /* 
   Unit       : N.m
   Description: Table des �carts de couple entre la volont� conducteur CMI et la limitation fum�e po
   ur demande de Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 TqLimUH_tqThdSmkLimOffFLd_T[8] /* 
   Unit       : N.m
   Description: Table des �carts de couple entre la limitation fum�e et le couple de pleine charge C
   MI n�cessaire pour annuler la demande de Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 TqLimUH_tqThdSmkLimOnFLd_T[8] /* 
   Unit       : N.m
   Description: Table des �carts de couple entre la limitation fum�e et le couple de pleine charge C
   MI n�cessaire pour autoriser le Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define PRODELENG_STOP_SEC_CARTO_16BIT
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_CARTO_8BIT
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_8BIT: Mergeable Carto 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_bBrioUHGrdUnlim_T[16] /* 
   Unit       : -
   Description: Table des demandes de non limitation de gradient AltR
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_grdJerMaxBrioUH_T[16] /* 
   Unit       : N.m/s
   Description: Table des limitations de gradient AltR pour respect du jerke max v�hicule
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_rBrioUHBoostDrvAr1Out_T[8] /* 
   Unit       : %
   Description: Table des Offsets de position p�dale pour d�finir la sortie de la zone 1 de brio Pou
   r Boost AltR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_rBrioUHBoostDrvAr1_T[8] /* 
   Unit       : %
   Description: Table des Seuils en position p�dale pour entr�e dans la zone 1 de brio Pour Boost Al
   tR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_rBrioUHBoostDrvAr2Out_T[8] /* 
   Unit       : %
   Description: Table des Offsets de position p�dale pour d�finir la sortie de zone 2 de brio Pour B
   oost AltR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_rBrioUHBoostDrvAr2_T[8] /* 
   Unit       : %
   Description: Table des Seuils en position p�dale pour entr�e dans la zone 2 de brio Pour Boost Al
   tR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_rBrioUHRlsDrvArThdOut_T[8] /* 
   Unit       : %
   Description: Table des Offsets de position p�dale pour d�finir la sortie de zone de brio par d�le
   stage AltR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_rBrioUHRlsDrvAr_T[8] /* 
   Unit       : %
   Description: Table des Seuils en position p�dale pour entr�e dans la zone de brio par d�lestage A
   ltR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_stBrioUHGearAr_M[2][7] /* 
   Unit       : -
   Description: Cartographie des zones de brio en rapport de bo�te
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 6 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 TqLimUH_tiDeacMaxDly_T[16] /* 
   Unit       : s
   Description: Table des temps d'application max des �tats de l'automate temporis�
   LSB: 2^-4 OFF:  0 MIN/MAX:  0 .. 10 */;

#define PRODELENG_STOP_SEC_CARTO_8BIT
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_INTERNAL_VAR_16BIT
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_16BIT: Display 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 TqLimUH_nCkFilBoostAr1Thd_MP /* 
   Unit       : Tr/min
   Description: R�gime moteur corrig� pour d�finir la sortie de zone 2 de brio pour Boost AltR
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 TqLimUH_nCkFilBoostAr2Thd_MP /* 
   Unit       : Tr/min
   Description: R�gime moteur corrig� pour d�finir la sortie de zone 2 de brio pour Boost AltR
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 TqLimUH_nCkFilRlsArThd_MP /* 
   Unit       : Tr/min
   Description: R�gime moteur corrig� pour d�finir la sortie de zone de brio pour delestage
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 TqLimUH_tiCordBrioT1 /* 
   Unit       : s
   Description: Valeur de la temporisation T1 de l'automate pour observation
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 655.35 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 TqLimUH_tiCordBrioT2 /* 
   Unit       : s
   Description: Valeur de la temporisation T1 de l'automate pour observation
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 655.35 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 TqLimUH_tiDeacMaxDly /* 
   Unit       : s
   Description: Constante de temps courante pour condition de transition automate
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimUH_tqDeltaIdcFLd_MP /* 
   Unit       : N.m
   Description: Diff�rence entre le couple de limitation pleine charge et le couple de limitation fu
   m�e
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimUH_tqDeltaIdc_tqGBx_MP /* LSB: 2^-4 OFF:  0 MIN/MAX:  
   -2000 .. 2000 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimUH_tqDeltaLimTqIdc_MP /* 
   Unit       : N.m
   Description: Diff�rence entre le couple de limitation pleine charge et la demande de couple indiq
   u� final apr�s filtrage 
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimUH_tqThdDrvOffFLd_MP /* 
   Unit       : N.m
   Description: Tables des �carts de couple entre le couple pleine charge CMI et la volont� conducte
   ur pour annuler la demande de Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimUH_tqThdDrvOffSmkLim_MP /* 
   Unit       : N.m
   Description: Table des �carts de couple entre la volont� conducteur CMI et la limitation fum�e po
   ur annuler la demande de Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimUH_tqThdDrvOnFLd_MP /* 
   Unit       : N.m
   Description: Table des �carts de couple entre la courbe de pleine charge CMI et la volont� conduc
   teur pour demander le Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimUH_tqThdDrvOnSmkLim_MP /* LSB: 2^-4 OFF:  0 MIN/MAX:  
   -2048 .. 2047.9375 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimUH_tqThdSmkLimOffFLd_MP /* 
   Unit       : N.m
   Description: Table des �carts de couple entre la limitation fum�e et le couple de pleine charge C
   MI n�cessaire pour annuler la demande de Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimUH_tqThdSmkLimOnFLd_MP /* 
   Unit       : N.m
   Description: Table des �carts de couple entre la limitation fum�e et le couple de pleine charge C
   MI n�cessaire pour autoriser le Brio UH
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define PRODELENG_STOP_SEC_INTERNAL_VAR_16BIT
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_INTERNAL_VAR_8BIT
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_8BIT: Display 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 TqLimUH_rBrioUHBoostDrvAr1Out_MP /* 
   Unit       : %
   Description: Table des Offsets de position p�dale pour d�finir la sortie de la zone 1 de brio Pou
   r Boost AltR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 TqLimUH_rBrioUHBoostDrvAr1_MP /* 
   Unit       : %
   Description: Table des Seuils en position p�dale pour entr�e dans la zone 1 de brio Pour Boost Al
   tR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 TqLimUH_rBrioUHBoostDrvAr2Out_MP /* 
   Unit       : %
   Description: Table des Offsets de position p�dale pour d�finir la sortie de zone 2 de brio Pour B
   oost AltR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 TqLimUH_rBrioUHBoostDrvAr2_MP /* 
   Unit       : %
   Description: Table des Seuils en position p�dale pour entr�e dans la zone 2 de brio Pour Boost Al
   tR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 TqLimUH_rBrioUHRlsDrvArThdOut_MP /* 
   Unit       : %
   Description: Table des Offsets de position p�dale pour d�finir la sortie de zone de brio par d�le
   stage AltR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 TqLimUH_rBrioUHRlsDrvAr_MP /* 
   Unit       : %
   Description: Table des Seuils en position p�dale pour entr�e dans la zone de brio par d�lestage A
   ltR
   LSB: 2^-1 OFF:  0 MIN/MAX:  0 .. 127 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 TqLimUH_stBrioUH /* 
   Unit       : -
   Description: Flag de demande de brio par d�lestage AltR
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 TqLimUH_stBrioUHCdn;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 TqLimUH_stBrioUHGearAr /* 
   Unit       : -
   Description: Zones de brio en rapport de bo�te
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 6 */;

#define PRODELENG_STOP_SEC_INTERNAL_VAR_8BIT
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_INTERNAL_VAR_BOOLEAN
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqLimUH_bBrioCluPCls_MP;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqLimUH_bBrioCluPOp_MP;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqLimUH_bBrioUHBoostDrvCdn /* 
   Unit       : -
   Description: Flag de demande Brio par Boost AltR conducteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqLimUH_bBrioUHBoostDrvCdn1;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqLimUH_bBrioUHBoostDrvCdn2;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqLimUH_bBrioUHEngCdnSt;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqLimUH_bBrioUHPTClsSt;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqLimUH_bBrioUHRlsDrvCdn /* 
   Unit       : -
   Description: Flag de demande Brio par d�lestage AltR conducteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqLimUH_bTqMelBoostOff;

#define PRODELENG_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "ProdElEng_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#endif/*_PRODELENG_004_CALIBRATIONS_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

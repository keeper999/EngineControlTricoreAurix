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
 ***  %name: ACCmd_calibrations.h %
 *** 
 ***  %version: 11.0.build1 %
 *** 
 ***  %date_modified: Tue Nov  8 11:13:38 2011 %
 *** 
 *** 
 ***  %derived_by: e360487 %
 ***  %release: TqStruct/10.1 %
 ***  %full_filespec: ACCmd_calibrations.h-11.0.build1:incl:2 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : CSMT_CGMT06_2191_TL
 *** TargetLink subsystem : CSMT_CGMT06_2191_TL/ACCmd
 *** Codefile             : accmd_calibrations.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-11-09 13:44:40
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
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _ACCMD_CALIBRATIONS_H_
#define _ACCMD_CALIBRATIONS_H_

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

#define ACCMD_START_SEC_CALIB_16BIT
#include "ACCmd_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_16BIT: Mergeable Calib 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkAntiStallMax_C /* 
   Unit       : RPM
   Description: Bornage sup�rieur du seuil anticalage calcul�. A froid la consigne est �lev�e et il 
   y a risque que le seuil anticalage remonte suffisamment pour annuler la zone brio d�collage
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkAntiStallMin_C /* 
   Unit       : RPM
   Description: Bornage inf�rieur du seuil anticalage calcul�
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkDeltaAntiStallAcv_C /* 
   Unit       : RPM
   Description: Delta anticalage suppl�mentaire ajout� lors de l'enclenchement du compresseur de CLI
   M afin d'�viter les fausses d�tections et les passages ON/OFF/ du compresseur
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT SInt16 ACCmd_nCkGrdMin_C /* 
   Unit       : RPM/s
   Description: Gradient mini pour sortir de l'inhibition de la clim au d�collage
   LSB: 2^-2 OFF:  0 MIN/MAX:  -8000 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkHys_C /* 
   Unit       : RPM
   Description: Hyst�r�sis sur le seuil de d�sactivation du compresseur pour condition de sur r�gime
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkIdlMinDet_C /* 
   Unit       : RPM
   Description: Seuil d'�cart statique de r�gime pour la consigne de d�tection
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkInhLo_C /* 
   Unit       : RPM
   Description: Seuil de r�gime bas pour la d�sactivation des fonctions au PMH
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkInhMax_C /* 
   Unit       : RPM
   Description: Seuil de r�gime moteur utilis� dans la condition de passage de OFF � ON de ACCmd_bIn
   hTakeOff
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkInhMin_C /* 
   Unit       : RPM
   Description: Seuil de r�gime moteur utilis� dans la condition de passage de ON � OFF de ACCmd_bIn
   hTakeOff
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkInhUp_C /* 
   Unit       : RPM
   Description: Seuil de r�gime haut pour la d�sactivation des fonctions au PMH
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_nCkMax_C /* 
   Unit       : RPM
   Description: Seuil de r�gime de d�sactivation du compresseur pour condition de sur r�gime
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_spdHysTakeOffAcv_C /* 
   Unit       : km/h
   Description: Hyst�r�sis de vitesse v�hicule utilis� dans la condition de passage de OFF � ON de A
   CCmd_bInhTakeOff
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_spdThdInhBrioVst_C /* 
   Unit       : km/h
   Description: Seuil de vitesse v�hicule en de�� duquel la condition de Brio peut etre d�sactiv�e
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_spdVehDft_C /* 
   Unit       : km/h
   Description: Vitesse v�hicule de substitution sur r�ception du FID FRM_bInhRvDeClthACTakeOff
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_spdVehTakeOffMax_C /* 
   Unit       : km/h
   Description: Seuil de vitesse v�hicule sup�rieur utilis� dans la condition de passage de OFF � ON
    de ACCmd_bInhTakeOff
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_spdVehTakeOffMin_C /* 
   Unit       : km/h
   Description: Seuil de vitesse v�hicule inf�rieur utilis� dans la condition de passage de OFF � ON
    de ACCmd_bInhTakeOff
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tiACAcv_C /* 
   Unit       : s
   Description: Temporisation pendant laquelle le ACCmd_nCkDeltaAntiStallAcv_C est appliqu� lors de 
   l'enclenchement de la temporisation
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tiACOffAntiStall_C /* 
   Unit       : s
   Description: Temporisation maxi de d�brayage du compresseur pour l'anticalage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tiFrzGearShiftEnd_C /* 
   Unit       : s
   Description: Temporisation permettant de d�caler la sortie de l'�tat figeage avec la fin du passa
   ge de vitesse si la temporisation ACCmd_tiFrzGearShiftMax_C n'est pas �coul�e � la remise � 0 de 
   CoPt_bFrzAC
   LSB: 0.02 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tiFrzGearShiftMax_C /* 
   Unit       : s
   Description: Temporisation permettant de sortir de l'�tat figeage si la boite n'en n'envoie pas l
   'ordre
   LSB: 0.02 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tiFrzIdlMax_C /* 
   Unit       : s
   Description: Temporisation de figeage � l'entr�e au ralenti
   LSB: 0.02 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tiFrzResMax_C /* 
   Unit       : -
   Description: Temporisation de figeage � la demande des fonctions de r�serve de couple
   LSB: 0.02 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tiMaxACRlsTakeOff_C /* 
   Unit       : s
   Description: Temporisation maximum  pendant laquelle le compresseur de climatisation est inhib� e
   n phase de d�collage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tiMaxACRlsVst_C /* 
   Unit       : s
   Description: Temporisation maximum  pendant laquelle la fonction brio clim est inhib�e en phase d
   'accel a vide
   LSB: 0.02 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tiWaitACRlsTakeOff_C /* 
   Unit       : s
   Description: Temporisation d'attente pour d�sactiver l'inhibition de la clim en phase de d�collag
   e
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 ACCmd_tqCkHysOut_C /* 
   Unit       : s
   Description: Hyst�r�sis sur le seuil de couple pour la d�sactivation du brio
   LSB: 0.02 OFF:  0 MIN/MAX:  0 .. 10 */;

#define ACCMD_STOP_SEC_CALIB_16BIT
#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_CALIB_32BIT
#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_32BIT: Mergeable Calib 32 bits for AUTOSAR modules | Width: 32
\******************************************************************************/
extern AR_MERGEABLE_CALIB_32BIT UInt32 ACCmd_tiSched_ACCmdBrio_SC /* 
   Unit       : RPM/s
   Description: Temps �chantillonnage du scheduleur TqSys_Sdl20ms_ACCmd
   LSB: 0.0005 OFF:  0 MIN/MAX:  0 .. 65536 */;
extern AR_MERGEABLE_CALIB_32BIT UInt32 ACCmd_tiSched_ACCmdFrz_SC /* 
   Unit       : RPM/s
   Description: Temps �chantillonnage du scheduleur TqSys_Sdl20ms_ACCmd
   LSB: 0.0005 OFF:  0 MIN/MAX:  0 .. 65536 */;
extern AR_MERGEABLE_CALIB_32BIT UInt32 ACCmd_tiSched_ACCmdInhAst_SC /* 
   Unit       : s
   Description: Temps �chantillonnage du scheduleur TqSys_Sdl100ms_ACCmd
   LSB: 0.0005 OFF:  0 MIN/MAX:  0 .. 65536 */;

#define ACCMD_STOP_SEC_CALIB_32BIT
#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_CALIB_8BIT
#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_8BIT UInt8 ACCmd_rAccPThdPedRls_C /* 
   Description: Enfoncement de p�dale limite utilis� dans la condition de passage � OFF de ACCmd_bIn
   hTakeOff
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 ACCmd_rAccPThdTakeOffAcv_C /* 
   Description: Enfoncement de p�dale limite utilis� dans la condition de passage � ON de ACCmd_bInh
   TakeOff
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 ACCmd_tiMAxACRlsRStrt_C /* 
   Unit       : s
   Description: Temporisation de d�sactivation du compresseur de climatisation apr�s  red�marrage (c
   as stop and start)
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 20 */;

#define ACCMD_STOP_SEC_CALIB_8BIT
#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_CALIB_BOOLEAN
#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean ACCmd_bACMgtAntiStallReq_C /* 
   Description: Param�tre de configuration d�finissant l'action � r�aliser en anti calage pr�ventif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean ACCmd_bFrzACESPReq_C /* 
   Description: Choix d'activation du figeage lors de regul ESP ( 0 : pas de figeage, 1 : figeage au
   toris�)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define ACCMD_STOP_SEC_CALIB_BOOLEAN
#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_CARTO_16BIT
#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_16BIT: Mergeable Carto 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_MERGEABLE_CARTO_16BIT SInt16 ACCmd_nCkAntiStallDelta_A[5] /* 
   Unit       : RPM/s
   Description: Breakpoints de gradient de r�gime pour le calcul du d'un �cart de r�gime par rapport
    � la consigne d'anticalage ACCmd_nCkIdlAntistallReq en fonction du gradient de r�gime
   LSB: 2^-2 OFF:  0 MIN/MAX:  -8000 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_nCkGrd_rAccP_A[5] /* 
   Unit       : %
   Description: Breakpoints de 5 points en % d'enfoncement p�dale
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 ACCmd_nCkGrd_rAccP_T[5] /* 
   Unit       : RPM/s
   Description: Vecteur de seuil de gradient de r�gime moteur fonction de la position p�dale utilis�
    dans la condition de passage de OFF � ON de ACCmd_bInhTakeOff
   LSB: 2^0 OFF:  0 MIN/MAX:  -10000 .. 10000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_nEngBrioArGrp1_T[6] /* 
   Unit       : RPM
   Description: Vecteur de r�gimes d�finissant les zones de r�gime du groupe de rapport de boite n�1
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_nEngBrioArGrp2_T[6] /* 
   Unit       : RPM
   Description: Vecteur de r�gimes d�finissant les zones de r�gime du groupe de rapport de boite n�2
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_nEngBrioArGrp3_T[6] /* 
   Unit       : RPM
   Description: Vecteur de r�gimes d�finissant les zones de r�gime du groupe de rapport de boite n�3
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_nEngHysBrioArGrp1_T[6] /* 
   Unit       : RPM
   Description: Hyst�r�sis appliqu� sur les zones de r�gime du groupe de rapport de boite n�1
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_nEngHysBrioArGrp2_T[6] /* 
   Unit       : RPM
   Description: Hyst�r�sis appliqu� sur les zones de r�gime du groupe de rapport de boite n�2
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_nEngHysBrioArGrp3_T[6] /* 
   Unit       : RPM
   Description: Hyst�r�sis appliqu� sur les zones de r�gime du groupe de rapport de boite n�3
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 ACCmd_noGearACBrio_A[10] /* 
   Description: Breakpoints en rapport de boite commun de la fonction
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 8 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_rAccPBrioArGrp1_T[6] /* 
   Unit       : %
   Description: Vecteur de 6 positions p�dale d�finissant les zones d'enfoncement p�dale du groupe d
   e rapport de boite n�1
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_rAccPBrioArGrp2_T[6] /* 
   Unit       : %
   Description: Vecteur de 6 positions p�dale d�finissant les zones d'enfoncement p�dale du groupe d
   e rapport de boite n�2
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_rAccPBrioArGrp3_T[6] /* 
   Unit       : %
   Description: Vecteur de 6 positions p�dale d�finissant les zones d'enfoncement p�dale du groupe d
   e rapport de boite n�3
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_rAccPHysBrioArGrp1_T[6] /* 
   Unit       : %
   Description: Hyst�r�sis appliqu� sur les zones d'enfoncement p�dale du groupe de rapport de boite
    n�1
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_rAccPHysBrioArGrp2_T[6] /* 
   Unit       : %
   Description: Hyst�r�sis appliqu� sur les zones d'enfoncement p�dale du groupe de rapport de boite
    n�2
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_rAccPHysBrioArGrp3_T[6] /* 
   Unit       : %
   Description: Hyst�r�sis appliqu� sur les zones d'enfoncement p�dale du groupe de rapport de boite
    n�3
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 ACCmd_tAirACBrio_A[7] /* 
   Unit       : �C
   Description: Breakpoints en temp�rature d'air commun pour la fonction
   LSB: 2^0 OFF:  0 MIN/MAX:  -40 .. 100 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_tiInhACBrio_T[7] /* 
   Unit       : s
   Description: Temporisation en fonction de la temp�rature ext�rieure pour l'activation du brio
   LSB: 0.02 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_tiMaxACBrio_M[10][7] /* 
   Unit       : s
   Description: Cartographie d�finissant la temporisation maximum en fonction du rapport de boite et
    de la temp�rature exterieure
   LSB: 0.02 OFF:  0 MIN/MAX:  0 .. 30 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_tiMinACBrio_T[7] /* 
   Unit       : s
   Description: Vecteur de temporisation en fonction de la temp�rature d'air
   LSB: 0.02 OFF:  0 MIN/MAX:  0 .. 10 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 ACCmd_tqCkHysInX_A[8] /* 
   Unit       : RPM
   Description: Breakpoints en r�gime pour la table ACCmd_tqCkHysIn_M
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 ACCmd_tqCkHysIn_M[8][7] /* 
   Unit       : N.m
   Description: Cartographie fonction du r�gime moteur et de la temp�rature indiquant l'hyst�r�sis d
   e couple pour le calcul de la condition de brio
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define ACCMD_STOP_SEC_CARTO_16BIT
#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_CARTO_32BIT
#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_32BIT: Mergeable Carto 32 bits for AUTOSAR modules | Width: 32
\******************************************************************************/
extern AR_MERGEABLE_CARTO_32BIT SInt32 ACCmd_nCkAntiStallDelta_T[5] /* 
   Unit       : RPM
   Description: Table d�finissant un �cart de r�gime par rapport � ACCmd_nCkIdlAntistallReq
   LSB: 2^-2 OFF:  0 MIN/MAX:  -10000 .. 10000 */;

#define ACCMD_STOP_SEC_CARTO_32BIT
#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_CARTO_8BIT
#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_8BIT: Mergeable Carto 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CARTO_8BIT UInt8 ACCmd_bACMgtBrioReq_T[7] /* 
   Description: Vecteur pour d�terminer le choix du type de d�lestage en zone Brio. (0 : Cylindr�e m
   ini 5%, 1�: D�brayage du compresseur / Soulagement maxi). Ce vecteur est fonction de la zone de r
   �gime Brio
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 ACCmd_facPndTAir_T[7] /* 
   Unit       : -
   Description: Table d�finissant le coefficient de temp�rature d'air en fonction de la temp�rature 
   ext�rieure
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 ACCmd_idxGearGrp_T[10] /* 
   Description: Table d�finissant le groupe auquel appartient le rapport de boite
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_MERGEABLE_CARTO_8BIT UInt8 ACCmd_tiMAxACRlsAst_T[7] /* 
   Unit       : s
   Description: Vecteur de temporisation pour l'inhibition de la clim apr�s un d�marrage en fonction
    de la temp�rature ext�rieure
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 20 */;

#define ACCMD_STOP_SEC_CARTO_8BIT
#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_INTERNAL_VAR_16BIT
#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_16BIT: Display 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_nCkAntiStallDelta_MP /* 
   Description: Consigne d'anticalage �pres l'influence du gradient de r�gime
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_nCkDeltaAntiStallAcv_MP /* 
   Description: R�gime mini anti calage calcul�
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 ACCmd_nCkIdlAntiStallReq /* 
   Description: Consigne de r�gime utilis�e pour d�terminer le seuil anti calage
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_nEngBrioArGrp[6] /* LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 
   16383.75 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_nEngHysBrioArGrp[6] /* LSB: 2^-2 OFF:  0 MIN/MAX:  0 
   .. 16383.75 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_posnAccPIn1 /* 
   Description: Ordonn�e du premier point  de la zone de Brio
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 511.9921875 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_posnAccPIn2 /* 
   Description: Ordonn�e du second point  de la zone de Brio
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 511.9921875 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_posnAccPOut1 /* 
   Description: Ordonn�e du premier point  avec hyst�r�sis de la zone de Brio
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 511.9921875 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_posnAccPOut2 /* 
   Description: Ordonn�e du second point  avec hyst�r�sis de la zone de Brio
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 511.9921875 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_rAccPBrioArGrp[6] /* LSB: 2^-7 OFF:  0 MIN/MAX:  0 ..
    511.9921875 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 ACCmd_rAccPHysBrioArGrp[6] /* LSB: 2^-7 OFF:  0 MIN/MAX:  0
    .. 511.9921875 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 ACCmd_rAccPInpThd /* 
   Description: Ordonn�e de la limite de zone de coupure en entr�e zone (D�finition sup�rieure � 100
   % pour permettre inhibition)
   LSB: 0.1 OFF:  0 MIN/MAX:  -3276.8 .. 3276.7 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 ACCmd_rInpSlop_MP /* 
   Description: Pente de la limite de coupure brio en entr�e zone (Pente mini : 0.5% pour 1000tr/min
   , Pente maxi : 100% pour 100tr/min)
   LSB: 2^-11 OFF:  0 MIN/MAX:  -1 .. 1 */;
extern AR_INTERNAL_VAR_DISP_16BIT SInt16 ACCmd_rOutSlop_MP /* 
   Description: Pente de la limite de coupure brio en entr�e zone (Pente mini : 0.5% pour 1000tr/min
   , Pente maxi : 100% pour 100tr/min)
   LSB: 2^-11 OFF:  0 MIN/MAX:  -1 .. 1 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 RE002_ACCmd_spdVeh_irv_out /* 
   Unit       : km/h
   Description: Vitesse v�hicule reconstruite pour la prise en compte de defauts
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 TqSys_nTarIdlOld_MP /* 
   Description: Valeur de r�gime de consigne pr�c�dent m�moris�
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;

#define ACCMD_STOP_SEC_INTERNAL_VAR_16BIT
#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_INTERNAL_VAR_32BIT

#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_32BIT: Display 32 bits for AUTOSAR modules | Width: 32
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_32BIT SInt32 ACCmd_rAccPOutThd /* 
   Description: Ordonn�e de la limite de zone de coupure en sortie zone (D�finition sup�rieure � 100
   % pour permettre inhibition)
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 150 */;

#define ACCMD_STOP_SEC_INTERNAL_VAR_32BIT

#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_INTERNAL_VAR_8BIT
#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_8BIT: Display 8 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_8BIT UInt16 ACCmd_posnNEngOut1 /* 
   Description: Abscisse du premier point  avec hyst�r�sis de la zone de Brio
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 16383.75 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt16 ACCmd_posnNEngOut2 /* 
   Description: Abscisse du second point  avec hyst�r�sis de la zone de Brio
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 16383.75 */;

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_8BIT: Display 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_facPndTAir_MP /* 
   Description: Coefficient de pond�ration pour la fonction brio clim en fonction de la Tair
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 25.5 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_idxBrioAr1 /*
   Description: Indice de la zone 1 du brio */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_idxBrioAr2 /*
   Description: Indice de la zone 2 du brio */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_idxBrioAr3 /*
   Description: Indice de la zone 3 du brio */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_idxBrioAr4 /*
   Description: Indice de la zone 4 du brio */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_idxBrioAr5 /*
   Description: Indice de la zone 5 du brio */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_idxBrioAr6 /*
   Description: Indice de la zone 6 du brio */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_idxBrioArCur /*
   Description: Indice de la zone de r�gime Brio en cours */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_idxBrioArLim_MP /*
   Description: Indice de la zone de r�gime Brio en cours limit� de 1 � 5 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_idxGearGrp /*
   Description: Groupe de brio en fonction du rapport de boite */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_stInh /* 
   Description: Condition d'inhibition du fonctionnement compresseur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 ACCmd_tiInhAst_MP /* 
   Description: Temporisation pour l'inhibition apr�s d�part
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 20 */;

#define ACCMD_STOP_SEC_INTERNAL_VAR_8BIT
#include "ACCmd_MemMap.h"

#define ACCMD_START_SEC_INTERNAL_VAR_BOOLEAN
#include "ACCmd_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bACFrzSIPEnd_MP /*
   Description: Tempo de confirmation de la condition de figeage du compresseur en phase changement 
   de rapport termin�e */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bACFrzSIPTiMaxEnd_MP /*
   Description: Tempo de confirmation MAX de la condition de figeage du compresseur en phase changem
   ent de rapport termin�e */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bACMgtBrioReq /*
   Description: Action � mener dans le cas BRIO du soulagement clim : 0=R�duction de cylindr�e � 5%,
    1=d�brayage compresseur */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bACOffAntiStallAstEnd_MP /*
   Description: Tempo de confirmation de la condition d'inhibition du compresseur en phase d�part te
   rmin�e */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bACOffAntiStallEnd_MP /*
   Description: Tempo de confirmation de la condition d'inhibition du compresseur en anti calage ter
   min�e */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bACTmpAcv_MP /*
   Description: Embrayage du compresseur confirm� par un temporisaition */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bAcvBrioArIn /*
   Description: Flag indiquant si on est dans une zone brio (0 = faux et 1 = vrai) */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bBrio;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bBrioIn /*
   Description: Flag indiquant le d�passement du seuil p�dale pour entrer en zone Brio */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bBrioInAccPCnd_MP /*
   Description: Flag indiquant le d�passement du seuil p�dale pour entrer en zone Brio */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bBrioOut /*
   Description: Flag de d�sactivation du Brio Clim */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bEngRun /*
   Description: Flag indiquant que le moteur est tournant */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bEngRunBrio /*
   Description: Flag d'activation du brio */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bFrz /*
   Description: Condition de figeage du fonctionnement compresseur */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bFrzACSIPOn /*
   Description: Condition de figeage du fonctionnement compresseur suite � requ�te BVA/BVMP */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bFrzESP /*
   Description: Condition de figeage du fonctionnement compresseur en r�gulation ESP */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bFrzIdl /*
   Description: Condition de figeage du fonctionnement compresseur en entr�e ralenti */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bFrzRes /*
   Description: Condition de figeage du fonctionnement compresseur demand�e par les r�serves de coup
   le */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bInhACExtReq /*
   Description: Condition d'inhibition du fonctionnement compresseur demand�e par les fonctions exte
   rnes */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bInhBrioVst /*
   Description: Condition d'inhibition du brio a vide en fonction de l'�tat embrayage */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bInhBrioVstCluPTmp_MP /*
   Description: Condition d'inhibition du brio a vide en fonction de l'�tat embrayage */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bInhBrioVstCluPVld_MP /*
   Description: Flag de validation du capteur d'embrayage pour la condition de brio � vide */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bInhNCkMax /*
   Description: Condition d'inhibition sur r�gime */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bInhTOffIn_MP /*
   Description: Tempo de confirmation de la condition de sortie d'inhibition du compresseur en d�col
   lage termin� */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bInhTOffOff_MP /*
   Description: Condition Inhibition au d�collage non valid�e */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bInhTOffOn_MP /*
   Description: Condition Inhibition au d�collage valid�e */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean ACCmd_bInhTOffOut_MP /*
   Description: Tempo d'inhibition du compresseur en d�collage termin� */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean RE002_ACCmd_bInhTDCClc_irv_out /* 
   Description: Flag d activation des fonctions de d�brayage du compresseur dont la r�currence est a
   u PMH
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean RE003_ACCmd_bInhTakeOff_irv_out /* 
   Description: Condition d inhibition du fonctionnement compresseur en phase d�collage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean RE004_ACCmd_bInhACOn_irv_out /* 
   Description: Condition d inhibition du fonctionnement compresseur en fonction des diagnostiques e
   t des modes d�grad�s
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean RE004_ACCmd_bInhAst_irv_out /* 
   Description: Condition d inhibition du fonctionnement compresseur en phase d�part
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean SACCmd70_Logical_Operator6;

#define ACCMD_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "ACCmd_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#endif/*_ACCMD_CALIBRATIONS_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

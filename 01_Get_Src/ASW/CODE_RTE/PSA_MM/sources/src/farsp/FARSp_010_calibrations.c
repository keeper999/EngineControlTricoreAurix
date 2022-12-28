/*******************************************************************************
*                           P. C. A.
*
*                    Peugeot Citroen Automobile
*
*        This file is the property of PCA. All rights are reserved
*        by PCA and this file must not be copied or disclosed
*       (in whole or in part) without prior written consent of PCA.
*
********************************************************************************
*
* %name: FARSp_010_calibrations.c %
*
* %version: 4.0.build1 %
*
* %date_modified: Fri May 25 16:54:56 2012 %
*
*
* %derived_by: u391752 %
* %release: EB2DT/SC2 %
* %full_filespec: FARSp_010_calibrations.c-4.0.build1:csrc:4 %
*
*******************************************************************************/


#ifndef _FARSP_010_CALIBRATIONS_C_
#define _FARSP_010_CALIBRATIONS_C_
#include "FARSp_010_calibrations.h"
#define FARSP_START_SEC_CALIB_16BIT
#include "FARSp_MemMap.h"
AR_MERGEABLE_CALIB_16BIT UInt16 FARSp_facTranDecWupCoHeat_C=51098;
AR_MERGEABLE_CALIB_16BIT UInt16 FARSp_facTranIncWupCoHeat_C=102;
AR_MERGEABLE_CALIB_16BIT UInt16 FARSp_rMixtAstWupSpLihIni_C=5530;
AR_MERGEABLE_CALIB_16BIT UInt16 FARSp_rMixtSpGrdNegWupLih_C=61235;
AR_MERGEABLE_CALIB_16BIT UInt16 FARSp_rMixtThdAfsWupSTTEna_C=4100;
AR_MERGEABLE_CALIB_16BIT SInt16 FARSp_tCoMesThdAfsWupSTTEna_C=60;
AR_MERGEABLE_CALIB_16BIT UInt16 FARSp_tiAstDeacAstWupLih_C=300;
#define FARSP_STOP_SEC_CALIB_16BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_CARTO_16BIT
#include "FARSp_MemMap.h"
AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_ctNbCmbAstCoHeatY_A[12]={30,50,60,100,170,
240,300,500,700,1500,3000,4095};AR_MERGEABLE_CARTO_16BIT UInt16 
FARSp_ctNbCmbAstNormY_A[12]={5,8,10,17,28,40,50,83,117,250,500,683};
AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_ctNbCmbAstSTTY_A[12]={30,50,60,100,170,240
,300,500,700,1500,3000,4095};AR_MERGEABLE_CARTO_16BIT UInt16 
FARSp_rMixtAstCoHeatSp_M[12][12]={{5325,5325,5079,4833,4710,4588,4465,4342,4219,
4096,4096,4096},{5325,5325,5079,4833,4710,4588,4465,4342,4219,4096,4096,4096},{
5325,5325,5079,4833,4710,4588,4465,4342,4219,4096,4096,4096},{4915,4915,4751,
4588,4506,4424,4342,4260,4178,4096,4096,4096},{4915,4915,4751,4588,4506,4424,
4342,4260,4178,4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,
4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{
4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,
4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,
4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,
4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096}};
AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_rMixtAstNormSp_M[12][12]={{5325,5325,5079,
4833,4710,4588,4465,4342,4219,4096,4096,4096},{5325,5325,5079,4833,4710,4588,
4465,4342,4219,4096,4096,4096},{5325,5325,5079,4833,4710,4588,4465,4342,4219,
4096,4096,4096},{4915,4915,4751,4588,4506,4424,4342,4260,4178,4096,4096,4096},{
4915,4915,4751,4588,4506,4424,4342,4260,4178,4096,4096,4096},{4096,4096,4096,
4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,
4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,
4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{
4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,
4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,
4096,4096,4096,4096,4096,4096}};AR_MERGEABLE_CARTO_16BIT UInt16 
FARSp_rMixtAstSTTSp_M[12][12]={{5325,5325,5079,4833,4710,4588,4465,4342,4219,
4096,4096,4096},{5325,5325,5079,4833,4710,4588,4465,4342,4219,4096,4096,4096},{
5325,5325,5079,4833,4710,4588,4465,4342,4219,4096,4096,4096},{4915,4915,4751,
4588,4506,4424,4342,4260,4178,4096,4096,4096},{4915,4915,4751,4588,4506,4424,
4342,4260,4178,4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,
4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{
4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,
4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,
4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,
4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096}};
AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_rMixtWupCoHeatSp_M[12][12]={{5325,5325,
5325,5325,5325,5325,5325,5325,5325,5325,5325,5325},{5325,5325,5325,5325,5325,
5325,5325,5325,5325,5325,5325,5325},{5325,5325,5325,5325,5325,5325,5325,5325,
5325,5325,5325,5325},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915,4915,
4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4096,4096,
4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,
4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,
4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,
4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,
4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,
4096,4096,4096,4096,4096,4096,4096}};AR_MERGEABLE_CARTO_16BIT UInt16 
FARSp_rMixtWupNormSp_M[12][12]={{4710,4710,4710,4710,4710,4710,4710,4710,4710,
4710,4710,4710},{4710,4710,4710,4710,4710,4710,4710,4710,4710,4710,4710,4710},{
4506,4506,4506,4506,4506,4506,4506,4506,4506,4506,4506,4506},{4301,4301,4301,
4301,4301,4301,4301,4301,4301,4301,4301,4301},{4198,4198,4198,4198,4198,4198,
4198,4198,4198,4198,4198,4198},{4096,4096,4096,4178,4096,4096,4096,4096,4096,
4096,4096,4096},{4096,4096,4096,4137,4096,4096,4096,4096,4096,4096,4096,4096},{
4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,
4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,
4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,
4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096}};
AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_rMixtWupSTTSp_M[12][12]={{5325,5325,5325,
5325,5325,5325,5325,5325,5325,5325,5325,5325},{5325,5325,5325,5325,5325,5325,
5325,5325,5325,5325,5325,5325},{5325,5325,5325,5325,5325,5325,5325,5325,5325,
5325,5325,5325},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{
4915,4915,4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4096,4096,4096,
4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,
4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,
4096,4096,4096},{4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{
4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,
4096,4096,4096,4096,4096,4096,4096,4096,4096},{4096,4096,4096,4096,4096,4096,
4096,4096,4096,4096,4096,4096}};AR_MERGEABLE_CARTO_16BIT SInt16 
FARSp_tCoMesAstCoHeatX_A[12]={-30,-27,-25,-20,-9,-7,0,10,20,40,60,90};
AR_MERGEABLE_CARTO_16BIT SInt16 FARSp_tCoMesAstNormX_A[12]={-30,-27,-25,-20,-9,-
7,0,10,20,40,60,90};AR_MERGEABLE_CARTO_16BIT SInt16 FARSp_tCoMesRStrtAstSTTX_A[
12]={-30,-27,-25,-20,-9,-7,0,10,20,40,60,90};AR_MERGEABLE_CARTO_16BIT SInt16 
FARSp_tCoMesRStrtWupSTTY_A[12]={-30,-27,-25,-20,-9,-7,0,10,20,40,60,90};
AR_MERGEABLE_CARTO_16BIT SInt16 FARSp_tCoMesWupCoHeatX_A[12]={-30,-27,-25,-20,-9
,-7,0,10,20,40,60,90};AR_MERGEABLE_CARTO_16BIT SInt16 FARSp_tCoMesWupNormX_A[12]
={-30,-27,-25,-20,-9,-7,0,10,20,40,60,90};AR_MERGEABLE_CARTO_16BIT SInt16 
FARSp_tCoMesWupSTTX_A[12]={-30,-27,-25,-20,-9,-7,0,10,20,40,60,90};
AR_MERGEABLE_CARTO_16BIT SInt16 FARSp_tCoStrtMesWupCoHeatY_A[12]={-30,-27,-25,-
20,-9,-7,0,10,20,40,60,90};AR_MERGEABLE_CARTO_16BIT SInt16 
FARSp_tCoStrtMesWupNormY_A[12]={-30,-27,-25,-20,-9,-7,0,10,20,40,60,90};
AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_tiEngModSTT_A[16]={0,60,120,240,360,480,
600,720,840,960,1200,1440,1680,1920,2400,3600};
#define FARSP_STOP_SEC_CARTO_16BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_CARTO_8BIT
#include "FARSp_MemMap.h"
AR_MERGEABLE_CARTO_8BIT UInt8 FARSp_facRatMixtSTTCor_T[16]={128,128,128,128,128,
128,128,128,128,128,128,128,128,128,128,128};
#define FARSP_STOP_SEC_CARTO_8BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_INTERNAL_VAR_16BIT
#include "FARSp_MemMap.h"
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAstWupCoHeatSp_MP;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAstWupNormSp_MP;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAstWupSTTSp_MP;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAstWupSpFlex;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAstWupSpGas;
#define FARSP_STOP_SEC_INTERNAL_VAR_16BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_INTERNAL_VAR_32BIT
#include "FARSp_MemMap.h"
AR_INTERNAL_VAR_DISP_32BIT SInt32 FARSp_facTranAstWupCoHeat_MP;
AR_INTERNAL_VAR_DISP_32BIT UInt32 FARSp_rMixtAstWupFlex_MP;
AR_INTERNAL_VAR_DISP_32BIT UInt32 FARSp_rMixtAstWupSTTSp;
AR_INTERNAL_VAR_DISP_32BIT UInt32 FARSp_rMixtAstWupSTTSpPrev;
AR_INTERNAL_VAR_DISP_32BIT UInt32 FARSp_rMixtAstWupSpGsl;
AR_INTERNAL_VAR_DISP_32BIT SInt32 FARSp_rMixtAstWupSpLih;
AR_INTERNAL_VAR_DISP_32BIT SInt32 FARSp_rMixtAstWupSpRaw;
#define FARSP_STOP_SEC_INTERNAL_VAR_32BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_INTERNAL_VAR_8BIT
#include "FARSp_MemMap.h"
AR_INTERNAL_VAR_DISP_8BIT UInt8 FARSp_facAstWupSpFlex;AR_INTERNAL_VAR_DISP_8BIT 
UInt8 FARSp_facAstWupSpGas;
#define FARSP_STOP_SEC_INTERNAL_VAR_8BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_INTERNAL_VAR_BOOLEAN
#include "FARSp_MemMap.h"
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean FARSp_bAcvRatMixtAstWupSTTSp;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean FARSp_bAstWupRatLimAcv_MP;
#define FARSP_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "FARSp_MemMap.h"
#endif

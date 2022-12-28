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
* %name: FARSp_016_calibrations.c %
*
* %version: 3.0 %
*
* %date_modified: Tue Feb  7 09:58:57 2012 %
*
*
* %derived_by: u391752 %
* %release: EB2DT/SC1 %
* %full_filespec: FARSp_016_calibrations.c-3.0:csrc:4 %
*
*******************************************************************************/


#ifndef _FARSP_016_CALIBRATIONS_C_
#define _FARSP_016_CALIBRATIONS_C_
#include "FARSp_016_calibrations.h"
#define FARSP_START_SEC_CALIB_16BIT
#include "FARSp_MemMap.h"
AR_MERGEABLE_CALIB_16BIT UInt16 FARSp_rMixtAgIgMinProtMin_C=3891;
AR_MERGEABLE_CALIB_16BIT UInt16 FARSp_rMixtAutIgPrvtRef_C=3891;
AR_MERGEABLE_CALIB_16BIT UInt16 FARSp_rMixtLoTqReqRef_C=3891;
#define FARSP_STOP_SEC_CALIB_16BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_CARTO_16BIT
#include "FARSp_MemMap.h"
AR_MERGEABLE_CARTO_16BIT SInt16 FARSp_agIgDif_LoTqReq_A[10]={0,5,11,16,21,27,32,
37,43,48};AR_MERGEABLE_CARTO_16BIT SInt16 FARSp_agIgDif_facAutIgPrvt_A[10]={0,5,
11,16,21,27,32,37,43,48};AR_MERGEABLE_CARTO_16BIT UInt16 
FARSp_nEng_AgIgMinProtX_A[10]={1000,1500,2000,2500,3000,3500,4000,4500,5000,5500
};AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_nEng_AutIgPrvtMaxX_A[10]={1000,1500,2000
,2500,3000,3500,4000,4500,5000,5500};AR_MERGEABLE_CARTO_16BIT UInt16 
FARSp_nEng_LoTqReqMaxX_A[10]={1000,1500,2000,2500,3000,3500,4000,4500,5000,5500}
;AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_rAirLd_AgIgMinProtY_A[10]={3277,5734,8192
,10650,13107,15565,18022,20480,22938,25395};AR_MERGEABLE_CARTO_16BIT UInt16 
FARSp_rAirLd_AutIgPrvtMaxY_A[10]={3277,5734,8192,10650,13107,15565,18022,20480,
22938,25395};AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_rAirLd_LoTqReqMaxY_A[10]={
3277,5734,8192,10650,13107,15565,18022,20480,22938,25395};
AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_rMixtAgIgMinProtMax_M[10][10]={{4915,4915,
4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,
4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,
4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,
4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,
4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,
4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,
4915,4915,4915,4915,4915,4915,4915,4915}};AR_MERGEABLE_CARTO_16BIT UInt16 
FARSp_rMixtAutIgPrvtMax_M[10][10]={{4915,4915,4915,4915,4915,4915,4915,4915,4915
,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,
4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,
4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,
4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,
4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,
4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,
4915}};AR_MERGEABLE_CARTO_16BIT UInt16 FARSp_rMixtLoTqReqMax_M[10][10]={{4915,
4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,
4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,
4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,
4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,
4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,
4915,4915,4915,4915},{4915,4915,4915,4915,4915,4915,4915,4915,4915,4915},{4915,
4915,4915,4915,4915,4915,4915,4915,4915,4915}};
#define FARSP_STOP_SEC_CARTO_16BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_CARTO_8BIT
#include "FARSp_MemMap.h"
AR_MERGEABLE_CARTO_8BIT UInt8 FARSp_facAgIgMinProtCor_T[10]={0,14,28,42,56,72,86
,100,114,128};AR_MERGEABLE_CARTO_8BIT UInt8 FARSp_facAutIgPrvtCor_T[10]={128,114
,100,86,72,56,42,28,14,0};AR_MERGEABLE_CARTO_8BIT UInt8 
FARSp_facRichLoTqReqCor_T[10]={0,14,28,42,56,72,86,100,114,128};
AR_MERGEABLE_CARTO_8BIT UInt8 FARSp_rAgIg_facAgIgMinProt_A[10]={0,14,28,42,56,72
,86,100,114,128};
#define FARSP_STOP_SEC_CARTO_8BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_INTERNAL_VAR_16BIT
#include "FARSp_MemMap.h"
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAgIgMinProtMax_MP;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAgIgMinProtSp_irv_MP;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAutIgPrvtMax_MP;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAutIgPrvtSpFlex;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAutIgPrvtSpGas;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtAutIgPrvtSpGsl;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtLoTqReqFlex_MP;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtLoTqReqMax_MP;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtLoTqReqSp;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtLoTqReqSpFlex;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtLoTqReqSpGas;
AR_INTERNAL_VAR_DISP_16BIT UInt16 FARSp_rMixtLoTqReqSpRaw;
#define FARSP_STOP_SEC_INTERNAL_VAR_16BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_INTERNAL_VAR_32BIT
#include "FARSp_MemMap.h"
AR_INTERNAL_VAR_DISP_32BIT UInt32 FARSp_rMixtAgIgMinProtRaw;
AR_INTERNAL_VAR_DISP_32BIT UInt32 FARSp_rMixtAutIgPrvtFlex_MP;
AR_INTERNAL_VAR_DISP_32BIT UInt32 FARSp_rMixtAutIgPrvtSp;
AR_INTERNAL_VAR_DISP_32BIT UInt32 FARSp_rMixtLoTqReqSpGsl;
#define FARSP_STOP_SEC_INTERNAL_VAR_32BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_INTERNAL_VAR_8BIT
#include "FARSp_MemMap.h"
AR_INTERNAL_VAR_DISP_8BIT UInt8 FARSp_facAutIgPrvtSpFlex;
AR_INTERNAL_VAR_DISP_8BIT UInt8 FARSp_facAutIgPrvtSpGas;
AR_INTERNAL_VAR_DISP_8BIT UInt8 FARSp_facLoTqReqFlex;AR_INTERNAL_VAR_DISP_8BIT 
UInt8 FARSp_facLoTqReqGas;AR_INTERNAL_VAR_DISP_8BIT UInt8 
FARSp_facRichAgIgMinProt_MP;AR_INTERNAL_VAR_DISP_8BIT UInt8 
FARSp_facRichAutIgPrvtCor_MP;AR_INTERNAL_VAR_DISP_8BIT UInt8 
FARSp_facRichLoTqReqCor_MP;AR_INTERNAL_VAR_DISP_8BIT UInt8 FARSp_rAgIgMinLim_MP;
#define FARSP_STOP_SEC_INTERNAL_VAR_8BIT
#include "FARSp_MemMap.h"
#define FARSP_START_SEC_INTERNAL_VAR_BOOLEAN
#include "FARSp_MemMap.h"
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean FARSp_bRichAgIgMinProt;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean FARSp_bRichLoTqReq;
#define FARSP_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "FARSp_MemMap.h"
#endif

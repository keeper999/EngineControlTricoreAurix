
#ifndef _EOMGSL_004_CALIBRATIONS_C_
#define _EOMGSL_004_CALIBRATIONS_C_
#include "EOMGsl_004_calibrations.h"
#define EOMGSL_START_SEC_CALIB_16BIT
#include "EOMGsl_MemMap.h"
AR_MERGEABLE_CALIB_16BIT UInt16 EOM_tiTranMax_C=2500;
#define EOMGSL_STOP_SEC_CALIB_16BIT
#include "EOMGsl_MemMap.h"
#define EOMGSL_START_SEC_CARTO_16BIT
#include "EOMGsl_MemMap.h"
AR_MERGEABLE_CARTO_16BIT UInt16 EOM_stCmdModCur_stTranTypX_A[21]={1,2,3,4,5,6,7,
8,9,10,11,12,13,14,15,16,17,18,19,20,21};AR_MERGEABLE_CARTO_16BIT UInt16 
EOM_stCmdModTar_stTranTypY_A[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,
19,20,21};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiIgSysTranDly_T[12]={0,0,0,0,0,0,
0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiInjPFuTranDly_T[12]={0,0,0,0,
0,0,0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiInjTranDly_T[12]={0,0,0,0
,0,0,0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiRmpIgSys_T[12]={0,0,0,0,
0,0,0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiRmpInjSys_T[12]={0,0,0,0,
0,0,0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiRmpPFu_T[12]={0,0,0,0,0,0
,0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiRmpRateMixt_T[12]={0,0,0,0,0
,0,0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiRmpTEx_T[12]={0,0,0,0,0,0,
0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiRmpTarIdl_T[12]={0,0,0,0,0,0,
0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiRmpTqRes_T[12]={0,0,0,0,0,0,0
,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiRmpVlvSys_T[12]={0,0,0,0,0,0,0
,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiTExTranDly_T[12]={0,0,0,0,0,0,
0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiTRateMixtTranDly_T[12]={0,0,0
,0,0,0,0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiTarIdlTranDly_T[12]={0
,0,0,0,0,0,0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiTqResTranDly_T[12]
={0,0,0,0,0,0,0,0,0,0,0,0};AR_MERGEABLE_CARTO_16BIT UInt16 EOM_tiVlvTranDly_T[12
]={0,0,0,0,0,0,0,0,0,0,0,0};
#define EOMGSL_STOP_SEC_CARTO_16BIT
#include "EOMGsl_MemMap.h"
#define EOMGSL_START_SEC_CARTO_8BIT
#include "EOMGsl_MemMap.h"
AR_MERGEABLE_CARTO_8BIT UInt8 EOM_stTranTyp_M[21][21]={{1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1}};
#define EOMGSL_STOP_SEC_CARTO_8BIT
#include "EOMGsl_MemMap.h"
#define EOMGSL_START_SEC_INTERNAL_VAR_16BIT
#include "EOMGsl_MemMap.h"
AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiIgSysRmp;AR_INTERNAL_VAR_DISP_16BIT 
UInt16 EOM_tiInjRmp;AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiPFuRmp;
AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiRateMixtRmp;AR_INTERNAL_VAR_DISP_16BIT 
UInt16 EOM_tiRmpIgSys;AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiRmpInjSys;
AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiRmpPFu;AR_INTERNAL_VAR_DISP_16BIT UInt16
 EOM_tiRmpRateMixt;AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiRmpTEx;
AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiRmpTarIdl;AR_INTERNAL_VAR_DISP_16BIT 
UInt16 EOM_tiRmpTqRes;AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiRmpVlvSys;
AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiTExRmp;AR_INTERNAL_VAR_DISP_16BIT UInt16
 EOM_tiTarIdlRmp;AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiTqResRmp;
AR_INTERNAL_VAR_DISP_16BIT UInt16 EOM_tiTran;AR_INTERNAL_VAR_DISP_16BIT UInt16 
EOM_tiVlvRmp;
#define EOMGSL_STOP_SEC_INTERNAL_VAR_16BIT
#include "EOMGsl_MemMap.h"
#define EOMGSL_START_SEC_INTERNAL_VAR_8BIT
#include "EOMGsl_MemMap.h"
AR_INTERNAL_VAR_DISP_8BIT UInt8 EOM_stTranTyp;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_01_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_02_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_03_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_04_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_05_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_06_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_07_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_08_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_09_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_10_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_11_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_12_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_13_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_14_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_15_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_prm_facTranModNotSync_16_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_stCmbModCur_out;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_stCmbModReq_in;AR_INTERNAL_VAR_DISP_8BIT UInt8 
RE004_EOM_stCmbModTar_out;
#define EOMGSL_STOP_SEC_INTERNAL_VAR_8BIT
#include "EOMGsl_MemMap.h"
#define EOMGSL_START_SEC_INTERNAL_VAR_BOOLEAN
#include "EOMGsl_MemMap.h"
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean EOM_bEnaCmbModChgNotDly;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean EOM_bRmpTranEnd;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean EOM_bRmpTranEndDly;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean RE004_EOM_bDiTran_in;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean RE004_EOM_bEnaCmbModChg_out;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean RE004_EOM_bFdoutModReq_in;
#define EOMGSL_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "EOMGsl_MemMap.h"
#endif


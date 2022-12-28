#if !defined(RTE_OILLVLHALACQ_DT_HOOK_H)
#define RTE_OILLVLHALACQ_DT_HOOK_H

/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2013 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /*
  * This file contains Rte hook declarations for the software component type OILLVLHALACQ_DT
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:33 CET 2014. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/

#include <Rte_Cfg.h>         /* RTE VFB configuration header file */
#include <Rte_Type.h>     /* Rte type definitions header file */

/*==================[macros]=================================================*/

#if (!defined RTE_CORE) /* if included by software component */
#ifndef RTE_VFB_TRACE
#define RTE_VFB_TRACE (0)
#endif /* RTE_VFB_TRACE */
#endif
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Start
#endif
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Start)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Start
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Start(dt_AcquiState_stEngOilLvl data);
#else
#define Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Start(data) ((void)0)
#endif /* Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Start */
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Return
#endif
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Return)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Return
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Return(dt_AcquiState_stEngOilLvl data);
#else
#define Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Return(data) ((void)0)
#endif /* Rte_WriteHook_OILLVLHALACQ_DT_P_AcquiState_stEngOilLvl_AcquiState_stEngOilLvl_Return */
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Start
#endif
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Start)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Start
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Start(dt_FisrtAcqui_uEngOilLvl data);
#else
#define Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Start(data) ((void)0)
#endif /* Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Start */
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Return
#endif
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Return)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Return
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Return(dt_FisrtAcqui_uEngOilLvl data);
#else
#define Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Return(data) ((void)0)
#endif /* Rte_WriteHook_OILLVLHALACQ_DT_P_FisrtAcqui_uEngOilLvl_FisrtAcqui_uEngOilLvl_Return */
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Start
#endif
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Start)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Start
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Start(dt_SecondAcqui_uEngOilLvl data);
#else
#define Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Start(data) ((void)0)
#endif /* Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Start */
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Return
#endif
#if defined(Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Return)
#undef Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Return
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Return(dt_SecondAcqui_uEngOilLvl data);
#else
#define Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Return(data) ((void)0)
#endif /* Rte_WriteHook_OILLVLHALACQ_DT_P_SecondAcqui_uEngOilLvl_SecondAcqui_uEngOilLvl_Return */
#if defined(Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Start
#endif
#if defined(Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Start)
#undef Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Start(P2VAR(dt_Ext_stMeasAuth, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Start(data) ((void)0)
#endif /* Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Start */
#if defined(Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Return
#endif
#if defined(Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Return)
#undef Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Return(P2VAR(dt_Ext_stMeasAuth, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Return(data) ((void)0)
#endif /* Rte_ReadHook_OILLVLHALACQ_DT_R_Ext_stMeasAuth_Ext_stMeasAuth_Return */
#if defined(Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Start
#endif
#if defined(Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Start)
#undef Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Start(P2VAR(DT_UCE_bPwrlAcv, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Start(data) ((void)0)
#endif /* Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Start */
#if defined(Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Return
#endif
#if defined(Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Return)
#undef Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Return(P2VAR(DT_UCE_bPwrlAcv, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Return(data) ((void)0)
#endif /* Rte_ReadHook_OILLVLHALACQ_DT_R_UCE_bPwrlAcv_UCE_bPwrlAcv_Return */
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Start
#endif
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Start)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Start(void);
#else
#define Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Start() ((void)0)
#endif /* Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Start */
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Return
#endif
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Return)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Return(void);
#else
#define Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Return() ((void)0)
#endif /* Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_EveOilLvl_OilLvlHalAcq_Return */
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Start
#endif
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Start)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Start(void);
#else
#define Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Start() ((void)0)
#endif /* Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Start */
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Return
#endif
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Return)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Return(void);
#else
#define Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Return() ((void)0)
#endif /* Rte_Runnable_OILLVLHALACQ_DT_RE_Oil_SdlFast_OilLvlHalAcq_Return */
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Start
#endif
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Start)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Start(void);
#else
#define Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Start() ((void)0)
#endif /* Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Start */
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Return
#endif
#if defined(Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Return)
#undef Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Return(void);
#else
#define Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Return() ((void)0)
#endif /* Rte_Runnable_OILLVLHALACQ_DT_RE_OILLVLHALACQ_DT_vidEntryInit_Return */

/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/
/** @} doxygen end group definition */
#endif /* !defined(RTE_OILLVLHALACQ_DT_HOOK_H) */
/*==================[end of file]============================================*/


/***************************************************************************
;**
;** FILE NAME      : SUMRAT.C75
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "SUMRAT.H"
#include "SUMRAT_L.H"
/*-------------------------------------------------------------------------
    Defines
-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
    Typedef
-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
    Enums
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Calibrations
-------------------------------------------------------------------------*/

#pragma section ".calib" a
const uint8  SUMRAT_u8Inhib = 0;
const uint16  SumRat_idxDftIUPRSynt_C[SUMRAT_IDXDFTIUPRSYNT_C_LNS][SUMRAT_IDXDFTIUPRSYNT_C_COLS] = {0};
#pragma section

/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
boolean SumRat_bDgoIUPRSynt[SUMRAT_BDGOIUPRSYNT_LNS];
boolean SumRat_bMonRunIUPRSynt[SUMRAT_BMONRUNIUPRSYNT_LNS];
uint8 Sumrat_au8PrevDrvCyc[SUMRAT_AU8PREVDRVCYC_LNS];
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/


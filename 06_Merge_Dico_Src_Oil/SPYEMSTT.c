/***************************************************************************
;**
;** FILE NAME      : SPYEMSTT.C75
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "SPYEMSTT.H"
#include "SPYEMSTT_L.H"
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
const uint8  SpyEmSTT_noDstWin_C = 0;
const uint8  SPYEMSTT_u8Inhib = 0;
#pragma section

/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
boolean SPYEMSTT_bHisDstWin1_Prev;
boolean SPYEMSTT_bRecNotStop_Prev;
uint8 SpyEmSTT_stNotStopCase;
sint32 SpyEmSTT_prmHisDstWin2[SPYEMSTT_PRMHISDSTWIN2_COLS];
sint32 SpyEmSTT_prmHisDstWin3[SPYEMSTT_PRMHISDSTWIN3_COLS];
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/


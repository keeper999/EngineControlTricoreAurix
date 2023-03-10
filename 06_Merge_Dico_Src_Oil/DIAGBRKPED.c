/***************************************************************************
;**
;** FILE NAME      : DIAGBRKPED.C75
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "DIAGBRKPED.H"
#include "DIAGBRKPED_L.H"
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
const boolean  Bps_brake_inv_sensor = 0;
const uint8  DIAGBRKPED_u8Inhib = 0;
const uint8  High_brake_thresh = 0;
const uint8  Low_brake_thresh = 0;
#pragma section

/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
boolean Bps_brake_pedal_inv_input;
boolean Ext_bSecBrkPedPrssFilt;
boolean Ext_bSecBrkPedPrssRaw;
uint8 DIAGBRKPED_u8AntiBounceCounter;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/


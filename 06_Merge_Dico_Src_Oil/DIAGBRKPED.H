/***************************************************************************
;**
;** FILE NAME      : DIAGBRKPED.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef DIAGBRKPED_H
#define DIAGBRKPED_H

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
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

extern const boolean  Bps_brake_inv_sensor;
extern const uint8  High_brake_thresh;
extern const uint8  Low_brake_thresh;

#pragma section
/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
extern boolean Ext_bSecBrkPedPrssFilt;
extern boolean Ext_bSecBrkPedPrssRaw;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/

void Brk_EveRst_DiagBrkPed(void);
void Brk_SdlMid_DiagBrkPed(void);


#endif /* DIAGBRKPED_H */

/*-------------------------------- end of file -------------------------------*/

/***************************************************************************
;**
;** FILE NAME      : ENGSTAB.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef ENGSTAB_H
#define ENGSTAB_H

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

extern const uint8  Engine_load_e_s_limit_c;
extern const uint8  Engine_load_e_s_window_c;
extern const uint8  Engine_stable_delay_c;
extern const uint8  Gear_engaged_e_s_window_c;

#pragma section
/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
extern boolean Engine_stabilised;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/

void EngSt_EveRst_EngStab(void);
void EngSt_SdlMid_EngStab(void);


#endif /* ENGSTAB_H */

/*-------------------------------- end of file -------------------------------*/

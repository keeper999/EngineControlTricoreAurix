/***************************************************************************
;**
;** FILE NAME      : VEHMUX.C75
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "VEHMUX.H"
#include "VEHMUX_L.H"
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
const uint8  VEHMUX_u8Inhib = 0;
#pragma section

/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
boolean Km_vehicle_first_552_received;
boolean Km_vehicle_first_7F2_received;
uint32 Km_vehicle_mux_prev;
uint8 Acceleration_veh_rx_via_can;
uint8 Esp_frame_nb_per_sec_count;
uint16 Distance_covered_computed;
uint16 Distance_parcourue_mux;
uint16 Vitesse_vehicule_rx_via_can;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/


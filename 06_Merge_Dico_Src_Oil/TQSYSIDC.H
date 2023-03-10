/***************************************************************************
;**
;** FILE NAME      : TQSYSIDC.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef TQSYSIDC_H
#define TQSYSIDC_H

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

extern const uint8  TQSYSIDC_u8Inhib;

#pragma section
/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/

void TqSys_EveRst_TqSysIdc(void);
void TqSys_EveTDC_TqSysIdc(void);
void TqSys_SdlFast_TqSysIdc(void);


#endif /* TQSYSIDC_H */

/*-------------------------------- end of file -------------------------------*/

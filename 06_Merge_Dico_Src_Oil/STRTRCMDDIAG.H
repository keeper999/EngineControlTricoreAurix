/***************************************************************************
;**
;** FILE NAME      : STRTRCMDDIAG.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef STRTRCMDDIAG_H
#define STRTRCMDDIAG_H

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

extern const uint16  Dml_diag_blocage_sta_delay;

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

void Strtr_EveRst_IfCmdDiag(void);
void Strtr_SdlMid_IfCmdDiag(void);


#endif /* STRTRCMDDIAG_H */

/*-------------------------------- end of file -------------------------------*/

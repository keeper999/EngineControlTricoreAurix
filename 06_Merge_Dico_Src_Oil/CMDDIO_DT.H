/***************************************************************************
;**
;** FILE NAME      : CMDDIO_DT.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef CMDDIO_DT_H
#define CMDDIO_DT_H

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

void AC_EveRst_CmdDio(void);
void AC_SdlSlow_CmdDio(void);


#endif /* CMDDIO_DT_H */

/*-------------------------------- end of file -------------------------------*/

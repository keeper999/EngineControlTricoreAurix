/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : MEMIF_MEMMAP.H                                          */
/*                                                                            */
/* !Scope           : Public                                                  */
/*                                                                            */
/* !Target          :                                                         */
/*                                                                            */
/* !Vendor          : Valeo                                                   */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2009 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::                                                                $*/
/* $Revision::            $$Author::                  $$Date::               $*/
/******************************************************************************/
/* 11/10/14, 10:16:22: generated by Genecode  v2.6.0.0                        */
/* From Source Template : MSN_MEMMAP_H.TPL                                    */
/******************************************************************************/



/******************************************************************************/
/*          MEMMAP selected mode:  SAFE                                       */
/******************************************************************************/
#define MEMMAP_ERROR

/* The following if is used only due to automatic generation */
#if !defined MEMMAP_ERROR

/* Project section mappings */
/* !Comment: MEMIF Section allocation */
#elif defined   MEMIF_START_SEC_CODE
   #undef  MEMIF_START_SEC_CODE
   #define START_SEC_CODE_SECTION
#elif defined   MEMIF_STOP_SEC_CODE
   #undef  MEMIF_STOP_SEC_CODE
   #define STOP_SEC_CODE_SECTION

#elif defined   MEMIF_START_CONFIG_DATA_UNSPECIFIED
   #undef  MEMIF_START_CONFIG_DATA_UNSPECIFIED
   #define START_CONFIG_DATA_UNSPECIFIED_SECTION
#elif defined   MEMIF_STOP_CONFIG_DATA_UNSPECIFIED
   #undef  MEMIF_STOP_CONFIG_DATA_UNSPECIFIED
   #define STOP_CONFIG_DATA_UNSPECIFIED_SECTION


#endif

/* ECU specific section mappings */
#ifndef MEMMAP_START_DONE

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Start Section treatment */
   #elif defined   START_SEC_CODE_SECTION
	  

      #pragma section ".text" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: CONFIG_DATA_UNSPECIFIED Start Section treatment */
   #elif defined   START_CONFIG_DATA_UNSPECIFIED_SECTION
	  
      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE


   #endif

#else   /* if MEMMAP_START_DONE is not defined */

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Stop Section treatment */
   #elif defined   STOP_SEC_CODE_SECTION && defined  START_SEC_CODE_SECTION
	  

      #pragma section

      #undef START_SEC_CODE_SECTION
      #undef STOP_SEC_CODE_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: CONFIG_DATA_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_CONFIG_DATA_UNSPECIFIED_SECTION && defined  START_CONFIG_DATA_UNSPECIFIED_SECTION
	  
      #undef START_CONFIG_DATA_UNSPECIFIED_SECTION
      #undef STOP_CONFIG_DATA_UNSPECIFIED_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into MEMIF_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/

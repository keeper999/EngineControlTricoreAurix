/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : FLSLOADER_MEMMAP.H                                          */
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
/* 11/10/14, 10:16:20: generated by Genecode  v2.6.0.0                        */
/* From Source Template : MSN_MEMMAP_H.TPL                                    */
/******************************************************************************/



/******************************************************************************/
/*          MEMMAP selected mode:  SAFE                                       */
/******************************************************************************/
#define MEMMAP_ERROR

/* The following if is used only due to automatic generation */
#if !defined MEMMAP_ERROR

/* Project section mappings */
/* !Comment: FLSLOADER Section allocation */
#elif defined   FLSLOADER_START_SEC_CODE
   #undef  FLSLOADER_START_SEC_CODE
   #define START_SEC_CODE_COPY_CALIB_SECTION
#elif defined   FLSLOADER_STOP_SEC_CODE
   #undef  FLSLOADER_STOP_SEC_CODE
   #define STOP_SEC_CODE_COPY_CALIB_SECTION

#elif defined   FLSLOADER_START_SEC_CONST_32BIT
   #undef  FLSLOADER_START_SEC_CONST_32BIT
   #define START_SEC_CONST_COPY_CALIB_SECTION
#elif defined   FLSLOADER_STOP_SEC_CONST_32BIT
   #undef  FLSLOADER_STOP_SEC_CONST_32BIT
   #define STOP_SEC_CONST_COPY_CALIB_SECTION

#elif defined   FLSLOADER_START_SEC_ERASE_CODE
   #undef  FLSLOADER_START_SEC_ERASE_CODE
   #define START_SEC_CODE_COPY_CALIB_SECTION
#elif defined   FLSLOADER_STOP_SEC_ERASE_CODE
   #undef  FLSLOADER_STOP_SEC_ERASE_CODE
   #define STOP_SEC_CODE_COPY_CALIB_SECTION

#elif defined   FLSLOADER_START_SEC_VAR_32BIT
   #undef  FLSLOADER_START_SEC_VAR_32BIT
   #define START_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
#elif defined   FLSLOADER_STOP_SEC_VAR_32BIT
   #undef  FLSLOADER_STOP_SEC_VAR_32BIT
   #define STOP_SEC_VAR_CLEARED_32BIT_CPU1_SECTION

#elif defined   FLSLOADER_START_SEC_VAR_8BIT
   #undef  FLSLOADER_START_SEC_VAR_8BIT
   #define START_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
#elif defined   FLSLOADER_STOP_SEC_VAR_8BIT
   #undef  FLSLOADER_STOP_SEC_VAR_8BIT
   #define STOP_SEC_VAR_CLEARED_8BIT_CPU1_SECTION

#elif defined   FLSLOADER_START_SEC_WRITE_CODE
   #undef  FLSLOADER_START_SEC_WRITE_CODE
   #define START_SEC_CODE_COPY_CALIB_SECTION
#elif defined   FLSLOADER_STOP_SEC_WRITE_CODE
   #undef  FLSLOADER_STOP_SEC_WRITE_CODE
   #define STOP_SEC_CODE_COPY_CALIB_SECTION


#endif

/* ECU specific section mappings */
#ifndef MEMMAP_START_DONE

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Start Section treatment */
   #elif defined   START_SEC_CODE_COPY_CALIB_SECTION
	  

      #pragma section ".code_copy_calib" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CONST_32BIT Start Section treatment */
   #elif defined   START_SEC_CONST_COPY_CALIB_SECTION
	  

      #pragma section ".const_copy_calib" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_ERASE_CODE Start Section treatment */
   #elif defined   START_SEC_CODE_COPY_CALIB_SECTION
	  

      #pragma section ".code_copy_calib" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_32BIT Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_8BIT Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_WRITE_CODE Start Section treatment */
   #elif defined   START_SEC_CODE_COPY_CALIB_SECTION
	  

      #pragma section ".code_copy_calib" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE


   #endif

#else   /* if MEMMAP_START_DONE is not defined */

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Stop Section treatment */
   #elif defined   STOP_SEC_CODE_COPY_CALIB_SECTION && defined  START_SEC_CODE_COPY_CALIB_SECTION
	  

      #pragma section

      #undef START_SEC_CODE_COPY_CALIB_SECTION
      #undef STOP_SEC_CODE_COPY_CALIB_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CONST_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_CONST_COPY_CALIB_SECTION && defined  START_SEC_CONST_COPY_CALIB_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_COPY_CALIB_SECTION
      #undef STOP_SEC_CONST_COPY_CALIB_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_ERASE_CODE Stop Section treatment */
   #elif defined   STOP_SEC_CODE_COPY_CALIB_SECTION && defined  START_SEC_CODE_COPY_CALIB_SECTION
	  

      #pragma section

      #undef START_SEC_CODE_COPY_CALIB_SECTION
      #undef STOP_SEC_CODE_COPY_CALIB_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_32BIT_CPU1_SECTION && defined  START_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
      #undef STOP_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_8BIT_CPU1_SECTION && defined  START_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
      #undef STOP_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_WRITE_CODE Stop Section treatment */
   #elif defined   STOP_SEC_CODE_COPY_CALIB_SECTION && defined  START_SEC_CODE_COPY_CALIB_SECTION
	  

      #pragma section

      #undef START_SEC_CODE_COPY_CALIB_SECTION
      #undef STOP_SEC_CODE_COPY_CALIB_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into FLSLOADER_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/


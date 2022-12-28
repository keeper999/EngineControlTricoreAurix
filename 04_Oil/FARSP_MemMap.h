/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : FARSP_MEMMAP.H                                          */
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
/* 11/10/14, 10:16:21: generated by Genecode  v2.6.0.0                        */
/* From Source Template : MSN_MEMMAP_H.TPL                                    */
/******************************************************************************/



/******************************************************************************/
/*          MEMMAP selected mode:  SAFE                                       */
/******************************************************************************/
#define MEMMAP_ERROR

/* The following if is used only due to automatic generation */
#if !defined MEMMAP_ERROR

/* Project section mappings */
/* !Comment: FARSP Section allocation */
#elif defined   FARSP_START_SEC_CALIB_16BIT
   #undef  FARSP_START_SEC_CALIB_16BIT
   #define START_SEC_CALIB_16BIT_SECTION
#elif defined   FARSP_STOP_SEC_CALIB_16BIT
   #undef  FARSP_STOP_SEC_CALIB_16BIT
   #define STOP_SEC_CALIB_16BIT_SECTION

#elif defined   FARSP_START_SEC_CALIB_8BIT
   #undef  FARSP_START_SEC_CALIB_8BIT
   #define START_SEC_CALIB_8BIT_SECTION
#elif defined   FARSP_STOP_SEC_CALIB_8BIT
   #undef  FARSP_STOP_SEC_CALIB_8BIT
   #define STOP_SEC_CALIB_8BIT_SECTION

#elif defined   FARSP_START_SEC_CALIB_BOOLEAN
   #undef  FARSP_START_SEC_CALIB_BOOLEAN
   #define START_SEC_CALIB_BOOLEAN_SECTION
#elif defined   FARSP_STOP_SEC_CALIB_BOOLEAN
   #undef  FARSP_STOP_SEC_CALIB_BOOLEAN
   #define STOP_SEC_CALIB_BOOLEAN_SECTION

#elif defined   FARSP_START_SEC_CARTO_16BIT
   #undef  FARSP_START_SEC_CARTO_16BIT
   #define START_SEC_CARTO_16BIT_SECTION
#elif defined   FARSP_STOP_SEC_CARTO_16BIT
   #undef  FARSP_STOP_SEC_CARTO_16BIT
   #define STOP_SEC_CARTO_16BIT_SECTION

#elif defined   FARSP_START_SEC_CARTO_32BIT
   #undef  FARSP_START_SEC_CARTO_32BIT
   #define START_SEC_CARTO_32BIT_SECTION
#elif defined   FARSP_STOP_SEC_CARTO_32BIT
   #undef  FARSP_STOP_SEC_CARTO_32BIT
   #define STOP_SEC_CARTO_32BIT_SECTION

#elif defined   FARSP_START_SEC_CARTO_8BIT
   #undef  FARSP_START_SEC_CARTO_8BIT
   #define START_SEC_CARTO_8BIT_SECTION
#elif defined   FARSP_STOP_SEC_CARTO_8BIT
   #undef  FARSP_STOP_SEC_CARTO_8BIT
   #define STOP_SEC_CARTO_8BIT_SECTION

#elif defined   FARSP_START_SEC_CODE
   #undef  FARSP_START_SEC_CODE
   #define START_SEC_CODE_SECTION
#elif defined   FARSP_STOP_SEC_CODE
   #undef  FARSP_STOP_SEC_CODE
   #define STOP_SEC_CODE_SECTION

#elif defined   FARSP_START_SEC_CONST_UNSPECIFIED
   #undef  FARSP_START_SEC_CONST_UNSPECIFIED
   #define START_SEC_CONST_UNSPECIFIED_SECTION
#elif defined   FARSP_STOP_SEC_CONST_UNSPECIFIED
   #undef  FARSP_STOP_SEC_CONST_UNSPECIFIED
   #define STOP_SEC_CONST_UNSPECIFIED_SECTION

#elif defined   FARSP_START_SEC_CONST_VERSION_MODULE_8BIT
   #undef  FARSP_START_SEC_CONST_VERSION_MODULE_8BIT
   #define START_SEC_CONST_VERSION_MODULE_8BIT_SECTION
#elif defined   FARSP_STOP_SEC_CONST_VERSION_MODULE_8BIT
   #undef  FARSP_STOP_SEC_CONST_VERSION_MODULE_8BIT
   #define STOP_SEC_CONST_VERSION_MODULE_8BIT_SECTION

#elif defined   FARSP_START_SEC_GLOBAL_16BIT
   #undef  FARSP_START_SEC_GLOBAL_16BIT
   #define START_SEC_GLOBAL_16BIT_SECTION
#elif defined   FARSP_STOP_SEC_GLOBAL_16BIT
   #undef  FARSP_STOP_SEC_GLOBAL_16BIT
   #define STOP_SEC_GLOBAL_16BIT_SECTION

#elif defined   FARSP_START_SEC_GLOBAL_32BIT
   #undef  FARSP_START_SEC_GLOBAL_32BIT
   #define START_SEC_GLOBAL_32BIT_SECTION
#elif defined   FARSP_STOP_SEC_GLOBAL_32BIT
   #undef  FARSP_STOP_SEC_GLOBAL_32BIT
   #define STOP_SEC_GLOBAL_32BIT_SECTION

#elif defined   FARSP_START_SEC_GLOBAL_8BIT
   #undef  FARSP_START_SEC_GLOBAL_8BIT
   #define START_SEC_GLOBAL_8BIT_SECTION
#elif defined   FARSP_STOP_SEC_GLOBAL_8BIT
   #undef  FARSP_STOP_SEC_GLOBAL_8BIT
   #define STOP_SEC_GLOBAL_8BIT_SECTION

#elif defined   FARSP_START_SEC_GLOBAL_BOOLEAN
   #undef  FARSP_START_SEC_GLOBAL_BOOLEAN
   #define START_SEC_GLOBAL_BOOLEAN_SECTION
#elif defined   FARSP_STOP_SEC_GLOBAL_BOOLEAN
   #undef  FARSP_STOP_SEC_GLOBAL_BOOLEAN
   #define STOP_SEC_GLOBAL_BOOLEAN_SECTION

#elif defined   FARSP_START_SEC_INTERNAL_VAR_16BIT
   #undef  FARSP_START_SEC_INTERNAL_VAR_16BIT
   #define START_SEC_INTERNAL_VAR_16BIT_SECTION
#elif defined   FARSP_STOP_SEC_INTERNAL_VAR_16BIT
   #undef  FARSP_STOP_SEC_INTERNAL_VAR_16BIT
   #define STOP_SEC_INTERNAL_VAR_16BIT_SECTION

#elif defined   FARSP_START_SEC_INTERNAL_VAR_32BIT
   #undef  FARSP_START_SEC_INTERNAL_VAR_32BIT
   #define START_SEC_INTERNAL_VAR_32BIT_SECTION
#elif defined   FARSP_STOP_SEC_INTERNAL_VAR_32BIT
   #undef  FARSP_STOP_SEC_INTERNAL_VAR_32BIT
   #define STOP_SEC_INTERNAL_VAR_32BIT_SECTION

#elif defined   FARSP_START_SEC_INTERNAL_VAR_8BIT
   #undef  FARSP_START_SEC_INTERNAL_VAR_8BIT
   #define START_SEC_INTERNAL_VAR_8BIT_SECTION
#elif defined   FARSP_STOP_SEC_INTERNAL_VAR_8BIT
   #undef  FARSP_STOP_SEC_INTERNAL_VAR_8BIT
   #define STOP_SEC_INTERNAL_VAR_8BIT_SECTION

#elif defined   FARSP_START_SEC_INTERNAL_VAR_BOOLEAN
   #undef  FARSP_START_SEC_INTERNAL_VAR_BOOLEAN
   #define START_SEC_INTERNAL_VAR_BOOLEAN_SECTION
#elif defined   FARSP_STOP_SEC_INTERNAL_VAR_BOOLEAN
   #undef  FARSP_STOP_SEC_INTERNAL_VAR_BOOLEAN
   #define STOP_SEC_INTERNAL_VAR_BOOLEAN_SECTION

#elif defined   FARSP_START_SEC_VAR_16BIT
   #undef  FARSP_START_SEC_VAR_16BIT
   #define START_SEC_VAR_16BIT_SECTION
#elif defined   FARSP_STOP_SEC_VAR_16BIT
   #undef  FARSP_STOP_SEC_VAR_16BIT
   #define STOP_SEC_VAR_16BIT_SECTION

#elif defined   FARSP_START_SEC_VAR_32BIT
   #undef  FARSP_START_SEC_VAR_32BIT
   #define START_SEC_VAR_32BIT_SECTION
#elif defined   FARSP_STOP_SEC_VAR_32BIT
   #undef  FARSP_STOP_SEC_VAR_32BIT
   #define STOP_SEC_VAR_32BIT_SECTION

#elif defined   FARSP_START_SEC_VAR_8BIT
   #undef  FARSP_START_SEC_VAR_8BIT
   #define START_SEC_VAR_8BIT_SECTION
#elif defined   FARSP_STOP_SEC_VAR_8BIT
   #undef  FARSP_STOP_SEC_VAR_8BIT
   #define STOP_SEC_VAR_8BIT_SECTION

#elif defined   FARSP_START_SEC_VAR_BOOLEAN
   #undef  FARSP_START_SEC_VAR_BOOLEAN
   #define START_SEC_VAR_BOOLEAN_SECTION
#elif defined   FARSP_STOP_SEC_VAR_BOOLEAN
   #undef  FARSP_STOP_SEC_VAR_BOOLEAN
   #define STOP_SEC_VAR_BOOLEAN_SECTION


#endif

/* ECU specific section mappings */
#ifndef MEMMAP_START_DONE

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CALIB_16BIT Start Section treatment */
   #elif defined   START_SEC_CALIB_16BIT_SECTION
	  

      #pragma section ".calib" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CALIB_8BIT Start Section treatment */
   #elif defined   START_SEC_CALIB_8BIT_SECTION
	  

      #pragma section ".calib" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CALIB_BOOLEAN Start Section treatment */
   #elif defined   START_SEC_CALIB_BOOLEAN_SECTION
	  

      #pragma section ".calib" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CARTO_16BIT Start Section treatment */
   #elif defined   START_SEC_CARTO_16BIT_SECTION
	  

      #pragma section ".calib" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CARTO_32BIT Start Section treatment */
   #elif defined   START_SEC_CARTO_32BIT_SECTION
	  

      #pragma section ".calib" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CARTO_8BIT Start Section treatment */
   #elif defined   START_SEC_CARTO_8BIT_SECTION
	  

      #pragma section ".calib" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CODE Start Section treatment */
   #elif defined   START_SEC_CODE_SECTION
	  

      #pragma section ".text" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CONST_UNSPECIFIED Start Section treatment */
   #elif defined   START_SEC_CONST_UNSPECIFIED_SECTION
	  

      #pragma section ".const" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CONST_VERSION_MODULE_8BIT Start Section treatment */
   #elif defined   START_SEC_CONST_VERSION_MODULE_8BIT_SECTION
	  

      #pragma section ".const" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_GLOBAL_16BIT Start Section treatment */
   #elif defined   START_SEC_GLOBAL_16BIT_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_GLOBAL_32BIT Start Section treatment */
   #elif defined   START_SEC_GLOBAL_32BIT_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_GLOBAL_8BIT Start Section treatment */
   #elif defined   START_SEC_GLOBAL_8BIT_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_GLOBAL_BOOLEAN Start Section treatment */
   #elif defined   START_SEC_GLOBAL_BOOLEAN_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_INTERNAL_VAR_16BIT Start Section treatment */
   #elif defined   START_SEC_INTERNAL_VAR_16BIT_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_INTERNAL_VAR_32BIT Start Section treatment */
   #elif defined   START_SEC_INTERNAL_VAR_32BIT_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_INTERNAL_VAR_8BIT Start Section treatment */
   #elif defined   START_SEC_INTERNAL_VAR_8BIT_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_INTERNAL_VAR_BOOLEAN Start Section treatment */
   #elif defined   START_SEC_INTERNAL_VAR_BOOLEAN_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_16BIT Start Section treatment */
   #elif defined   START_SEC_VAR_16BIT_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_32BIT Start Section treatment */
   #elif defined   START_SEC_VAR_32BIT_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_8BIT Start Section treatment */
   #elif defined   START_SEC_VAR_8BIT_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_BOOLEAN Start Section treatment */
   #elif defined   START_SEC_VAR_BOOLEAN_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE


   #endif

#else   /* if MEMMAP_START_DONE is not defined */

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CALIB_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_CALIB_16BIT_SECTION && defined  START_SEC_CALIB_16BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CALIB_16BIT_SECTION
      #undef STOP_SEC_CALIB_16BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CALIB_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_CALIB_8BIT_SECTION && defined  START_SEC_CALIB_8BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CALIB_8BIT_SECTION
      #undef STOP_SEC_CALIB_8BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CALIB_BOOLEAN Stop Section treatment */
   #elif defined   STOP_SEC_CALIB_BOOLEAN_SECTION && defined  START_SEC_CALIB_BOOLEAN_SECTION
	  

      #pragma section

      #undef START_SEC_CALIB_BOOLEAN_SECTION
      #undef STOP_SEC_CALIB_BOOLEAN_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CARTO_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_CARTO_16BIT_SECTION && defined  START_SEC_CARTO_16BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CARTO_16BIT_SECTION
      #undef STOP_SEC_CARTO_16BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CARTO_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_CARTO_32BIT_SECTION && defined  START_SEC_CARTO_32BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CARTO_32BIT_SECTION
      #undef STOP_SEC_CARTO_32BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CARTO_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_CARTO_8BIT_SECTION && defined  START_SEC_CARTO_8BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CARTO_8BIT_SECTION
      #undef STOP_SEC_CARTO_8BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CODE Stop Section treatment */
   #elif defined   STOP_SEC_CODE_SECTION && defined  START_SEC_CODE_SECTION
	  

      #pragma section

      #undef START_SEC_CODE_SECTION
      #undef STOP_SEC_CODE_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CONST_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_SEC_CONST_UNSPECIFIED_SECTION && defined  START_SEC_CONST_UNSPECIFIED_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_UNSPECIFIED_SECTION
      #undef STOP_SEC_CONST_UNSPECIFIED_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CONST_VERSION_MODULE_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_CONST_VERSION_MODULE_8BIT_SECTION && defined  START_SEC_CONST_VERSION_MODULE_8BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_VERSION_MODULE_8BIT_SECTION
      #undef STOP_SEC_CONST_VERSION_MODULE_8BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_GLOBAL_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_GLOBAL_16BIT_SECTION && defined  START_SEC_GLOBAL_16BIT_SECTION
	  

      #pragma section

      #undef START_SEC_GLOBAL_16BIT_SECTION
      #undef STOP_SEC_GLOBAL_16BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_GLOBAL_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_GLOBAL_32BIT_SECTION && defined  START_SEC_GLOBAL_32BIT_SECTION
	  

      #pragma section

      #undef START_SEC_GLOBAL_32BIT_SECTION
      #undef STOP_SEC_GLOBAL_32BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_GLOBAL_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_GLOBAL_8BIT_SECTION && defined  START_SEC_GLOBAL_8BIT_SECTION
	  

      #pragma section

      #undef START_SEC_GLOBAL_8BIT_SECTION
      #undef STOP_SEC_GLOBAL_8BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_GLOBAL_BOOLEAN Stop Section treatment */
   #elif defined   STOP_SEC_GLOBAL_BOOLEAN_SECTION && defined  START_SEC_GLOBAL_BOOLEAN_SECTION
	  

      #pragma section

      #undef START_SEC_GLOBAL_BOOLEAN_SECTION
      #undef STOP_SEC_GLOBAL_BOOLEAN_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_INTERNAL_VAR_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_INTERNAL_VAR_16BIT_SECTION && defined  START_SEC_INTERNAL_VAR_16BIT_SECTION
	  

      #pragma section

      #undef START_SEC_INTERNAL_VAR_16BIT_SECTION
      #undef STOP_SEC_INTERNAL_VAR_16BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_INTERNAL_VAR_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_INTERNAL_VAR_32BIT_SECTION && defined  START_SEC_INTERNAL_VAR_32BIT_SECTION
	  

      #pragma section

      #undef START_SEC_INTERNAL_VAR_32BIT_SECTION
      #undef STOP_SEC_INTERNAL_VAR_32BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_INTERNAL_VAR_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_INTERNAL_VAR_8BIT_SECTION && defined  START_SEC_INTERNAL_VAR_8BIT_SECTION
	  

      #pragma section

      #undef START_SEC_INTERNAL_VAR_8BIT_SECTION
      #undef STOP_SEC_INTERNAL_VAR_8BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_INTERNAL_VAR_BOOLEAN Stop Section treatment */
   #elif defined   STOP_SEC_INTERNAL_VAR_BOOLEAN_SECTION && defined  START_SEC_INTERNAL_VAR_BOOLEAN_SECTION
	  

      #pragma section

      #undef START_SEC_INTERNAL_VAR_BOOLEAN_SECTION
      #undef STOP_SEC_INTERNAL_VAR_BOOLEAN_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_16BIT_SECTION && defined  START_SEC_VAR_16BIT_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_16BIT_SECTION
      #undef STOP_SEC_VAR_16BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_32BIT_SECTION && defined  START_SEC_VAR_32BIT_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_32BIT_SECTION
      #undef STOP_SEC_VAR_32BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_8BIT_SECTION && defined  START_SEC_VAR_8BIT_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_8BIT_SECTION
      #undef STOP_SEC_VAR_8BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_BOOLEAN Stop Section treatment */
   #elif defined   STOP_SEC_VAR_BOOLEAN_SECTION && defined  START_SEC_VAR_BOOLEAN_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_BOOLEAN_SECTION
      #undef STOP_SEC_VAR_BOOLEAN_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into FARSP_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/


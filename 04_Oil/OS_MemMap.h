/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : OS_MEMMAP.H                                          */
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
/* !Comment: OS Section allocation */
#elif defined   OS_START_SEC_CODE
   #undef  OS_START_SEC_CODE
   #define START_SEC_CODE_SECTION
#elif defined   OS_STOP_SEC_CODE
   #undef  OS_STOP_SEC_CODE
   #define STOP_SEC_CODE_SECTION

#elif defined   OS_START_SEC_CODE_LIB
   #undef  OS_START_SEC_CODE_LIB
   #define START_SEC_CODE_LIB_SECTION
#elif defined   OS_STOP_SEC_CODE_LIB
   #undef  OS_STOP_SEC_CODE_LIB
   #define STOP_SEC_CODE_LIB_SECTION

#elif defined   OS_START_SEC_CONST_UNSPECIFIED
   #undef  OS_START_SEC_CONST_UNSPECIFIED
   #define START_SEC_CONST_UNSPECIFIED_SECTION
#elif defined   OS_STOP_SEC_CONST_UNSPECIFIED
   #undef  OS_STOP_SEC_CONST_UNSPECIFIED
   #define STOP_SEC_CONST_UNSPECIFIED_SECTION

#elif defined   OS_START_SEC_VAR_NOINIT_UNSPECIFIED
   #undef  OS_START_SEC_VAR_NOINIT_UNSPECIFIED
   #define START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
#elif defined   OS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #undef  OS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
   #define STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION

#elif defined   OS_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #undef  OS_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define START_SEC_VAR_INIT_UNSPECIFIED_CPU2_SECTION
#elif defined   OS_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #undef  OS_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
   #define STOP_SEC_VAR_INIT_UNSPECIFIED_CPU2_SECTION

#elif defined   OS_START_SEC_APPL_CODE
   #undef  OS_START_SEC_APPL_CODE
   #define START_SEC_APPL_CODE_SECTION
#elif defined   OS_STOP_SEC_APPL_CODE
   #undef  OS_STOP_SEC_APPL_CODE
   #define STOP_SEC_APPL_CODE_SECTION

#elif defined   OS_START_SEC_CALLOUT_CODE
   #undef  OS_START_SEC_CALLOUT_CODE
   #define START_SEC_CALLOUT_CODE_SECTION
#elif defined   OS_STOP_SEC_CALLOUT_CODE
   #undef  OS_STOP_SEC_CALLOUT_CODE
   #define STOP_SEC_CALLOUT_CODE_SECTION


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

/* !Comment: SEC_CODE_LIB Start Section treatment */
   #elif defined   START_SEC_CODE_LIB_SECTION
	  

      #pragma section ".text" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CONST_UNSPECIFIED Start Section treatment */
   #elif defined   START_SEC_CONST_UNSPECIFIED_SECTION
	  

      #pragma section ".const" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_NOINIT_UNSPECIFIED Start Section treatment */
   #elif defined   START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
	  

      #pragma section ".power_on_cleared_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_POWER_ON_INIT_UNSPECIFIED Start Section treatment */
   #elif defined   START_SEC_VAR_INIT_UNSPECIFIED_CPU2_SECTION
	  

      #pragma section ".data_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_APPL_CODE Start Section treatment */
   #elif defined   START_SEC_APPL_CODE_SECTION
	  

      #pragma section ".text" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CALLOUT_CODE Start Section treatment */
   #elif defined   START_SEC_CALLOUT_CODE_SECTION
	  

      #pragma section ".text" ax

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

/* !Comment: SEC_CODE_LIB Stop Section treatment */
   #elif defined   STOP_SEC_CODE_LIB_SECTION && defined  START_SEC_CODE_LIB_SECTION
	  

      #pragma section

      #undef START_SEC_CODE_LIB_SECTION
      #undef STOP_SEC_CODE_LIB_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CONST_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_SEC_CONST_UNSPECIFIED_SECTION && defined  START_SEC_CONST_UNSPECIFIED_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_UNSPECIFIED_SECTION
      #undef STOP_SEC_CONST_UNSPECIFIED_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_NOINIT_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION && defined  START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
      #undef STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_POWER_ON_INIT_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_SEC_VAR_INIT_UNSPECIFIED_CPU2_SECTION && defined  START_SEC_VAR_INIT_UNSPECIFIED_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_INIT_UNSPECIFIED_CPU2_SECTION
      #undef STOP_SEC_VAR_INIT_UNSPECIFIED_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_APPL_CODE Stop Section treatment */
   #elif defined   STOP_SEC_APPL_CODE_SECTION && defined  START_SEC_APPL_CODE_SECTION
	  

      #pragma section

      #undef START_SEC_APPL_CODE_SECTION
      #undef STOP_SEC_APPL_CODE_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CALLOUT_CODE Stop Section treatment */
   #elif defined   STOP_SEC_CALLOUT_CODE_SECTION && defined  START_SEC_CALLOUT_CODE_SECTION
	  

      #pragma section

      #undef START_SEC_CALLOUT_CODE_SECTION
      #undef STOP_SEC_CALLOUT_CODE_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into OS_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/


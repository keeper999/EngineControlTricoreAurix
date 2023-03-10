/******************************************************************************/
/* !Layer           : HAL                                                     */
/* !Component       : KNWHAL                                                  */
/* !Description     : Knock Window Layer                                      */
/*                                                                            */
/* !File            : KNWHAL_dsadc_cfg.h                                      */
/* !Description     : KNWHAL Configuration                                    */
/*                                                                            */
/* !Reference       :                                                         */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT VALEO all rights reserved                                        */
/******************************************************************************/
/** 11/10/14, 10:16:17: generated by Genecode v2.6.0.0                        */
/******************************************************************************/
#ifndef KNWHAL_DSADC_CFG_H_
#define KNWHAL_DSADC_CFG_H_

#include "IfxDsAdc.h"

#define IFXDMA_CHINCSTEP_1                         (0U)
#define IFXDMA_CHINCDIR_POS                        (1U)
#define IFXDMA_CHINCCIRCULAR_1                     (0U)
#define IFXDMA_CHINCCIRCULAR_2048                  (11U)
#define IFXDMA_CHSHADOW_DST_DIRECT                 (0U)
#define IFXDMA_CHINTERRUPTCONTROL_TCOUNTEQUALSIRDV (2U)


/* configure Address and Interrupt config register
   -- Source DMA Address to be pointing to the result register always
   -- Destination address to be increment by 16 bit
   -- pointer is incremented for both destination and source
   -- Source circular buffer size is 1 byte
   -- Destination circular buffer size is 2048 bytes
   -- Shadow Control is Destination address register
   -- Source Circular enable
   -- Destination Circular disable
   -- time stamp disable
   -- transactionRequestLostInterrupt Disable
   -- Wrap Source and Destination Disable
   -- Interrupt on TCOUNT == IRDV
   -- IRD = 0
 */
#define KNWHAL_DMA_CONFIG       (0x810B088U)
/*
           ( ((uint32)(IFXDMA_CHINCSTEP_1))
           | ((uint32)(IFXDMA_CHINCDIR_POS << 3U))
           | ((uint32)(IFXDMA_CHINCSTEP_1  << 6U))
           | ((uint32)(IFXDMA_CHINCDIR_POS << 7U))
           | ((uint32)(IFXDMA_CHINCCIRCULAR_1 << 8U))
           | ((uint32)(IFXDMA_CHINCCIRCULAR_2048 << 12U))
           | ((uint32)(IFXDMA_CHSHADOW_DST_DIRECT << 16U))
           | ((uint32)(1U << 20U))
           | ((uint32)(0U << 21U))
           | ((uint32)(0U << 22U))
           | ((uint32)(0U << 23U))
           | ((uint32)(0U << 24U))
           | ((uint32)(0U << 25U))
           | ((uint32)(IFXDMA_CHINTERRUPTCONTROL_TCOUNTEQUALSIRDV << 26U))
           | ((uint32)(0U << 28U)))

*/
#define IFXDSADC_DIVMM_6_COUNT  (7U)
#define IFXDSADC_DIVMM_8_COUNT  (7U)
#define IFXDSADC_DIVMM_10_COUNT (5U)

/* OSR Tables */
typedef struct
{
   uint32 SampleRate;
   uint32 Osr;
} IfxDsadc_OsrTbl;

#define KNWHAL_START_SEC_VAR_INIT_UNSPECIFIED
#include "KNWHAL_MemMap.h"

extern IfxDsadc_ChCfg      IfxDsadc_Channel;
extern IfxDsadc_OsrTbl     Spb_100MHz_DIVM_6[IFXDSADC_DIVMM_6_COUNT];
extern IfxDsadc_OsrTbl     Spb_100MHz_DIVM_8[IFXDSADC_DIVMM_8_COUNT];
extern IfxDsadc_OsrTbl     Spb_100MHz_DIVM_10[IFXDSADC_DIVMM_10_COUNT];
extern IfxDsadc_InitConfig IfxDsAdc_InitData;

#define KNWHAL_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "KNWHAL_MemMap.h"

#define KNWHAL_START_SEC_CODE
#include "KNWHAL_MemMap.h"

void KNWHAL_vidGetOsr(uint32 u32Period);

#define KNWHAL_STOP_SEC_CODE
#include "KNWHAL_MemMap.h"

#endif /* KNWHAL_DSADC_CFG_H_ */

/*------------------------------ end of file ---------------------------------*/

/**********************************************************************************************************************/
/* !Layer           : SRVL                                                                                            */
/* !Component       : RTMCLD2                                                                                          */
/* !Description     : Real time measurement of CPU load                                                               */
/*                                                                                                                    */
/* !File            : RTMCLD2_Co.h                                                                                     */
/* !Description     : configurations of the RTMCLD2 component                                                          */
/*                                                                                                                    */
/* !Reference       : PTS_DOC_5385380                                                                                 */
/*                                                                                                                    */
/* Coding language  : C                                                                                               */
/*                                                                                                                    */
/* COPYRIGHT VALEO all rights reserved                                                                                */
/**********************************************************************************************************************/
/* 11/10/14, 10:16:20: generated by Genecode  v2.6.0.0                                                                */
/* From Source Template : RTMCLD2_Co_H.TPL                                                                             */
/**********************************************************************************************************************/

#ifndef RTMCLD2_CO_H
#define RTMCLD2_CO_H



#define RTMCLD2_coPREBUILD         0x01
#define RTMCLD2_coPOSTBUILD        0x02
#define RTMCLD2_coRUNTIME          0x03

#define RTMCLD2_coENABLE    0x55
#define RTMCLD2_coDISABLE   0xAA



/* !MComment: Define if the loop measurement shall be implemented             */
/*     Shall be equal to RTMCLD2_coDISABLE in product software                 */
/*     (RTMCLD2_coENABLE is only for RTMCLD2 validation)                        */
#define RTMCLD2_coLOOP_MEASURE      RTMCLD2_coDISABLE
/* !Comment: Define the Type of RTMCLD2_tudtCpuLoad                            */
#define RTMCLD2_coCONFIGURATION_TYPE   RTMCLD2_coPREBUILD

#endif /* RTMCLD2_CO_H */

/*---------------------------------------------------- end of file ---------------------------------------------------*/

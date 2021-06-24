/**
 ********************************************************************
 * @file    util_file.h
 * @version V2.0.0
 * @date    2019/08/30
 * @brief   This is the header file for "util_file.c", defining the structure and
 * (exported) function prototypes.
 *
 * @copyright (c) 2018-2019 DJI. All rights reserved.
 *
 * All information contained herein is, and remains, the property of DJI.
 * The intellectual and technical concepts contained herein are proprietary
 * to DJI and may be covered by U.S. and foreign patents, patents in process,
 * and protected by trade secret or copyright law.  Dissemination of this
 * information, including but not limited to data and other proprietary
 * material(s) incorporated within the information, in any form, is strictly
 * prohibited without the express written consent of DJI.
 *
 * If you receive this source code without DJI’s authorization, you may not
 * further disseminate the information, and you must immediately remove the
 * source code and notify DJI of its removal. DJI reserves the right to pursue
 * legal actions against you for any loss(es) or damage(s) caused by your
 * failure to do so.
 *
 *********************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef UTIL_FILE_H
#define UTIL_FILE_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <psdk_typedef.h>
#include <stdio.h>

/* Exported constants --------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
typedef struct {
    uint32_t second:5;
    uint32_t minute:6;
    uint32_t hour  :5;
    uint32_t day   :5;
    uint32_t month :4;
    uint32_t year  :7;
} T_UtilFileCreateTime;

/* Exported functions --------------------------------------------------------*/
T_PsdkReturnCode UtilFile_GetCreateTime(const char *filePath, T_UtilFileCreateTime *createTime);
T_PsdkReturnCode UtilFile_GetFileSizeByPath(const char *filePath, uint32_t *fileSize);
T_PsdkReturnCode UtilFile_GetFileDataByPath(const char *filePath, uint32_t offset, uint16_t len,
                                            uint8_t *data, uint16_t *realLen);
T_PsdkReturnCode PsdkFile_Delete(const char *filePath);

T_PsdkReturnCode UtilFile_GetFileSize(FILE *file, uint32_t *fileSize);
T_PsdkReturnCode UtilFile_GetFileData(FILE *file, uint32_t offset, uint16_t len, uint8_t *data, uint16_t *realLen);
bool UtilFile_IsFileExist(const char *filePath);

#ifdef __cplusplus
}
#endif

#endif // UTIL_FILE_H

/************************ (C) COPYRIGHT DJI Innovations *******END OF FILE******/

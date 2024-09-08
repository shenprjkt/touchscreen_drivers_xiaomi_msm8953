/*
 *
 * FocalTech TouchScreen driver.
 *
 * Copyright (c) 2010-2017, FocalTech Systems, Ltd., all rights reserved.
 * Copyright (C) 2019 XiaoMi, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
/************************************************************************
*
* File Name: focaltech_config.h
*
*    Author: Focaltech Driver Team
*
*   Created: 2016-08-08
*
*  Abstract: global configurations
*
*   Version: v1.0
*
************************************************************************/
#ifndef _LINUX_FOCLATECH_CONFIG_H_
#define _LINUX_FOCLATECH_CONFIG_H_

/**************************************************/
/****** G: A, I: B, S: C, U: D  ******************/
/****** chip type defines, do not modify *********/
#define _FT5446     0x54460002


/*************************************************/

/*
 * choose your ic chip type of focaltech
 */
#define FTS_CHIP_TYPE   _FT5446

/******************* Enables *********************/
/*********** 1 to enable, 0 to disable ***********/
/*
 * show debug log info
 * enable it for debug, disable it for release
 */
#define FTS_DEBUG_EN                            0

/*
 * Linux MultiTouch Protocol
 * 1: Protocol B(default), 0: Protocol A
 */
#define FTS_MT_PROTOCOL_B_EN                    1


/*
 * Report Pressure in multitouch
 * 1:enable(default),0:disable
*/
#define FTS_REPORT_PRESSURE_EN                  0

/*
 * Gesture function enable
 * default: disable
 */
#define FTS_GESTURE_EN                          1

/*
 * ESD check & protection
 * default: disable
 */
#define FTS_ESDCHECK_EN                         1

/*
 * Production test enable
 * 1: enable, 0:disable(default)
 */
#define FTS_TEST_EN                             0

/*
 * Glove mode enable
 * 1: enable, 0:disable(default)
 */
#define FTS_GLOVE_EN                            0
/*
 * cover enable
 * 1: enable, 0:disable(default)
 */
#define FTS_COVER_EN                            1
/*
 * Charger enable
 * 1: enable, 0:disable(default)
 */
#define FTS_CHARGER_EN                          0

/*
 * Proximity sensor
 * default: disable
 */
#define FTS_PSENSOR_EN                          0

/*
 * Nodes for tools, please keep enable
 */
#define FTS_SYSFS_NODE_EN                       1
#define FTS_APK_NODE_EN                         1

/*
 * Customer power enable
 * enable it when customer need control TP power
 * default: disable
 */
#define FTS_POWER_SOURCE_CUST_EN                1

/****************************************************/

/********************** Upgrade ****************************/
/*
 * auto upgrade, please keep enable
 */
#define FTS_AUTO_UPGRADE_EN                     1

/*
 * auto upgrade for lcd cfg
 * default: 0
 */
#define FTS_AUTO_UPGRADE_FOR_LCD_CFG_EN         0

/* auto cb check
 * default: disable
 */
#define FTS_AUTO_CLB_EN                         0

/* 
 * Check vendor_id number
 * 0:No check vendor_id (default)  
 * 1/2/3: Check vendor_id for vendor compatibility
 */
#define FTS_GET_VENDOR_ID_NUM                   2

/*
 * vendor_id(s) for vendor(s) to be compatible with.
 * a confirmation of vendor_id(s) is recommended.
 * FTS_GET_VENDOR_ID_NUM == 0, no check vendor id, you may ignore them
 * FTS_GET_VENDOR_ID_NUM >= 1, compatible with FTS_VENDOR_1_ID
 * FTS_GET_VENDOR_ID_NUM >= 2, compatible with FTS_VENDOR_2_ID
 * FTS_GET_VENDOR_ID_NUM == 3, compatible with FTS_VENDOR_3_ID
 */
#define FTS_VENDOR_1_ID                         0x37
#define FTS_VENDOR_2_ID                         0x34
#define FTS_VENDOR_3_ID                         0x00

/*
 * FW_APP.i file for auto upgrade, you must replace it with your own
 * define your own fw_app, the sample one to be replaced is invalid
 * NOTE: if FTS_GET_VENDOR_ID_NUM >= 1, it's the fw corresponding with FTS_VENDOR_1_ID
 */
#define FTS_UPGRADE_FW_APP                      "include/firmware/LQ_E6_FT5446_Ofilm_EBBG_V0f_D01_20180820_app.i"

/*
 * if FTS_GET_VENDOR_ID_NUM >= 2, fw corrsponding with FTS_VENDOR_2_ID
 * define your own fw_app, the sample one is invalid
 */
#define FTS_UPGRADE_FW2_APP                     "include/firmware/LQ_E6_FT5446_Ofilm_Auo_V0a_D01_20180820_app.i"

/*
 * if FTS_GET_VENDOR_ID_NUM == 3, fw corrsponding with FTS_VENDOR_3_ID
 * define your own fw_app, the sample one is invalid
 */
#define FTS_UPGRADE_FW3_APP                     "include/firmware/FT8716_app_sample.i"

/*
 * upgrade stress test for debug
 * enable it for upgrade debug if needed
 * default: disable
 */
#define FTS_UPGRADE_STRESS_TEST                 0
/* stress test times, default: 1000 */
#define FTS_UPGRADE_TEST_NUMBER                 1000

/*********************************************************/

#endif /* _LINUX_FOCLATECH_CONFIG_H_ */


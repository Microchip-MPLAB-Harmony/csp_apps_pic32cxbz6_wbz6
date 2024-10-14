/*
 * Instance header file for PIC32CX2051BZ62132
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version 2024-09-25T20:48:20Z */
#ifndef _PIC32CXBZ62_PFW_INSTANCE_
#define _PIC32CXBZ62_PFW_INSTANCE_


/* ========== Instance Parameter definitions for PFW peripheral ========== */
#define PFW_BOOT_ADDR_BASE                       (0x00000000) /* Physical Start address of boot flash memory (system address). Address must be aligned to the NVR size. */
#define PFW_FIXED_BOOT_SEL_BIT                   (18)       /* The highest bit position that allows address decode to differentiate between fixed and aliased NVR address space. When set, this bit will select fixed NVR space. */
#define PFW_FLASH_SIZE_ON_DEVICE                 (8)        /* Flash size implemented on the device:In a dual panel system, half this value is the size of each panel.0000 = 8KB0001 = 16KB0010 = 32KB0011 = 64KB0100 = 128KB0101 = 256KB0110 = 512KB0111 = 1MB1000 = 2MB1001 = 4MB1010 = 8MB1011 = 16MB1100 - 1111 = RSVD - use 16MBNote: This values does not include the size of the NVR region. */
#define PFW_FRC_PERIOD_MIN                       (95)       /* Minimum FRC period (ns) - pre-calibration Power up timing must be met using an uncalibrated FRCNote: This number must be adjusted for the accuracy of the FRC. */
#define PFW_FRC_PERIOD_NOM                       (119)      /* Nominal FRC period (ns) - post-calibration DPD, Read Mode, etc timing uses a calibrated FRC.Note: This number must be adjusted for the accuracy of the FRC. */
#define PFW_NUM_INTS                             (1)        /* Number of interrupts generated by this macro. */
#define PFW_NVR_NUM_PAGES                        (24)       /* Number of Pages in the NVR regionThe following values must be supported: 8, 24 */
#define PFW_NVR_PANEL_SEL_BIT                    (17)       /* The highest bit position that allows address decode to differentiate between NVR address space in Panel 1 and Panel 2 (if supported). Note: the value for NVR_PANEL_SEL_BIT will typically be FIXED_BOOT_SEL_BIT-1This parameter is not applicable as there is only a single panel */
#define PFW_PAGE_ADDR_MSB                        (11)       /* The MSb of the Address bit that defines the page size */
#define PFW_PFM_CRC_PRESENT                      (1)        /* 0: CRC not supported1: CRC supported */
#define PFW_PFM_DATA_MSB                         (255)      /* The MSb of the PFM Data (post ECC if implement).The following values are supported.127,255 */
#define PFW_PFM_ECC_PRESENT                      (1)        /* 0: ECC not supported1: ECC supported */
#define PFW_PFM_NUM_PANELS                       (1)        /* Number of Flash panels supported in device */
#define PFW_PFM_PNL_ADDR_MSB                     (20)       /* The MSb of the PFM Panel Byte Address.For example, an 18 indicates that each PFM panel is 512KBbecause 2(18+1)=512K. */
#define PFW_PFM_PNL_DATA_MSB                     (271)      /* The MSb of the data including ECCThe following values are supported.139,271 if PFM_ECC_PRESENT==1127,255 if PFM_ECC_PRESENT==0 */
#define PFW_PFM_TCFG_NS                          (5000)     /* LKCFG hold (Tcfg) spec (ns): aka tCFGPORb High to LKCFG high */
#define PFW_PFM_TDPDH_NS                         (8000)     /* DPD Recovery (Tdpdh) delay spec (ns) */
#define PFW_PFM_TDPDS_NS                         (100)      /* DPD Setup (Tdpds) delay spec (ns) */
#define PFW_PFM_TMH_NS                           (100)      /* Read Mode Hold (Tcrh or Tmh) delay spec (ns) */
#define PFW_PFM_TMS_NS                           (5000)     /* Read Mode Setup (Tcrs or Tms) delay spec (ns) */
#define PFW_PFM_TONWAIT_NS                       (6000)     /* Power-up to any operation (ns): aka tONWAITUsed with tCFG as follows:Actual Delay Required = tONWAIT - tCFG */
#define PFW_PFM_TRHR_NS                          (8000)     /* POR recovery (Trhr) delay spec (ns) */
#define PFW_PFM_TRT_NS                           (500)      /* PORb Release Time (Trt) delay spec (ns):defined from rst_reset_por_n=1 to PORb=1 */
#define PFW_RR_NUM_RECORDS                       (8)        /* Number of Redundancy Records per Panel. Redundancy Records are 16-bit values. Panels usually have 1 Redundant Page per 512KB.Note: Valid values are 1,2,4,8,16,32. */
#define PFW_UPB_ADDRL                            (0x800)    /* This parameter is the lowest peripheral bus address the peripheral module owns (i.e., the base address) */
#define PFW_UPB_DEFAULT_SPACING                  (0x0004)   

#endif /* _PIC32CXBZ62_PFW_INSTANCE_ */

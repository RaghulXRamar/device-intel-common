/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#define BTM_DEF_LOCAL_NAME "cht_hr"

#define INTEL_CONTROLLER       TRUE
#define INTEL_LNP_UART         TRUE
#define HCI_MAX_SIMUL_CMDS     1
#define PRELOAD_MAX_RETRY_ATTEMPTS 1
#define PRELOAD_START_TIMEOUT_MS 80000
#define BLE_VND_INCLUDED TRUE
#define BTM_WBS_INCLUDED TRUE
#define BTIF_HF_WBS_PREFERRED TRUE
/* TODO: to be enabled when audio stack is ready */
//#define A2DP_OFFLOAD_INCLUDED TRUE

/* standard scan */
#define BTM_DEFAULT_SCAN_TYPE BTM_SCAN_TYPE_STANDARD

/* WA for RTS control with HSU - CHT only */
#define INTEL_RTS_WORKAROUND TRUE

#endif
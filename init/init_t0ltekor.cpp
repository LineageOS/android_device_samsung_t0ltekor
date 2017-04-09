/*
 * Copyright (C) 2017 The LineageOS Project
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

#include <string>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

void vendor_load_properties()
{
    std::string bootloader = property_get("ro.bootloader");
    if (bootloader.find("E250K") != std::string::npos) {
        /* SHV-E250K (KT Telecom) */
        property_set("ro.product.model", "SHV-E250K");
        property_set("ro.product.device", "t0ltektt");
        property_set("ro.build.description", "t0ltektt-user 4.4.2 KOT49H E250KKTUKNI1 release-keys");
        property_set("ro.build.fingerprint", "samsung/t0ltektt/t0ltektt:4.4.2/KOT49H/E250KKTUKNI1:user/release-keys");
        property_set("ro.build.product", "t0ltektt");
    } else if (bootloader.find("E250L") != std::string::npos) {
        /* SHV-E250L (LG U+) */
        property_set("ro.product.model", "SHV-E250L");
        property_set("ro.product.device", "t0ltelgt");
        property_set("ro.build.description", "t0ltelgt-user 4.4.2 KOT49H E250LKLUKNL1 release-keys");
        property_set("ro.build.fingerprint", "samsung/t0ltelgt/t0ltelgt:4.4.2/KOT49H/E250LKLUKNL1:user/release-keys");
        property_set("ro.build.product", "t0ltelgt");
        property_set("telephony.lteOnCdmaDevice", "1");
        property_set("gsm.sim.operator.alpha", "LG U+");
        property_set("gsm.sim.operator.numeric", "45006");
        property_set("gsm.sim.operator.iso-country", "kr");
        property_set("gsm.operator.alpha", "LG U+");
        property_set("gsm.operator.numeric", "45006");
        property_set("gsm.operator.iso-country", "kr");
        property_set("ro.cdma.home.operator.numeric", "45006");
        property_set("ro.cdma.home.operator.alpha", "LG U+");
        property_set("ro.telephony.default_network", "10");
        property_set("keyguard.no_require_sim", "true");
        property_set("ro.ril.svdo", "true");
    } else if (bootloader.find("E250S") != std::string::npos) {
        /* SHV-E250S (SK Telecom) */
        property_set("ro.product.model", "SHV-E250S");
        property_set("ro.product.device", "t0lteskt");
        property_set("ro.build.description", "t0lteskt-user 4.4.2 KOT49H E250SKSUKNI2 release-keys");
        property_set("ro.build.fingerprint", "samsung/t0lteskt/t0lteskt:4.4.2/KOT49H/E250SKSUKNI2:user/release-keys");
        property_set("ro.build.product", "t0lteskt");
    } else {
        /* Fall back to Generic */
        property_set("ro.product.model", "SHV-E250");
        property_set("ro.product.device", "t0ltekor");
        property_set("ro.build.description", "t0ltekor-user 4.4.2 KOT49H E250SKSUKNI2 release-keys");
        property_set("ro.build.fingerprint", "samsung/t0ltekor/t0ltekor:4.4.2/KOT49H/E250SKSUKNI2:user/release-keys");
        property_set("ro.build.product", "t0ltekor");
    }
    std::string device = property_get("ro.product.device");
    INFO("Setting device to %s\n", device.c_str());
}

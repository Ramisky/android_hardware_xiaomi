/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define LOG_TAG "xiaomi_utils"

#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_
#include <sys/_system_properties.h>
#include <vector>

#include <include/xiaomi_utils.h>

void property_override(std::string prop, std::string value, bool add) {
    auto pi = (prop_info *) __system_property_find(prop.c_str());
    if (pi != nullptr) {
       LOG(INFO) << "Setting property: " << prop.c_str() << " to " << value.c_str();

        if (!__system_property_update(pi, value.c_str(), value.length())) {
           LOG(ERROR) << "Unable to update property: " << prop.c_str() << " to " << value.c_str();
           return -1;
        }
    } else if (add) {
       LOG(INFO) << "Adding property: " << prop.c_str() << " with value " << value.c_str();

        if (!__system_property_add(prop.c_str(), prop.length(), value.c_str(), value.length())) {
           LOG(ERROR) << "Unable to add property: " << prop.c_str() << " with value " << value.c_str();
           return -1;
        }
    }
}

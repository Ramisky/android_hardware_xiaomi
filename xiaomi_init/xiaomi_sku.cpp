/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <android-base/logging.h>
#include <android-base/properties.h>

#include <xiaomi_utils.h>
#include <xiaomi_sku.h>

using android::base::GetProperty;

#define SKU_PROP "ro.boot.product.hardware.sku"

void search_variant(const std::vector<variant_info_t> variants) {
    std::string sku_value = GetProperty(SKU_PROP, "");

    if (sku_value)
        property_override(SKU_PROP, sku_value);
}

/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef XIAOMI_VARIANT_H
#define XIAOMI_VARIANT_H

#include <string>
#include <vector>

typedef struct variant_info {
    std::string hwc_value;
    std::string sku_value;

    std::string sku_value;
} variant_info_t;

void search_variant(const std::vector<variant_info_t> variants);

#endif // XIAOMI_VARIANT_H

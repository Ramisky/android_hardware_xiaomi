/*
 * Copyright (C) 2019 The LineageOS Project
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

#ifndef VENDOR_LINEAGE_TOUCH_V1_1_TOUCHSAMPLING_H
#define VENDOR_LINEAGE_TOUCH_V1_1_TOUCHSAMPLING_H

#include <vendor/lineage/touch/1.1/ITouchSampling.h>

namespace vendor {
namespace lineage {
namespace touch {
namespace V1_1 {
namespace xiaomi {

using ::android::hardware::Return;

class TouchSampling : public ITouchSampling {
  public:
    TouchSampling();

    // Methods from ::vendor::lineage::touch::V1_1::ITouchSampling follow.
    Return<bool> isEnabled() override;
    Return<bool> setEnabled(bool enabled) override;

  private:
    bool mSupportsHighSampleRate;
};

}  // namespace xiaomi
}  // namespace V1_1
}  // namespace touch
}  // namespace lineage
}  // namespace vendor

#endif  // VENDOR_LINEAGE_TOUCH_V1_1_TOUCHSAMPLING_H

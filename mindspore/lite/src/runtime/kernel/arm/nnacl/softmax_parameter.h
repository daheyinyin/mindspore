/**
 * Copyright 2020 Huawei Technologies Co., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MINDSPORE_LITE_SRC_RUNTIME_KERNEL_ARM_NNACL_SOFTMAX_PARAMETER_H_
#define MINDSPORE_LITE_SRC_RUNTIME_KERNEL_ARM_NNACL_SOFTMAX_PARAMETER_H_

#include "src/runtime/kernel/arm/nnacl/op_base.h"

struct SoftmaxParameter {
    OpParameter op_parameter_;
    int32_t axis_;
    int element_size_;
    int n_dim_;
    int input_shape_[4];
};

#endif  // MINDSPORE_LITE_SRC_RUNTIME_KERNEL_ARM_NNACL_SOFTMAX_PARAMETER_H_

// Copyright (c) 2022 FlyCV Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "modules/core/opencl/include/utils/time_utils.h"
#include "time.h"

namespace ocl {

double MarlinTime::get_current_time() {
    struct timespec res;
    clock_gettime(CLOCK_REALTIME, &res);
    return 1000 * res.tv_sec + res.tv_nsec / 1e6;
}
}
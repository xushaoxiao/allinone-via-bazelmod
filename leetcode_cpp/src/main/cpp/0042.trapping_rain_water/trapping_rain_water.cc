// Copyright 2023, Shaoxiao Xu who a personal development. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "leetcode_cpp/src/main/cpp/0042.trapping_rain_water/trapping_rain_water.h"

#include <vector>

namespace leetcode {

using std::vector;

int trap(const vector<int>& height) {
  int left = 0;
  int right = height.size() - 1;
  int left_max = 0;
  int right_max = 0;
  int result = 0;
  while (left < right) {
    if (height[left] < height[right]) {
      if (height[left] >= left_max) {
        left_max = height[left];
      } else {
        result += left_max - height[left];
      }
      ++left;
    } else {
      if (height[right] >= right_max) {
        right_max = height[right];
      } else {
        result += right_max - height[right];
      }
      --right;
    }
  }
  return result;
}

}  // namespace leetcode

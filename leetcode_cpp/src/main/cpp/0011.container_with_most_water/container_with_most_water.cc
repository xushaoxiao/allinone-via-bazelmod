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

#include "leetcode_cpp/src/main/cpp/0011.container_with_most_water/container_with_most_water.h"

#include <algorithm>

namespace leetcode {

int maxArea(const vector<int> &height) {
  int maxArea = 0;
  int left = 0;
  int right = height.size() - 1;

  while (left < right) {
    int area = (right - left) * std::min(height[left], height[right]);
    maxArea = std::max(maxArea, area);
    if (height[left] < height[right]) {
      left++;
    } else {
      right--;
    }
  }

  return maxArea;
}

}  // namespace leetcode
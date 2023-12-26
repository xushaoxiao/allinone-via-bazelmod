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

#include "leetcode_cpp/src/main/cpp/0001.two_sum/two_sum.h"

namespace leetcode {

using std::unordered_map;
using std::vector;

// public:
vector<int> twoSum(const vector<int>& nums, int target) {
  unordered_map<int, int> numMap;
  int n = nums.size();

  for (int i = 0; i < n; i++) {
    int complement = target - nums[i];
    if (numMap.count(complement)) {
      return {numMap[complement], i};
    }
    numMap[nums[i]] = i;
  }

  return {};  // No solution found.
}
}  // namespace leetcode

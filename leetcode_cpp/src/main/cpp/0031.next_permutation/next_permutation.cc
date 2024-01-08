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

#include "leetcode_cpp/src/main/cpp/0031.next_permutation/next_permutation.h"

#include <vector>

namespace leetcode {

using std::reverse;
using std::vector;

void nextPermutation(vector<int>& nums) {
  // Find the first decreasing element from the end.
  int i = nums.size() - 2;
  while (i >= 0 && nums[i + 1] <= nums[i]) {
    --i;
  }
  // Find the first element from the end that is greater than nums[i].
  if (i >= 0) {
    int j = nums.size() - 1;
    while (j >= 0 && nums[j] <= nums[i]) {
      --j;
    }
    swap(nums, i, j);
  }

  // Reverse the elements from i + 1 to the end.
  reverse(nums.begin() + i + 1, nums.end());
}

void swap(vector<int>& nums, int i, int j) {
  int tmp = nums[i];
  nums[i] = nums[j];
  nums[j] = tmp;
}

}  // namespace leetcode

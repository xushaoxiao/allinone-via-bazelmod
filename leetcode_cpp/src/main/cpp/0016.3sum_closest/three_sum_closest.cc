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

#include "leetcode_cpp/src/main/cpp/0016.3sum_closest/three_sum_closest.h"

#include <algorithm>
#include <vector>

namespace leetcode {

using std::abs;
using std::sort;
using std::vector;

// 暴力破解. time complexity: O(n^3)
int threeSumClosest(vector<int>& nums, int target) {
  if (nums.size() < 3) {
    return 0;
  }

  sort(nums.begin(), nums.end());

  int result = nums[0] + nums[1] + nums[2];
  int min_diff = abs(result - target);
  for (int i = 0; i < nums.size() - 2; i++) {
    for (int j = i + 1; j < nums.size() - 1; j++) {
      for (int k = j + 1; k < nums.size(); k++) {
        int sum = nums[i] + nums[j] + nums[k];
        int diff = abs(sum - target);
        if (diff < min_diff) {
          min_diff = diff;
          result = sum;
        }
        if (sum == target) {
          return target;
        }
      }
    }
  }

  return result;
}

// 先排序, 然后使用双指针. time complexity: O(n^2)
int threeSumClosest2(vector<int>& nums, int target) {
  if (nums.size() < 3) {
    return 0;
  }

  vector<int> sorted_nums(nums);
  sort(sorted_nums.begin(), sorted_nums.end());

  int result = sorted_nums[0] + sorted_nums[1] + sorted_nums[2];
  int min_diff = abs(result - target);
  for (int i = 0; i < sorted_nums.size() - 2; i++) {
    int j = i + 1;
    int k = sorted_nums.size() - 1;
    while (j < k) {
      int sum = sorted_nums[i] + sorted_nums[j] + sorted_nums[k];
      int diff = abs(sum - target);
      if (diff < min_diff) {
        min_diff = diff;
        result = sum;
      }

      if (sum < target) {
        j++;
      } else if (sum > target) {
        k--;
      } else {
        return target;
      }
    }
  }

  return result;
}
}  // namespace leetcode

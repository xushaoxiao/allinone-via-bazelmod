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

#include "leetcode_cpp/src/main/cpp/0015.3_sum/three_sum.h"

#include <algorithm>  // Add this line
#include <map>
#include <vector>  // Add this line

namespace leetcode {

using std::map;
using std::sort;
using std::vector;

vector<vector<int>> threeSum(vector<int>& nums) {
  vector<vector<int>> resp;
  int n = nums.size();
  // 排序
  sort(nums.begin(), nums.end());

  for (int i = 0; i < n - 2; i++) {
    // 跳过重复元素 i > 0 && nums[i] != nums[i-1])
    if ((i == 0) || (i > 0) && (nums[i] != nums[i - 1])) {
      int lo = i + 1;
      int hi = n - 1;
      while (lo < hi) {
        if (nums[lo] + nums[hi] == -nums[i]) {
          resp.push_back({nums[i], nums[lo], nums[hi]});

          // while 循环左移lo, 跳过重复元素
          while (lo < hi && nums[lo] == nums[lo + 1]) {
            lo++;
          }
          // while 循环右移hi, 跳过重复元素
          while (lo < hi && nums[hi] == nums[hi - 1]) {
            hi--;
          }
          lo++;
          hi--;
        } else if (nums[lo] + nums[hi] < -nums[i]) {
          lo++;
        } else {
          hi--;
        }
      }
    }
  }

  return resp;
}

vector<vector<int>> threeSum2(vector<int>& nums) {
  vector<vector<int>> resp;

  // hash_map统计每个数字的个数
  map<int, int> counter;
  for (int num : nums) {
    counter[num]++;
  }

  // 数组存所有数字
  vector<int> uniqueNums;
  for (map<int, int>::iterator it = counter.begin(); it != counter.end();
       ++it) {
    uniqueNums.push_back(it->first);
  }
  // 生序排序
  sort(uniqueNums.begin(), uniqueNums.end());

  for (int i = 0; i < uniqueNums.size(); i++) {
    if (uniqueNums[i] * 3 == 0 && counter[uniqueNums[i]] >= 3) {
      resp.push_back({uniqueNums[i], uniqueNums[i], uniqueNums[i]});
    }
    for (int j = i + 1; j < uniqueNums.size(); j++) {
      if (uniqueNums[i] * 2 + uniqueNums[j] == 0 &&
          counter[uniqueNums[i]] > 1) {
        resp.push_back({uniqueNums[i], uniqueNums[i], uniqueNums[j]});
      }
      if (uniqueNums[i] + uniqueNums[j] * 2 == 0 &&
          counter[uniqueNums[j]] > 1) {
        resp.push_back({uniqueNums[i], uniqueNums[j], uniqueNums[j]});
      }
      int c = 0 - uniqueNums[i] - uniqueNums[j];
      if (c > uniqueNums[j] && counter[c] > 0) {
        resp.push_back({uniqueNums[i], uniqueNums[j], c});
      }
    }
  }

  return resp;
}

}  // namespace leetcode

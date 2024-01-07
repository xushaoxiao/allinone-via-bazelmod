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

#include "leetcode_cpp/src/main/cpp/0018.4_sum/four_sum.h"

#include <algorithm>
#include <map>
#include <vector>  // Add this line

namespace leetcode {

using std::map;
using std::sort;
using std::vector;

// 先排序, 使用map记录三个数的和, 然后使用双指针. time complexity: O(n^3)
vector<vector<int>> fourSum(const vector<int>& nums, const int target) {
  vector<vector<int>> result;
  // map计数: 每个数字出现的次数
  map<int, int> counter;
  for (int num : nums) {
    counter[num]++;
  }

  vector<int> unique_nums;
  for (map<int, int>::iterator it = counter.begin(); it != counter.end();
       it++) {
    unique_nums.push_back(it->first);
  }
  sort(unique_nums.begin(), unique_nums.end());

  for (int i = 0; i < unique_nums.size(); i++) {
    if ((int64_t)unique_nums[i] * 4 == target && counter[unique_nums[i]] >= 4) {
      result.push_back(
          {unique_nums[i], unique_nums[i], unique_nums[i], unique_nums[i]});
    }
    for (int j = i + 1; j < unique_nums.size(); j++) {
      if ((int64_t)unique_nums[i] * 3 + (int64_t)unique_nums[j] ==
              (int64_t)target &&
          counter[unique_nums[i]] >= 3) {
        result.push_back(
            {unique_nums[i], unique_nums[i], unique_nums[i], unique_nums[j]});
      }
      if ((int64_t)unique_nums[i] * 2 + unique_nums[j] * 2 == target &&
          counter[unique_nums[i]] >= 2 && counter[unique_nums[j]] >= 2) {
        result.push_back(
            {unique_nums[i], unique_nums[i], unique_nums[j], unique_nums[j]});
      }
      if (unique_nums[i] + unique_nums[j] * 3 == target &&
          counter[unique_nums[j]] >= 3) {
        result.push_back(
            {unique_nums[i], unique_nums[j], unique_nums[j], unique_nums[j]});
      }
      for (int k = j + 1; k < unique_nums.size(); k++) {
        if (unique_nums[i] * 2 + unique_nums[j] + unique_nums[k] == target &&
            counter[unique_nums[i]] >= 2) {
          result.push_back(
              {unique_nums[i], unique_nums[i], unique_nums[j], unique_nums[k]});
        }
        if (unique_nums[i] + unique_nums[j] * 2 + unique_nums[k] == target &&
            counter[unique_nums[j]] >= 2) {
          result.push_back(
              {unique_nums[i], unique_nums[j], unique_nums[j], unique_nums[k]});
        }
        if (unique_nums[i] + unique_nums[j] + unique_nums[k] * 2 == target &&
            counter[unique_nums[k]] >= 2) {
          result.push_back(
              {unique_nums[i], unique_nums[j], unique_nums[k], unique_nums[k]});
        }
        int c = target - unique_nums[i] - unique_nums[j] - unique_nums[k];
        if (c > unique_nums[k] && counter[c] >= 1) {
          result.push_back({unique_nums[i], unique_nums[j], unique_nums[k], c});
        }
      }
    }
  }

  return result;
}

// 先排序, 然后使用双指针. time complexity: O(n^3)
vector<vector<int>> fourSum2(const vector<int>& nums, const int target) {
  vector<vector<int>> result;
  if (nums.size() < 4) {
    return result;
  }

  vector<int> sorted_nums(nums);
  sort(sorted_nums.begin(), sorted_nums.end());

  for (int i = 0; i < sorted_nums.size() - 3; i++) {
    if (i > 0 && sorted_nums[i] == sorted_nums[i - 1]) {
      continue;
    }
    for (int j = i + 1; j < sorted_nums.size() - 2; j++) {
      if (j > i + 1 && sorted_nums[j] == sorted_nums[j - 1]) {
        continue;
      }
      int lo = j + 1;
      int hi = sorted_nums.size() - 1;
      while (lo < hi) {
        int64_t sum = (int64_t)sorted_nums[i] + (int64_t)sorted_nums[j] +
                      (int64_t)sorted_nums[lo] + (int64_t)sorted_nums[hi];
        if (sum == target) {
          result.push_back({sorted_nums[i], sorted_nums[j], sorted_nums[lo],
                            sorted_nums[hi]});
          while (lo < hi && sorted_nums[lo] == sorted_nums[lo + 1]) {
            lo++;
          }
          while (lo < hi && sorted_nums[hi] == sorted_nums[hi - 1]) {
            hi--;
          }
          lo++;
          hi--;
        } else if (sum < target) {
          lo++;
        } else {
          hi--;
        }
      }
    }
  }

  return result;
}

// kSum的通用解法. time complexity: O(n^(k-1))
vector<vector<int>> fourSum3(const vector<int>& nums, const int target) {
  vector<vector<int>> result;
  if (nums.size() < 4) {
    return result;
  }

  vector<int> sorted_nums(nums);
  sort(sorted_nums.begin(), sorted_nums.end());

  return kSum(sorted_nums, target, 4, 0);
}

vector<vector<int>> kSum(const vector<int>& nums, const int target, const int k,
                         const int start) {
  vector<vector<int>> result;
  if (start == nums.size() || nums[start] * k > target ||
      target > nums.back() * k) {
    return result;
  }

  if (k == 2) {
    return twoSum(nums, target, start);
  }

  for (int i = start; i < nums.size(); i++) {
    if (i == start || nums[i - 1] != nums[i]) {
      for (auto& set : kSum(nums, target - nums[i], k - 1, i + 1)) {
        result.push_back({nums[i]});
        result.back().insert(result.back().end(), set.begin(), set.end());
      }
    }
  }

  return result;
}

vector<vector<int>> twoSum(const vector<int>& nums, const int target,
                           const int start) {
  vector<vector<int>> result;
  int lo = start;
  int hi = nums.size() - 1;
  while (lo < hi) {
    int sum = nums[lo] + nums[hi];
    if (sum < target || (lo > start && nums[lo] == nums[lo - 1])) {
      lo++;
    } else if (sum > target ||
               (hi < nums.size() - 1 && nums[hi] == nums[hi + 1])) {
      hi--;
    } else {
      result.push_back({nums[lo++], nums[hi--]});
    }
  }

  return result;
}

}  // namespace leetcode

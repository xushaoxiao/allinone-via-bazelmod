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

#ifndef LEETCODE_CPP_SRC_MAIN_CPP_0018_4_SUM_FOUR_SUM_H_
#define LEETCODE_CPP_SRC_MAIN_CPP_0018_4_SUM_FOUR_SUM_H_

#include <algorithm>  // Add this line
#include <map>
#include <vector>  // Add this line

namespace leetcode {

using std::vector;

// 先排序, 使用map记录三个数的和, 然后使用双指针. time complexity: O(n^3)
vector<vector<int>> fourSum(const vector<int>& nums, const int target);

// 先排序, 然后使用双指针. time complexity: O(n^3)
vector<vector<int>> fourSum2(const vector<int>& nums, const int target);

// kSum, 先排序, 然后使用递归. time complexity: O(n^(k-1))
vector<vector<int>> fourSum3(const vector<int>& nums, const int target);

vector<vector<int>> kSum(const vector<int>& nums, const int target, const int k,
                         const int start);

vector<vector<int>> twoSum(const vector<int>& nums, const int target,
                           const int start);

}  // namespace leetcode

#endif  // LEETCODE_CPP_SRC_MAIN_CPP_0018_4_SUM_FOUR_SUM_H_

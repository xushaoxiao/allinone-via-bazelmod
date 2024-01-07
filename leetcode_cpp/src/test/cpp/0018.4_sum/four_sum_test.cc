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

#include "gtest/gtest.h"

namespace leetcode {

using std::vector;

TEST(Four_Sum, case_one) {
  vector<int> nums = {1, 0, -1, 0, -2, 2};
  int target = 0;
  vector<vector<int>> expected = {{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};
  vector<vector<int>> actual = fourSum(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Four_Sum, case_two) {
  vector<int> nums = {0, 0, 0, 0};
  int target = 0;
  vector<vector<int>> expected = {{0, 0, 0, 0}};
  vector<vector<int>> actual = fourSum(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Four_Sum, case_three) {
  vector<int> nums = {2, 2, 2, 2, 2};
  int target = 8;
  vector<vector<int>> expected = {{2, 2, 2, 2}};
  vector<vector<int>> actual = fourSum(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Four_Sum2, case_one) {
  vector<int> nums = {1, 0, -1, 0, -2, 2};
  int target = 0;
  vector<vector<int>> expected = {{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};
  vector<vector<int>> actual = fourSum2(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Four_Sum2, case_two) {
  vector<int> nums = {0, 0, 0, 0};
  int target = 0;
  vector<vector<int>> expected = {{0, 0, 0, 0}};
  vector<vector<int>> actual = fourSum2(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Four_Sum2, case_three) {
  vector<int> nums = {2, 2, 2, 2, 2};
  int target = 8;
  vector<vector<int>> expected = {{2, 2, 2, 2}};
  vector<vector<int>> actual = fourSum2(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Four_Sum3, case_one) {
  vector<int> nums = {1, 0, -1, 0, -2, 2};
  int target = 0;
  vector<vector<int>> expected = {{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};
  vector<vector<int>> actual = fourSum3(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Four_Sum3, case_two) {
  vector<int> nums = {0, 0, 0, 0};
  int target = 0;
  vector<vector<int>> expected = {{0, 0, 0, 0}};
  vector<vector<int>> actual = fourSum3(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Four_Sum3, case_three) {
  vector<int> nums = {2, 2, 2, 2, 2};
  int target = 8;
  vector<vector<int>> expected = {{2, 2, 2, 2}};
  vector<vector<int>> actual = fourSum3(nums, target);
  EXPECT_EQ(expected, actual);
}

}  // namespace leetcode

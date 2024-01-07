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

#include <vector>

#include "gtest/gtest.h"

namespace leetcode {

using std::vector;

TEST(Three_Sum_Closest, case_one) {
  vector<int> nums = {-1, 2, 1, -4};
  int target = 1;
  int expected = 2;
  int actual = threeSumClosest(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Three_Sum_Closest, case_two) {
  vector<int> nums = {0, 0, 0};
  int target = 1;
  int expected = 0;
  int actual = threeSumClosest(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Three_Sum_Closest, case_three) {
  vector<int> nums = {1, 1, 1, 0};
  int target = -100;
  int expected = 2;
  int actual = threeSumClosest(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Three_Sum_Closest2, case_one) {
  vector<int> nums = {-1, 2, 1, -4};
  int target = 1;
  int expected = 2;
  int actual = threeSumClosest2(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Three_Sum_Closest2, case_two) {
  vector<int> nums = {0, 0, 0};
  int target = 1;
  int expected = 0;
  int actual = threeSumClosest2(nums, target);
  EXPECT_EQ(expected, actual);
}

TEST(Three_Sum_Closest2, case_three) {
  vector<int> nums = {1, 1, 1, 0};
  int target = -100;
  int expected = 2;
  int actual = threeSumClosest2(nums, target);
  EXPECT_EQ(expected, actual);
}

}  // namespace leetcode

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

#include <vector>  // Add this line

#include "gtest/gtest.h"

namespace leetcode {

using std::vector;

TEST(Three_Sum, case_one) {
  vector<int> height = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> expected = {{-1, -1, 2}, {-1, 0, 1}};
  vector<vector<int>> actual = threeSum(height);
  EXPECT_EQ(expected, actual);
}

TEST(Three_Sum, case_two) {
  vector<int> height = {0, 1, 1};
  vector<vector<int>> expected = {};
  vector<vector<int>> actual = threeSum(height);
  EXPECT_EQ(expected, actual);
}

TEST(Three_Sum, case_three) {
  vector<int> height = {0, 0, 0};
  vector<vector<int>> expected = {{0, 0, 0}};
  vector<vector<int>> actual = threeSum(height);
  EXPECT_EQ(expected, actual);
}

}  // namespace leetcode

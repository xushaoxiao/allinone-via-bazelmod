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

#include "leetcode_cpp/src/main/cpp/0027.remove_element/remove_element.h"

#include <vector>  // Add this line

#include "gtest/gtest.h"

namespace leetcode {

using std::vector;

TEST(Remove_Element, case_one) {
  vector<int> nums = {3, 2, 2, 3};
  int val = 3;
  int expected = 2;
  int actual = removeElement(nums, val);
  EXPECT_EQ(expected, actual);
}

TEST(Remove_Element, case_two) {
  vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  int val = 2;
  int expected = 5;
  int actual = removeElement(nums, val);
  EXPECT_EQ(expected, actual);
}
}  // namespace leetcode

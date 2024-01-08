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

#include "gtest/gtest.h"

namespace leetcode {

using std::vector;

TEST(NextPermutation, case_one) {
  vector<int> nums = {1, 2, 3};
  nextPermutation(nums);
  EXPECT_EQ(nums, vector<int>({1, 3, 2}));
}

TEST(NextPermutation, case_two) {
  vector<int> nums = {3, 2, 1};
  nextPermutation(nums);
  EXPECT_EQ(nums, vector<int>({1, 2, 3}));
}

TEST(NextPermutation, case_three) {
  vector<int> nums = {1, 1, 5};
  nextPermutation(nums);
  EXPECT_EQ(nums, vector<int>({1, 5, 1}));
}

}  // namespace leetcode

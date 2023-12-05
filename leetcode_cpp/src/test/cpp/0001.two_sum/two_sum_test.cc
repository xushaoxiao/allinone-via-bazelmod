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

#include "leetcode_cpp/src/main/cpp/0001.two_sum/two_sum.h"

#include "gtest/gtest.h"

namespace leetcode {

  using std::cout;
  using std::endl;

  // Tests twoSum.
  TEST(Two_Sum, Targets_9) {
    std::vector<int> actual = twoSum({2, 7, 11, 15}, 9);
    cout << actual.size() << endl;
    std::vector<int> expected = {0, 1};
    EXPECT_EQ(actual, expected);
  }

  TEST(Two_Sum, Targets_6) {
    // [3,2,4] , 6, [1, 2]
    std::vector<int> expected = {1, 2};
    EXPECT_EQ(twoSum({3, 2, 4}, 6), expected);
  }

  TEST(Two_Sum, Targets_6_1) {
    std::vector<int> expected = {0, 1};
    EXPECT_EQ(twoSum({3, 3}, 6), expected);
  }

}  // namespace leetcode

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

#include "leetcode_cpp/src/main/cpp/0011.container_with_most_water/container_with_most_water.h"

#include "gtest/gtest.h"

namespace leetcode {

TEST(Container_With_Most_Water, case_one) {
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int expected = 49;
  int actual = maxArea(height);
  EXPECT_EQ(expected, actual);
}

TEST(Container_With_Most_Water, case_two) {
  vector<int> height = {1, 1};
  int expected = 1;
  int actual = maxArea(height);
  EXPECT_EQ(expected, actual);
}

}  // namespace leetcode

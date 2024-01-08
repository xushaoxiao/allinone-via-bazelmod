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

#include "leetcode_cpp/src/main/cpp/0028.find_the_index_of_the_first_occurrence_in_a_string/find_the_index_of_the_first_occurrence_in_a_string.h"

#include <string>

#include "gtest/gtest.h"

namespace leetcode {

TEST(FindTheIndexOfTheOccurrenceInAString, case_one) {
  EXPECT_EQ(strStr("hello", "ll"), 2);
}

TEST(FindTheIndexOfTheOccurrenceInAString, case_two) {
  EXPECT_EQ(strStr("aaaaa", "bba"), -1);
}

TEST(FindTheIndexOfTheOccurrenceInAString, case_three) {
  EXPECT_EQ(strStr("leetcode", ""), 0);
}

TEST(FindTheIndexOfTheOccurrenceInAString, case_four) {
  EXPECT_EQ(strStr("", "a"), -1);
}
}  // namespace leetcode

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

#include "leetcode_cpp/src/main/cpp/0061.rotate_list/rotate_list.h"

#include "gtest/gtest.h"

namespace leetcode {

TEST(Rotate_Test, case_one) {
  ListNode* head = new ListNode(1);
  ListNode* node = head;
  for (int i = 2; i <= 5; ++i) {
    node->next = new ListNode(i);
    node = node->next;
  }
  ListNode* result = rotate(head, 2);
  EXPECT_EQ(result->val, 4);
  EXPECT_EQ(result->next->val, 5);
  EXPECT_EQ(result->next->next->val, 1);
  EXPECT_EQ(result->next->next->next->val, 2);
  EXPECT_EQ(result->next->next->next->next->val, 3);
  EXPECT_EQ(result->next->next->next->next->next, nullptr);
}

}  // namespace leetcode

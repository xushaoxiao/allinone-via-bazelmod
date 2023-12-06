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

#include "leetcode_cpp/src/main/cpp/0002.add_two_numbers/add_two_numbers.h"

#include "gtest/gtest.h"

namespace leetcode {

using std::cout;

TEST(Add_To_Numbers, case_two_zores) {
  cout << "Testing case" << std::endl;
  ListNode* l1 = new ListNode(0);
  ListNode* l2 = new ListNode(0);
  ListNode* actual = addTwoNumbers(l1, l2);
  cout << actual->val << std::endl;
  EXPECT_EQ(actual->val, 0);
  EXPECT_EQ(actual->next, nullptr);
}

TEST(Add_To_Numbers, case_two_708) {
  cout << "Testing case" << std::endl;
  // 2,4,3
  ListNode* l1 = new ListNode(2);
  l1->next = new ListNode(4);
  l1->next->next = new ListNode(3);

  // 5,6,4
  ListNode* l2 = new ListNode(5);
  l2->next = new ListNode(6);
  l2->next->next = new ListNode(4);

  // 7,0,8
  ListNode* actual = addTwoNumbers(l1, l2);
  EXPECT_EQ(actual->val, 7);
  EXPECT_EQ(actual->next->val, 0);
  EXPECT_EQ(actual->next->next->val, 8);
}

}  // namespace leetcode

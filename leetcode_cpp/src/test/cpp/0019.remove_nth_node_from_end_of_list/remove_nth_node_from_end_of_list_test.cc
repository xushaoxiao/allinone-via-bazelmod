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

#include "leetcode_cpp/src/main/cpp/0019.remove_nth_node_from_end_of_list/remove_nth_node_from_end_of_list.h"

#include "gtest/gtest.h"

namespace leetcode {

TEST(Remove_Nth_Node_From_End_Of_List, case_one) {
  ListNode* head = new ListNode(1);
  ListNode* node1 = new ListNode(2);
  ListNode* node2 = new ListNode(3);
  ListNode* node3 = new ListNode(4);
  ListNode* node4 = new ListNode(5);
  head->next = node1;
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;

  int n = 2;
  ListNode* expected = new ListNode(1);
  ListNode* expected1 = new ListNode(2);
  ListNode* expected2 = new ListNode(3);
  ListNode* expected3 = new ListNode(5);
  expected->next = expected1;
  expected1->next = expected2;
  expected2->next = expected3;

  ListNode* actual = removeNthFromEnd(head, n);
  EXPECT_EQ(expected->val, actual->val);
}

TEST(Remove_Nth_Node_From_End_Of_List, case_two) {
  ListNode* head = new ListNode(1);
  int n = 1;
  ListNode* expected = nullptr;
  ListNode* actual = removeNthFromEnd(head, n);
  EXPECT_EQ(expected, actual);
}

TEST(Remove_Nth_Node_From_End_Of_List, case_three) {
  ListNode* head = new ListNode(1);
  ListNode* node1 = new ListNode(2);
  head->next = node1;
  int n = 1;
  ListNode* expected = new ListNode(1);
  ListNode* actual = removeNthFromEnd(head, n);
  EXPECT_EQ(expected->val, actual->val);
}

TEST(Remove_Nth_Node_From_End_Of_List2, case_one) {
  ListNode* head = new ListNode(1);
  ListNode* node1 = new ListNode(2);
  ListNode* node2 = new ListNode(3);
  ListNode* node3 = new ListNode(4);
  ListNode* node4 = new ListNode(5);
  head->next = node1;
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;

  int n = 2;
  ListNode* expected = new ListNode(1);
  ListNode* expected1 = new ListNode(2);
  ListNode* expected2 = new ListNode(3);
  ListNode* expected3 = new ListNode(5);
  expected->next = expected1;
  expected1->next = expected2;
  expected2->next = expected3;

  ListNode* actual = removeNthFromEnd2(head, n);
  EXPECT_EQ(expected->val, actual->val);
}

TEST(Remove_Nth_Node_From_End_Of_List2, case_two) {
  ListNode* head = new ListNode(1);
  int n = 1;
  ListNode* expected = nullptr;
  ListNode* actual = removeNthFromEnd2(head, n);
  EXPECT_EQ(expected, actual);
}

TEST(Remove_Nth_Node_From_End_Of_List2, case_three) {
  ListNode* head = new ListNode(1);
  ListNode* node1 = new ListNode(2);
  head->next = node1;
  int n = 1;
  ListNode* expected = new ListNode(1);
  ListNode* actual = removeNthFromEnd2(head, n);
  EXPECT_EQ(expected->val, actual->val);
}

}  // namespace leetcode

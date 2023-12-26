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

namespace leetcode {

/// @brief add two numbers.
/// @param l1 node 1.
/// @param l2 node 2.
/// @return header node.
// public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode* dummyHead = new ListNode(0);
  ListNode* tail = dummyHead;
  int digit1, digit2, carry = 0;

  while (l1 != nullptr || l2 != nullptr || carry != 0) {
    if (l1 != nullptr) {
      digit1 = l1->val;
      l1 = l1->next;
    } else {
      digit1 = 0;
    }
    if (l2 != nullptr) {
      digit2 = l2->val;
      l2 = l2->next;
    } else {
      digit2 = 0;
    }

    int sum = digit1 + digit2 + carry;
    int digit = sum % 10;
    carry = sum / 10;

    ListNode* newNode = new ListNode(digit);
    tail->next = newNode;
    tail = tail->next;
  }

  return dummyHead->next;
}

}  // namespace leetcode

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

namespace leetcode {

// 双指针, 一次遍历, time complexity: O(n)
ListNode* removeNthFromEnd(ListNode* head, int n) {
  ListNode* dummy = new ListNode(0);
  dummy->next = head;

  ListNode* first = dummy;
  ListNode* lo = head;
  ListNode* hi = head;

  while (hi != nullptr) {
    if (n <= 0) {
      first = first->next;
      lo = lo->next;
    }
    n--;
    hi = hi->next;
  }
  first->next = lo->next;
  return dummy->next;
}

// 遍历两次, time complexity: O(n)
ListNode* removeNthFromEnd2(ListNode* head, int n) {
  if (head == nullptr) {
    return nullptr;
  }
  if (n <= 0) {
    return head;
  }
  ListNode* dummy = head;
  int len = 0;
  // 第一次遍历, 计算节点长度
  while (dummy != nullptr) {
    len++;
    dummy = dummy->next;
  }

  if (n > len) {
    return head;
  }

  // 第二次遍历, 删除节点
  // 删除头节点
  if (n == len) {
    dummy = head;
    head = head->next;
    dummy->next = nullptr;
    return head;
  }

  dummy = head;
  int i = 0;
  while (dummy != nullptr) {
    if (i == len - n - 1) {
      ListNode* deleteNode = dummy->next;
      dummy->next = dummy->next->next;
      deleteNode->next = nullptr;
      break;
    }
    len--;
    dummy = dummy->next;
  }
  return head;
}

}  // namespace leetcode

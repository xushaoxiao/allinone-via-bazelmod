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

namespace leetcode {

ListNode* rotate(ListNode* head, int k) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  ListNode* tail = head;
  int len = 1;
  while (tail->next != nullptr) {
    tail = tail->next;
    ++len;
  }
  // Make a circle.
  tail->next = head;
  // Find the new head.
  k = k % len;
  for (int i = 0; i < len - k; ++i) {
    tail = tail->next;
  }

  // Break the circle.
  head = tail->next;
  tail->next = nullptr;
  return head;
}

}  // namespace leetcode

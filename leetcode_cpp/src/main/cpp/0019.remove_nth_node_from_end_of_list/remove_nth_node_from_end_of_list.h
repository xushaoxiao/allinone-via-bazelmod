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

#ifndef LEETCODE_CPP_SRC_MAIN_CPP_0019_REMOVE_NTH_NODE_FROM_END_OF_LIST_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
#define LEETCODE_CPP_SRC_MAIN_CPP_0019_REMOVE_NTH_NODE_FROM_END_OF_LIST_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_

namespace leetcode {

typedef struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
} ListNode;

ListNode* removeNthFromEnd(ListNode* head, int n);

ListNode* removeNthFromEnd2(ListNode* head, int n);

}  // namespace leetcode

#endif  // LEETCODE_CPP_SRC_MAIN_CPP_0019_REMOVE_NTH_NODE_FROM_END_OF_LIST_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_

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

#include <string>

namespace leetcode {

using std::string;

int strStr(const string haystack, const string needle) {
  if (needle.empty()) {
    return 0;
  }
  if (haystack.empty()) {
    return -1;
  }
  int i = 0;
  int j = 0;
  while (i < haystack.size() && j < needle.size()) {
    if (haystack[i] == needle[j]) {
      i++;
      j++;
    } else {
      i = i - j + 1;
      j = 0;
    }
  }
  if (j == needle.size()) {
    return i - j;
  }
  return -1;
}

}  // namespace leetcode

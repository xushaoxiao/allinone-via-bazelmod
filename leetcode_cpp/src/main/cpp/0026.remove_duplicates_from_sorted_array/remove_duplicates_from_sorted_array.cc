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

#include "leetcode_cpp/src/main/cpp/0026.remove_duplicates_from_sorted_array/remove_duplicates_from_sorted_array.h"

#include <vector>  // Add this line

namespace leetcode {

using std::vector;

int removeDuplicates(vector<int>& nums) {
  if (nums.empty()) {
    return 0;
  }

  int i = 0;
  for (int j = 1; j < nums.size(); j++) {
    if (nums[j] != nums[i]) {
      i++;
      nums[i] = nums[j];
    }
  }

  return i + 1;
}
}  // namespace leetcode

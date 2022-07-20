#
# @lc app=leetcode id=567 lang=python3
#
# [567] Permutation in String
#

# @lc code=start
import collections
from typing import Counter


class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1c = collections.Counter(s1)
        size = len(s1)
        for i in range(len(s2)-size):
            if s1c == Counter(s2[i:i+size]):
                return True
        return False


# @lc code=end

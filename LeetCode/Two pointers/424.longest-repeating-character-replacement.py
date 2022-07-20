#
# @lc app=leetcode id=424 lang=python3
#
# [424] Longest Repeating Character Replacement
#

# @lc code=start


import collections


class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        res = 0
        maxf = 0
        c = collections.Counter()
        for i in range(len(s)):
            c[s[i]] += 1
            maxf = max(maxf, c[s[i]])
            if res-maxf < k:
                res += 1
            else:
                c[s[i-res]] -= 1
        return res


# @lc code=end

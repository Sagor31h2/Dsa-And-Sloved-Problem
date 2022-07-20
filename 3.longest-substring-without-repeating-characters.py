#
# @lc app=leetcode id=3 lang=python3
#
# [3] Longest Substring Without Repeating Characters
#

# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        d = {}
        res = 0
        start = -1
        for i in range(len(s)):
            if s[i] in d and d[s[i]] > start:
                start = d[s[i]]
            d[s[i]] = i
            res = max(res, i-start)
        return res

# @lc code=end

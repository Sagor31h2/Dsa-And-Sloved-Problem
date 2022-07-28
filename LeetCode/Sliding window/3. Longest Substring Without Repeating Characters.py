class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        trackPosition = {}
        start = 0
        res = 0
        for i in range(len(s)):
            cur = s[i]
            if cur not in trackPosition:
                trackPosition[cur] = i
            else:
                if start <= trackPosition[cur]:
                    start = trackPosition[cur]+1
                trackPosition[cur] = i
            res = max(res, i-start+1)
        return res

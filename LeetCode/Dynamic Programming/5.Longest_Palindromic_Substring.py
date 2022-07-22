class Solution:
    def longestPalindrome(self, s: str) -> str:
        l = len(s)
        dp = [[False]*l for _ in range(l)]

        for i in range(l):
            dp[i][i] = True

        ans = s[0]
        for j in range(l):
            for i in range(j):
                if s[i] == s[j]:
                    if dp[i+1][j-1] or j == i+1:
                        dp[i][j] = True
                        if j-i+1 > len(ans):
                            ans = s[i:j+1]
        return ans

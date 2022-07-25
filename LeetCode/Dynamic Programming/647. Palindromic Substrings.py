class Solution:
    def countSubstrings(self, s: str) -> int:
        l = len(s)
        count = 0
        dp = [[0]*l for _ in range(l)]

        for i in range(l):
            dp[i][i] = 1
            count += 1

        for r in range(l):
            for l in range(r):
                # print(s[l:r+1])
                if s[l] == s[r]:
                    if r-l == 1 or dp[l+1][r-1] == 1:
                        dp[l][r] = 1
                        count += 1
        return count

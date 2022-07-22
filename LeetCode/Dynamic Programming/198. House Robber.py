class Solution:
    def rob(self, nums: List[int]) -> int:

        ln = len(nums)
        dp = {-1: 0, 0: nums[0]}
        for i in range(1, ln):

            pick = nums[i]
            if (i > 1):
                pick += dp[i-2]
            nonpick = dp[i-1]

            dp[i] = max(pick, nonpick)
           # print(pick,nonpick,dp)

        return dp[ln-1]

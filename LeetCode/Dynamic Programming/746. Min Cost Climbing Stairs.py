class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:

        n = len(cost)
        dp = [-1]*n

        def cos(n):
            if n == 1 or n == 0:
                return cost[n]
            if dp[n] != -1:
                return dp[n]
            dp[n] = cost[n] + min(cos(n-1), cos(n-2))
            return dp[n]

        return min(cos(n-2), cos(n-1))

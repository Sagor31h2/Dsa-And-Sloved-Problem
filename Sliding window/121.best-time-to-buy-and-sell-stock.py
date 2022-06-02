#
# @lc app=leetcode id=121 lang=python3
#
# [121] Best Time to Buy and Sell Stock
#

# @lc code=start
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mx = 0
        mi = prices[0]
        for i in range(len(prices)):
            mi = min(mi, prices[i])
            profit = prices[i]-mi
            mx = max(mx, profit)
        return mx


# @lc code=end

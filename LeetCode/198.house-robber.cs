using System;
/*
 * @lc app=leetcode id=198 lang=csharp
 *
 * [198] House Robber
 */

// @lc code=start
public class Solution
{
    public int Rob(int[] nums)
    {
        if (nums.Length == 0)
        {
            return 0;
        }
        int prev1 = 0;
        int prev2 = 0;
        foreach (var i in nums)
        {
            int Current = Math.Max(prev1 + i, prev2);
            prev1 = prev2;
            prev2 = Current;
        }
        return prev2;

    }
}
// @lc code=end


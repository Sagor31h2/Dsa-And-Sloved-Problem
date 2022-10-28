/*
 * @lc app=leetcode id=70 lang=csharp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
public class Solution
{
    public int ClimbStairs(int n)
    {
        if (n <= 1)
        {
            return 1;
        }
        var prev1 = 1;
        var prev2 = 2;
        for (int i = 3; i <= n; i++)
        {
            var newValue = prev1 + prev2;
            prev1 = prev2;
            prev2 = newValue;
        }
        return prev2;
    }
}
// @lc code=end


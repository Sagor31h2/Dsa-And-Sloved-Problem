/*
 * @lc app=leetcode id=136 lang=csharp
 *
 * [136] Single Number
 */

// @lc code=start
public class Solution
{
    public int SingleNumber(int[] nums)
    {
        int res = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            res = res ^ nums[i];
        }
        return res;
    }
}
// @lc code=end


using System.Globalization;
using System.Collections.Generic;
/*
 * @lc app=leetcode id=46 lang=csharp
 *
 * [46] Permutations
 */

// @lc code=start
public class Solution
{
    int len;
    List<IList<int>> res = new List<IList<int>>();
    List<int> c = new List<int>();

    public IList<IList<int>> Permute(int[] nums)
    {
        len = nums.Length;
        helper(nums);
        return res;

    }
    public void helper(int[] nums)
    {
        if (c.Count == len)
        {
            res.Add(c.ToList());
            return;
        }
        for (int i = 0; i < len; i++)
        {


            if (c.Contains(nums[i]))
            {
                continue;

            }
            c.Add(nums[i]);
            helper(nums);
            c.RemoveAt(c.Count - 1);
        }

    }
}
// @lc code=end


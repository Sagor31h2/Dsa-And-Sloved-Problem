/*
 * @lc app=leetcode id=26 lang=csharp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
public class Solution
{
    public int RemoveDuplicates(int[] nums)
    {
        int count = 1;
        int last = nums[0];

        for (int i = 1; i < nums.Length; i++)
        {
            if (last < nums[i])
            {
                nums[count] = nums[i];
                last = nums[i];
                count += 1;
            }
        }
        return count;
    }
}
// @lc code=end


/*
 * @lc app=leetcode id=191 lang=csharp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
public class Solution
{
    public int HammingWeight(uint n)
    {
        int c = 0;
        while (n > 0)
        {
            c += 1;
            n = (n & (n - 1));
        }
        return c;

    }
}
// @lc code=end


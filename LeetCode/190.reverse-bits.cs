/*
 * @lc app=leetcode id=190 lang=csharp
 *
 * [190] Reverse Bits
 */

// @lc code=start
public class Solution
{
    public uint reverseBits(uint n)
    {
        uint res = 0;

        for (int i = 0; i < 32; i++)
        {
            res = res << 1;
            res = res | (n & 1);
            n = n >> 1;

        }
        return res;
    }
}
// @lc code=end


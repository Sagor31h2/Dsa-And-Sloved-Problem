/*
 * @lc app=leetcode id=120 lang=csharp
 *
 * [120] Triangle
 */

// @lc code=start
public class Solution
{
    public int MinimumTotal(IList<IList<int>> triangle)
    {
        for (int row = triangle.Count - 2; row >= 0; row--)
        {
            for (int column = 0; column <= row; column++)
            {
                triangle[row][column] += Math.Min(triangle[row + 1][column], triangle[row + 1][column + 1]);
            }
        }

        return triangle[0][0];
    }
}
// @lc code=end


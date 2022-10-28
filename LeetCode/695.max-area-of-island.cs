using System;
/*
 * @lc app=leetcode id=695 lang=csharp
 *
 * [695] Max Area of Island
 */

// @lc code=start
public class Solution
{
    int total = 0;
    int i, j;

    public int MaxAreaOfIsland(int[][] grid)
    {
        i = grid.Length;
        j = grid[0].Length;
        for (int m = 0; m < i; m++)
        {
            for (int n = 0; n < j; n++)
            {
                if (grid[m][n] != 0)
                {
                    total = Math.Max(helper(m, n, grid, 0), total);
                }
            }
        }
        return total;
    }
    public int helper(int r, int c, int[][] grid, int co)
    {
        if (r < 0 || c < 0 || r == i || c == j || grid[r][c] == 0)
        {
            return 0;
        }

        grid[r][c] = 0;
        return 1 + helper(r + 1, c, grid, co)
        + helper(r - 1, c, grid, co)
        + helper(r, c + 1, grid, co)
        + helper(r, c - 1, grid, co);

    }
}
// @lc code=end


using System.Collections.Generic;
/*
 * @lc app=leetcode id=994 lang=csharp
 *
 * [994] Rotting Oranges
 */

// @lc code=start
public class Solution
{
    public int OrangesRotting(int[][] grid)
    {
        var freshCount = 0;
        var q = new Queue<(int, int)>();
        var m = grid.Length;
        var n = grid[0].Length;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.Enqueue((i, j));
                }
                else if (grid[i][j] != 0 && grid[i][j] != 2)
                {
                    freshCount += 1;
                }
            }
        }
        var total = 0;
        var dir = new List<(int, int)>{
            (1,0),(-1,0),(0,1),(0,-1)
        };
        while (q.Count != 0 && freshCount > 0)
        {
            total += 1;
            foreach (var item in q)
            {


                var p = q.Dequeue();
                var r = p.Item1;
                var c = p.Item2;


                foreach (var i in dir)
                {
                    var nX = r + i.Item1;
                    var nY = c + i.Item2;

                    if (nX >= 0 && nY >= 0 && nX < m && nY < n)
                    {
                        if (grid[nX][nY] == 1)
                        {
                            grid[nX][nY] = 2;
                            freshCount -= 1;
                            q.Enqueue((nX, nY));
                        }
                    }
                }

            }
        }
        return freshCount == 0 ? total : -1;
    }
}
// @lc code=end


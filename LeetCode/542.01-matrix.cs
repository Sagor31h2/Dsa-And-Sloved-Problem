using Internal;
using System;
using System.Collections.Generic;
/*
 * @lc app=leetcode id=542 lang=csharp
 *
 * [542] 01 Matrix
 */

// @lc code=start
public class Solution
{
    public int[][] UpdateMatrix(int[][] mat)
    {
        var set = new HashSet<(int, int)>();
        var q = new Queue<(int, int)>();

        int m = mat.Length;
        int n = mat[0].Length;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)
                {
                    set.Add((i, j));
                    q.Enqueue((i, j));
                }
            }
        }

        var dir = new List<(int, int)>{
        (1,0),(-1,0),(0,1),(0,-1)
        };

        while (q.Count != 0)
        {
            var p = q.Dequeue();
            var r = p.Item1;
            var c = p.Item2;
            foreach (var i in dir)
            {
                var nX = r + i.Item1;
                var nY = c + i.Item2;
                if (nX >= 0 && nY >= 0 && nX < m && nY < n && !set.Contains((nX, nY)))
                {
                    mat[nX][nY] = mat[r][c] + 1;
                    q.Enqueue((nX, nY));
                    set.Add((nX, nY));
                }
            }
        }
        return mat;

    }
}
// @lc code=end


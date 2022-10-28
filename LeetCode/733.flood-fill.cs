/*
 * @lc app=leetcode id=733 lang=csharp
 *
 * [733] Flood Fill
 */

// @lc code=start
public class Solution
{
    int r, c;
    int[][] res;
    int scolor, gcolor;
    public int[][] FloodFill(int[][] image, int sr, int sc, int color)
    {
        r = image.Length;
        c = image[0].Length;

        scolor = image[sr][sc];
        gcolor = color;
        res = image;
        if (scolor == color)
        {
            return image;
        }
        helper(sr, sc);
        return res;

    }
    public void helper(int sr, int sc)
    {
        if (sr < 0 || sc < 0 || sr == r || sc == c || res[sr][sc] != scolor)
        {
            return;
        }
        res[sr][sc] = gcolor;
        helper(sr + 1, sc);
        helper(sr - 1, sc);
        helper(sr, sc + 1);
        helper(sr, sc - 1);


    }
}
// @lc code=end


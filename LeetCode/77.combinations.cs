
/*
 * @lc app=leetcode id=77 lang=csharp
 *
 * [77] Combinations
 */

// @lc code=start
public class Solution
{
    List<IList<int>> result = new List<IList<int>>();
    List<int> c = new List<int>();

    public IList<IList<int>> Combine(int n, int k)
    {
        helper(n, k, 1);
        return result;
    }
    public void helper(int n, int k, int start)
    {
        if (c.Count == k)
        {
            result.Add(c.ToList());

        }
        for (int i = start; i <= n; i++)
        {
            c.Add(i);
            helper(n, k, i + 1);
            c.RemoveAt(c.Count - 1);
        }
    }
}
// @lc code=end


/*
 * @lc app=leetcode id=617 lang=csharp
 *
 * [617] Merge Two Binary Trees
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution
{
    public TreeNode MergeTrees(TreeNode r1, TreeNode r2)
    {
        if (r1 == null)
        {
            return r2;
        }
        else if (r2 == null)
        {
            return r1;
        }
        r1.val += r2.val;
        r1.left = MergeTrees(r1.left, r2.left);
        r1.right = MergeTrees(r1.right, r2.right);
        return r1;
    }

}
// @lc code=end


/*
 * @lc app=leetcode id=110 lang=java
 *
 * [110] Balanced Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private boolean flag=true;
    public boolean isBalanced(TreeNode root) {
        Check(root);
        return this.flag;
    }

    private int Check(TreeNode root) {
        if (root==null){
            return 0;
        }
        int l=Check(root.left);
        int r=Check(root.right);

        if (Math.abs(l-r)>1){
            this.flag=false;
        }
        return 1+Math.max(l,r);
    }
}
// @lc code=end


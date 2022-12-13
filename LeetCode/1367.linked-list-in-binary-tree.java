class Solution {
    public boolean isSubPath(ListNode head, TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        
        while(!q.isEmpty()) {
            TreeNode temp = q.poll();
            
            if(temp.val==head.val && verify(head, temp))
                return true;
            
            if(temp.left!=null)
                q.offer(temp.left);
            if(temp.right!=null)
                q.offer(temp.right);
        }
        return false;
    }
    
    public boolean verify(ListNode head, TreeNode root) {
        if(head == null)
            return true;
        
        if(root==null || head.val!=root.val)
            return false;
            
        return verify(head.next, root.right) || verify(head.next, root.left);
    }
}

/*
 * @lc app=leetcode id=116 lang=csharp
 *
 * [116] Populating Next Right Pointers in Each Node
 */

// @lc code=start
/*
// Definition for a Node.
public class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
}
*/

public class Solution
{
    public Node Connect(Node root)
    {
        if (root == null) return null;
        var q = new Queue<Node>();
        q.Enqueue(root);
        while (q.Count != 0)
        {
            Node rightNode = null;
            for (int i = q.Count; i > 0; i--)
            {
                var cur = q.Dequeue();
                cur.next = rightNode;
                rightNode = cur;
                if (cur.right != null)
                {
                    q.Enqueue(cur.right);
                    q.Enqueue(cur.left);
                }
            }
        }
        return root;

    }
}
// @lc code=end


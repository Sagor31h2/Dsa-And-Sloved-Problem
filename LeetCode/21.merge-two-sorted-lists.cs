/*
 * @lc app=leetcode id=21 lang=csharp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution
{
    public ListNode MergeTwoLists(ListNode list1, ListNode list2)
    {
        var nL = new ListNode();
        var back = nL;
        while (list1 != null && list2 != null)
        {
            if (list1.val <= list2.val)
            {
                nL.next = list1;
                list1 = list1.next;
            }
            else
            {
                nL.next = list2;
                list2 = list2.next;
            }
            nL = nL.next;
        }
        if (list1 != null)
        {
            nL.next = list1;
        }
        else if (list2 != null)
        {
            nL.next = list2;
        }
        return back.next;
    }
}
// @lc code=end


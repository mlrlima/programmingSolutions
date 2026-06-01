/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode first=new ListNode();
        ListNode i=first;

        if(list1==null && list2==null) return null;
        if(list1==null) list1= new ListNode(101);
        else if(list2==null) list2= new ListNode(101);

        while(true){
            if(list1.val<list2.val){
                i.val=list1.val;

                if(list1.next==null) list1.val=101;
                else list1=list1.next;
            }else{
                i.val=list2.val;
                if(list2.next==null) list2.val=101;
                else list2=list2.next;
            }

            if(list1.val==101 && list2.val==101) break;

            ListNode next=new ListNode();
            i.next=next;
            i=next;
        }

        return first;
    }
}

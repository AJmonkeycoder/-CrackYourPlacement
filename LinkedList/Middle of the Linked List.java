class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode curr = head;
        ListNode run = head;

        while(run!=null && run.next!=null){
            curr = curr.next;
            if(run.next!=null) run = run.next.next;
            else run=null;
            
        }
        return curr;
    }
}
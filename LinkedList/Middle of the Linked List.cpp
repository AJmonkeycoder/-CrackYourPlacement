//876. Middle of the Linked List
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size=0;
        ListNode* temp = head;

        while(temp!=NULL){
            size++;
            temp = temp->next;
        }

        int mid = size/2;
        while(mid){
            head= head->next;
            mid--;
        }

        return head;
    }
};

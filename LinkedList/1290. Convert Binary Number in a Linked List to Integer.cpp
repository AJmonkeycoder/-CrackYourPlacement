class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        ListNode* temp =head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp= temp->next;
        }
        int value=0;
        int j=0;
        for(int i =v.size()-1; i>=0; i--){
            value += (v[i] * (pow(2, j)));
            j++;
        }

        return value;
    }
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* DummyHead = new ListNode(0);
        DummyHead->next = head; 

        ListNode* slow = DummyHead; 
        ListNode* fast = DummyHead; 

        for(int i=0; i<=n; i++){
            fast = fast->next; 
        }

        while(fast) {
            slow = slow->next; 
            fast = fast->next; 
        }

       ListNode* toDelete = slow->next; 
       slow->next = slow->next->next; 
       delete toDelete; 

       ListNode* NewHead = DummyHead->next; 
       delete DummyHead; 
       return NewHead; 
    }
};

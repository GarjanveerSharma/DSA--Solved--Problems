class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;

        ListNode* temp = head; 
        ListNode* prev = NULL;
        ListNode* next = NULL; 

        while(temp != NULL) {
           next = temp->next; 
           temp->next = prev;
           prev = temp; 
           temp = next; 
        } 
        return prev;
    }
};

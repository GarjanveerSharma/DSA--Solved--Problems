class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;

       ListNode* slow = head; 
       ListNode* fast = head; 
       ListNode* prev = NULL; 

       while(fast && fast->next){
        prev = slow; 
        slow = slow->next; 
        fast = fast->next->next; 
       }

       prev->next = NULL; // cut the LL in two parts. its better way to sort

       ListNode* left = sortList(head); 
       ListNode* right = sortList(slow);

       return merge(left , right);  
    }
    private:
   ListNode* merge(ListNode* l1 , ListNode* l2){
    ListNode dummy(0); 
    ListNode* tail = &dummy; 

    while(l1 && l2){
        if(l1->val < l2->val){
            tail->next = l1; 
            l1 = l1->next; 
        }
        else{
            tail->next = l2; 
            l2 = l2->next; 
        }
        tail = tail->next; 
    }
    if(l1) tail->next = l1; // if node left from l1 
    if(l2) tail->next = l2; 

    return dummy.next; 
   }
};

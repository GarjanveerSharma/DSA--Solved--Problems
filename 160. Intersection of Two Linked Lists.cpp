class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         ListNode* NewA = headA; 
         ListNode* NewB = headB; 
         while(NewA != NewB){
            NewA = (NewA == NULL) ? headB : NewA->next; 
            NewB = (NewB == NULL) ? headA : NewB->next; 
         }
         return NewA; 
    }
};

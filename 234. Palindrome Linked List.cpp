class Solution {
public:
    bool isPalindrome(ListNode* head) {
     if(!head || !head->next) return true; 

       ListNode* slow = head; 
       ListNode* fast = head; 

       while(fast && fast->next){
        slow = slow->next; 
        fast = fast->next->next; 
       }
          
    //    reverse the second half .. after mid portion.
    ListNode* secondHalf = reverseList(slow); 

      ListNode* firstHalf = head; 
      ListNode* check = secondHalf; 
      while(check){
        if(firstHalf->val != check->val) return false; 

        firstHalf = firstHalf->next;
        check = check->next; 
      }
       return true; 
    }
    private: 
     // Helper function to reverse linked list
     ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL; 
        ListNode* temp = head; 
        while(temp){
            ListNode* NextNode = temp->next; 
            temp->next = prev; 
            prev = temp; 
            temp = NextNode; 
        }
        return prev; 
     }
};

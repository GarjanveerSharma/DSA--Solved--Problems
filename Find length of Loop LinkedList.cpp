class Solution {
  public:
    int lengthOfLoop(Node *head) {
         if(!head || !head->next) return 0; 
         
         Node* slow = head; 
         Node* fast = head; 
         
         while(fast && fast->next){
             slow = slow->next; 
             fast = fast->next->next;
             
             if(slow == fast){
                 
                 int cnt = 1; 
                 fast = fast->next;
                 
                 while(slow != fast){
                     fast = fast->next; 
                     cnt++; 
                 }
                 return cnt; 
             }
         }
         return 0; 
        
    }
};

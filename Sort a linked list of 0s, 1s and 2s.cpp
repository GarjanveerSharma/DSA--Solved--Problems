class Solution {
  public:
    Node* segregate(Node* head) {
          if(!head || !head->next) return head; 
        
        Node zerodummy(0) , onedummy(0) , twodummy(0); 
        Node* zerotail = &zerodummy; 
        Node* onetail = &onedummy;
        Node* twotail = &twodummy; 
        
        Node* temp = head; 
        while(temp){
            if(temp->data == 0){
                zerotail->next = temp; 
                zerotail = temp; 
            }
             else if(temp->data == 1){
                onetail->next = temp;
                onetail = temp; 
            }
            else{
                twotail->next = temp; 
                twotail = temp; 
            }
            temp = temp->next; 
        }
        
        zerotail->next = onedummy.next ? onedummy.next : twodummy.next; 
        onetail->next = twodummy.next; 
        twotail->next = NULL; 
        
        return zerodummy.next; 
    }
};

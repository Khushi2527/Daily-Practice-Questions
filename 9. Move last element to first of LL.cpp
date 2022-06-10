class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        ListNode* curr= head;
        
        if(curr==NULL || curr->next==NULL){
            return head;
        }
        
        while(curr->next->next!=NULL){
            curr= curr->next;

        }
            curr->next->next= head;
            head= curr->next;
            curr->next= NULL;
             
        return head;
    }
};

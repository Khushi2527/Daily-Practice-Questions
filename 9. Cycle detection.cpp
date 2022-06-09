// Floyd's algorithm //
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* fast= head;
    SinglyLinkedListNode* slow= head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow= slow->next;
        fast= fast->next->next;
        
        if(slow==fast){
            return 1;
        }
        
    }
return 0;

}

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* temp= llist;
    
    if(position==0){
        SinglyLinkedListNode* todelete= llist;        
        llist= llist->next;
        delete todelete;
    }
    else{
        int counter=0;
        while(++counter < position){
            temp= temp->next;
        }
        SinglyLinkedListNode* todelete= temp->next;
        temp->next = temp->next->next;
    
        delete todelete;
    }    
    return llist;
}

// Recursive method //
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    if(llist==NULL || llist->next==NULL){
        return llist;
    }
    SinglyLinkedListNode* newllist= reverse(llist->next);
    llist->next->next= llist;
    llist->next= NULL;
    
    return newllist;

}



// Iterative method // 
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* prevptr = NULL;
    SinglyLinkedListNode* currptr = llist;
    SinglyLinkedListNode* nextptr;
    
    while(currptr!=NULL){
        nextptr= currptr->next;
        currptr->next= prevptr;
        
        prevptr= currptr;
        currptr= nextptr;
    }
    return prevptr;

}

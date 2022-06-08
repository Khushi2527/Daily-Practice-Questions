SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* n = new SinglyLinkedListNode(data);
    
    SinglyLinkedListNode* temp= llist;
    int counter=0;
    while(++counter<position){
        temp= temp->next;
    }
    n->next = temp->next;
    temp->next = n;
    
    return llist;

}

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* n= new SinglyLinkedListNode(data);
	
    if(head==NULL){
        head=n;
        return head;
    }
    
    SinglyLinkedListNode* temp= head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next=n;
    
return head;
}

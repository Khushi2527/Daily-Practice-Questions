int length(Node* head){
    Node* temp=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp= temp->next;
    }
    return l;
}

int intersectPoint(Node* head1, Node* head2)
{
    int l1= length(head1);
    int l2= length(head2);
    int diff=0;
    Node* ptr1;
    Node* ptr2;
    
    if(l1>l2){
        diff= l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        diff= l2-l1;
        ptr1= head2;
        ptr2= head1;
    }
    
    while(diff--){
        ptr1= ptr1->next;
    }
    
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2) return ptr1->data;
        ptr1= ptr1->next;
        ptr2= ptr2->next;
    }
    return -1;
}

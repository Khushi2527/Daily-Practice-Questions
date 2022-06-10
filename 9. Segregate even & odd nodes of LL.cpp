class Solution{
public:
    Node* divide(int N, Node *head){
        Node* curr=head;
        Node* even= new Node(0);
        Node* ptr1= even;
        Node* odd= new Node(0);
        Node* ptr2= odd;
        
        while(curr!=NULL){
            if((curr->data)%2==0){
                ptr1->next= curr;
                ptr1= ptr1->next;
            }
            else{
                ptr2->next= curr;
                ptr2= ptr2->next;
            }
            curr= curr->next;
        }
        ptr2->next=NULL;
        ptr1->next= odd->next;
        head= even->next;
        return head;

    }
};

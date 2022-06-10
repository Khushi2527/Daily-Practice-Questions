class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        Node* temp=head;
        int count0=0;
        int count1=0;
        int count2=0;

        while(temp!=NULL){
            if(temp->data==0) count0++;
            if(temp->data==1) count1++;
            if(temp->data==2) count2++;
            temp= temp->next;
        }
        
        Node* ptr1= head;
        while(ptr1!=NULL){
            if(count0!=0){
                ptr1->data=0;
                count0--;
            }
            else if(count0==0 && count1!=0){
                ptr1->data=1;
                count1--;
            }
            else if(count0==0 && count1==0 && count2!=0){
                ptr1->data=2;
                count2--;
            }
            ptr1= ptr1->next;
        }

   return head;
        
    }
};

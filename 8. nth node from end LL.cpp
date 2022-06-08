//****** nth node from element ************//
int getNthFromLast(Node *head, int n)
{
    Node* temp1= head;
    int count=0;
    while(temp1!=NULL){
        temp1= temp1->next;
        count++;
    }
    if(count<n){
        return -1;
    }
    Node* temp2= head;
    int ct=1;
    while(ct<= count-n){
        temp2= temp2->next;
        ct++;
    }
    return temp2->data;
}


//************** Middle element *****************//
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        if(head==NULL){
            return -1;
        }
        Node* temp1= head;
        int count=0;
        while(temp1!=NULL){
            temp1= temp1->next;
            count++;
        }
        
        Node* temp2= head;
        int ct=1;
        while(ct<=count/2){
            temp2= temp2->next;
            ct++;
        }
        return temp2->data;
    }
};

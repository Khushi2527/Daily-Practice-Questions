class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        int x;
        if(x==0) return 0;
        Node* temp=head;
        int count=0;
        while(++count<x){
            temp= temp->next;
        }
        if(temp->next==NULL) return 0;
        else return 1;

    }
};

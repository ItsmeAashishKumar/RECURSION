void printIthNode(Node *head, int i)
{
    //Write your code here
    int n=0;
    while(n<=i){
        if(head==NULL){
            return;
        }
        else if(n==i){
            cout<<head->data;
        }
        head=head->next;
        n++;
    }
    
    
}
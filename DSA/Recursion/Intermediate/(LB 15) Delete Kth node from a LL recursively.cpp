//https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
//https://www.geeksforgeeks.org/recursive-function-delete-k-th-node-linked-list/
void dnode(Node *p,Node *q,int cnt,int x){
    if(p &&cnt==x){
        q->next=p->next;
        delete p;
        return;
    }
    q=p;
    dnode(p->next,q,cnt+1,x);
}
Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1){
        Node*p=head;
        head=head->next;
        delete p;
        return head;
    }else{
        Node*p=head,*q=NULL;
        dnode(p,q,1,x);
        return head;
    }
}

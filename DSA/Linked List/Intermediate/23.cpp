Node* reverseDLL(Node * head)
{
    //Your code here
    Node *p=head;
    while(p){
        swap(p->next,p->prev);
        if(p->prev==NULL){
            head=p;
            break;
        }
        p=p->prev;
    }
    return head;
}


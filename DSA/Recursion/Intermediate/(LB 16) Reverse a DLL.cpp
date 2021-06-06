//https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
//https://www.geeksforgeeks.org/reverse-doubly-linked-list-using-recursion/
Node* reverseDLL(Node * head)
{
    //Your code here
   if(head==NULL){
       return NULL;
   }
   swap(head->prev,head->next);
   if(head->prev==NULL){
       return head;
   }else{
       return reverseDLL(head->prev);
   }
}


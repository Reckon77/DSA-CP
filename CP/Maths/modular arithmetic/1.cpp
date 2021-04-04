//https://practice.geeksforgeeks.org/problems/modular-node/1/?category[]=Modular%20Arithmetic&category[]=Modular%20Arithmetic&page=1&query=category[]Modular%20Arithmeticpage1category[]Modular%20Arithmetic
int modularNode(Node* head, int k)
{
	// Code here
	int i=1,d=-1;
	Node*p=head;
	while(p){
	    if(i%k==0){
	        d=p->data;
	    }
	    p=p->next;
	    i++;
	}
	return d;
}

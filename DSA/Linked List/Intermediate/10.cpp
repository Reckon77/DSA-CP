#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *head=NULL;
void createHead(int x){
	if(head==NULL){
		head= new Node;
		head->data=x;
		head->next=NULL;
	}
}
void begin(int x){
	if(head!=NULL){
		Node *t=new Node;
		t->data=x;
		t->next=head;
		head=t;
	}else{
		createHead(x);
	}
}
void end(int x){
	if(head!=NULL){
		Node *p=head,*t=new Node;
		t->data=x;
		t->next=NULL;
		while(p->next){
			p=p->next;
		}
		p->next=t;
	}else{
		createHead(x);
	}
}
void print(){
	Node *p=head;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
void lasttofirst(){
	Node *p=head,*q=NULL;
	while(p->next){
		q=p;
		p=p->next;
	}
	q->next=NULL;
	p->next=head;
	head=p;
}


int main(){
	createHead(5);
	begin(2);
	begin(3);
	begin(1);
	begin(1);
	begin(1);
	end(10);
	print();
	lasttofirst();
	print();

}

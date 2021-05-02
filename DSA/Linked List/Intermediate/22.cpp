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
void makecircular(){
	Node*p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=head;
}
void printCircular(){
	Node *p=head;
	do{
		cout<<p->data<<" ";
		p=p->next;	
	}while(p!=head);
	cout<<endl;
}
void exchange(){
	Node *p=head;
	while(p->next->next!=head){
		p=p->next;
	}
	p->next->next=head->next;
	head->next=p->next;
	p->next=head;
	head=head->next;
	
}
int main(){
	createHead(5);
	begin(2);
	begin(3);
	begin(8);
	begin(10);
	begin(16);
	makecircular();
	printCircular();
	exchange();
	printCircular();

}

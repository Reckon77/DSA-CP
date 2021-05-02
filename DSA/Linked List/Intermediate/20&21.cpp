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

int deleten(int pos){
	int x=-1;
	if(head==NULL){
		return x;
	}else if(pos==1){
		Node *p=head;
		x=head->data;
		head=head->next;
		delete p;
		return x;	
	}else{
		Node *p=head,*q=NULL;
		for(int i=0;i<pos-1&&p;i++){
			q=p;
			p=p->next;
		}
		if(p){
			x=p->data;
			q->next=p->next;
			delete p;
			return x;
		}
	}
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
int countnodes(){
	int x=0;
	if(head==NULL){
		return x;
	}else{
		Node *p=head;
		do{
			x++;
			p=p->next;
		}while(p!=head);
		return x;
	}
}
void delc(int x){
	if(head->data==x){
		Node *p=head,*t=head;
		while(p->next!=head){
			p=p->next;
		}
		p->next=head->next;
		head=head->next;
		delete t;
	}else{
		Node *p=head,*q=NULL;
		do{
			q=p;
			p=p->next;
			
		}while(p!=head && p->data!=x);
		if(p==head){
			return;
		}else{
			q->next=p->next;
			delete p;
		}
	}
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
	delc(2);
	printCircular();
	cout<<endl<<countnodes();
	

}

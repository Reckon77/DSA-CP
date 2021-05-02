//https://www.geeksforgeeks.org/count-triplets-sorted-doubly-linked-list-whose-sum-equal-given-value-x/
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
};
node *head=NULL;
void createhead(int x){
	if(head!=NULL){
		return;
	}
	node *t;
	t=new node;
	t->data=x;
	t->next=NULL;
	t->prev=NULL;
	head=t;
}
void atBegin(int x){
	if(head==NULL){
		createhead(x);
	}else{
		node *t=new node;
		t->data=x;
		t->next=head;
		t->prev=NULL;
		head->prev=t;
		head=t;
	}
}
void atEnd(int x){
	if(head==NULL){
		createhead(x);
	}else{
		node*p=head,*t=new node;
		while(p->next!=NULL){
			p=p->next;
		}
		t->data=x;
		t->next=NULL;
		t->prev=p;
		p->next=t;	
	}
}
int length(){
	if(head==NULL){
		return 0;
	}else{
		int len=0;
		node*p=head;
		while(p){
			len++;
			p=p->next;
		}
		return len;
	}
}
void print(){
	node *p=head;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
void twosum(int x,node *p,int d){
	node *q=head;
	while(q->next){
		q=q->next;
	}
	node *temp=p;
	while(p&&q!=temp->prev&&p!=q){
		if(p->data+q->data>x){
			q=q->prev;
		}else if(p->data+q->data<x){
			p=p->next;
		}else{
			cout<<d<<" "<<p->data<<" "<<q->data<<endl;
			break;
//			p=p->next;
//			q=q->prev;
		}
	}
}
void threesum(int x){
	node *z=head;
	while(z->next->next->next){
		int d=x-z->data;
		if(d>=0){
			twosum(d,z->next,z->data);
		}
		z=z->next;
	}
}
int main(){
	atEnd(1);
	atEnd(2);
	atEnd(4);
	atEnd(5);
	atEnd(6);
	atEnd(8);
	atEnd(9);

	print();
	threesum(17);
}

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

void print(){
	node *p=head;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
void rotate(int n){
	node *last=head;
	while(last->next){
		last=last->next;
	}
	head->prev=last;
	last->next=head;
	node *p=head;
	for(int i=0;i<n-1&&p;i++){
		p=p->next;
	}
	head=p->next;
	head->prev=NULL;
	p->next=NULL;
}
int main(){
	atEnd(1);
	atEnd(2);
	atEnd(3);
	atEnd(4);
	atBegin(0);
	atBegin(-1);
	atBegin(-2);
	atBegin(-3);
	atBegin(-4);
	print();
	rotate(8);
		print();

}

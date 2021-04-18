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
int search(int x){
	if(head==NULL){
		return -1;
	}else{
		int ind=0;
		node*p=head;
		while(p){
			ind++;
			if(p->data==x)
				return ind;
			p=p->next;
		}
		return -1;
	}
}
int deletenode(int pos){
	int x=-1;
	if(head==NULL){
		return x;
	}else if(pos==1){
		node *p=head;
		x=head->data;
		if(head->next){
			head->next->prev=NULL;
			head=head->next;
		}
		delete p;
		return x;
	}else{
		node *p=head;
		for(int i=0;i<pos-1&&p;i++){
			p=p->next;
		}
		if(p){
			p->data=x;
			p->prev->next=p->next;
			if(p->next){
				p->next->prev=p->prev;
			}
			delete p;
			return x;
		}
	}
}
int nthnode(int pos){
	if(head==NULL){
		return -1;
	}else{
		node *p=head;
		for(int i=1;i<pos&&p;i++){
			p=p->next;
		}
		if(p){
			return p->data;
		}
		return -1;
	}
}
int count(int x){
	int cnt=0;
	node *p=head;
	while(p){
		if(p->data==x)
			cnt++;
		p=p->next;
	}
	return cnt;
}
int minimum(){
	int mini=INT_MAX;
	node*p=head;
	while(p){
		mini=min(mini,p->data);
		p=p->next;
	}
	return mini;
}
int maximum(){
	int maxi=INT_MIN;
	node*p=head;
	while(p){
		maxi=max(maxi,p->data);
		p=p->next;
	}
	return maxi;
}
void ccd(){
	node *p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=head;
	head->prev=p;
}
void printCircular(){
	node *p=head;
	do{
		cout<<p->data<<" ";
		p=p->next;	
	}while(p!=head);
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
//	print();
//	deletenode(5);
//	print();
//	cout<<length()<<endl;
//	cout<<search(0)<<endl;
//	cout<<nthnode(5)<<endl;
ccd();
printCircular();
}

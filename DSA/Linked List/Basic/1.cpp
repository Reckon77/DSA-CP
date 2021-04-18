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
int length(){
	if(head==NULL){
		return 0;
	}else{
		int len=0;
		Node*p=head;
		while(p){
			len++;
			p=p->next;
		}
		return len;
	}
}
int search(int x){
	if(head==NULL){
		return -1;
	}else{
		int ind=0;
		Node*p=head;
		while(p){
			ind++;
			if(p->data==x)
				return ind;
			p=p->next;
		}
		return -1;
	}
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
int nthnode(int pos){
	if(head==NULL){
		return -1;
	}else{
		Node *p=head;
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
	Node *p=head;
	while(p){
		if(p->data==x)
			cnt++;
		p=p->next;
	}
	return cnt;
}
int minimum(){
	int mini=INT_MAX;
	Node*p=head;
	while(p){
		mini=min(mini,p->data);
		p=p->next;
	}
	return mini;
}
int maximum(){
	int maxi=INT_MIN;
	Node*p=head;
	while(p){
		maxi=max(maxi,p->data);
		p=p->next;
	}
	return maxi;
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
	deleten(5);
	print();
//	cout<<length();
//	cout<<endl<<search(10)<<endl;
//	cout<<nthnode(5)<<endl;
//	cout<<count(1)<<endl;
//	cout<<minimum()<<" "<<maximum()<<endl;
//	makecircular();
//	printCircular();
}

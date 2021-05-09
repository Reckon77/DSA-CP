#include <bits/stdc++.h>
using namespace std;
struct stk{
	int top;
	int size;
	int *st;
};
void init(stk *s,int size){
	s->top=-1;
	s->size=size;
	s->st=new int[size];
}
void push(stk *s,int x){
	if(s->top==s->size-1){
		cout<<"Stack overflow"<<endl;
		return;
	}
	s->top++;
	s->st[s->top]=x;
}
int pop(stk *s){
	int x=-1;
	if(s->top==-1){
		cout<<"Stack underflow"<<endl;
		return x;
	}
	x=s->st[s->top];
	s->top--;
	return x;
}
int peek(stk *s){
	if(s->top==-1){
		return -1;
	}
	return s->st[s->top];
}
bool isempty(stk *s){
	if(s->top==-1)
		return true;
	return false;
}
bool search(stk *s,int x){
	if(isempty(s))
		return 0;
	for(int i=0;i<=s->top;i++){
		if(s->st[i]==x)
			return 1;
	}
	return 0;
}
int main(){
	stk a1;
	init(&a1,5);
	push(&a1,1);
	push(&a1,12);
	push(&a1,13);
	push(&a1,14);
		for(int i=0;i<6;i++){
			cout<<pop(&a1)<<" ";
		}
cout<<peek(&a1);
cout<<search(&a1,18);
}

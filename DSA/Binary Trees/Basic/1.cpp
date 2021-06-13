#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *lchild,*rchild;
};
void postorder(node *p){
	if(p==NULL)return;
	cout<<p->data<<" ";
	postorder(p->lchild);
	postorder(p->rchild);
}
void preorder(node *p){
	if(p==NULL)return;
	preorder(p->lchild);
	preorder(p->rchild);
	cout<<p->data<<" ";
}
void inorder(node *p){
	if(p==NULL)return;
	inorder(p->lchild);
	cout<<p->data<<" ";
	inorder(p->rchild);
}
void create(node *root,int x){
	root=new node;
	root->data=x;
	root->lchild=root->rchild=NULL;
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node *p=q.front();
		q.pop();
		int x,y;
		cout<<"Enter lchild and rchild of "<<p->data<<endl;
		cin>>x>>y;
		if(x!=-1){
		node *temp=new node;
		temp->data=x;
		temp->lchild=temp->rchild=NULL;
		p->lchild=temp;
		q.push(temp);
		}
		if(y!=-1){
			node *temp=new node;
		temp->data=y;
		temp->lchild=temp->rchild=NULL;
		p->rchild=temp;
		q.push(temp);
		}
	}
	preorder(root);
}
int main(){
	node *root=NULL;
	create(root,1);
	
}

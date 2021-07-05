#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node*left,*right;
	Node(int val){
		data=val;
		left=right=NULL;
	}
};
void insert(Node *root,int x){
		Node *p=root,*r=NULL;
		while(p){     
			r=p;
			if(p->data==x)return;
			if(p->data>x){
				p=p->left;
			}else{
				p=p->right;
			}
		}
		p=new Node(x);
		if(x>r->data){
			r->right=p;
		}else{
			r->left=p;
		}
	}
void inorder(Node *root){
	if(!root)return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void levelorder(Node *root){
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
		Node *temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left){
			q.push(temp->left);
		}
			if(temp->right){
			q.push(temp->right);
		}
	}
}
bool Rsearch(Node *root,int x){
	if(!root)return false;
	if(root->data==x)return true;
	if(x>root->data){
		return Rsearch(root->right,x);
	}else{
		return Rsearch(root->left,x);
	}
}
int main(){
	Node *root=NULL;
	root=new Node(3);
	insert(root,2);
	insert(root,5);
	insert(root,1);
	insert(root,4);
	inorder(root);  
	cout<<endl;
	levelorder(root);
	cout<<endl<<Rsearch(root,8);

}

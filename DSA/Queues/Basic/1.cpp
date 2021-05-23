#include<iostream>
using namespace std;
struct queue{
	int front,rear,size;
	int *q;
};
void init(queue *Q,int n){
	Q->front=Q->rear=-1;
	Q->size=n;
	Q->q=new int[n];
}
void enqueue(queue *Q,int x){
	if(Q->rear==Q->size-1){
		cout<<"overflow";
	}else{
		Q->rear++;
		Q->q[Q->rear]=x;
	}
}
int dequeue(queue *Q){
	int x=-1;
	if(Q->front==Q->rear){
		cout<<"underflow";
		return x;
	}
	Q->front++;
	x=Q->q[Q->front];
	return x;
}
int front(queue Q){
	if(Q.front==Q.rear){
		cout<<"underflow";
		return -1;
	}
	return Q.q[Q.front+1];
}
void display(queue Q){
	for(int i=Q.front+1;i<=Q.rear;i++){
		cout<<Q.q[i]<<" ";
	}
	cout<<endl;
}
int main(){
	queue a;
	init(&a,10);
	enqueue(&a,5);
	enqueue(&a,8);
	enqueue(&a,19);
	enqueue(&a,15);
	enqueue(&a,6);
	display(a);
	dequeue(&a);
	dequeue(&a);
	display(a);
	cout<<front(a);
}

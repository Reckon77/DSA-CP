//https://practice.geeksforgeeks.org/problems/special-stack/1#
//https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/
int minele;
void push(stack<int>& s, int a){
	// Your code goes here
	if(s.empty()){
	    s.push(a);
	    minele=a;
	}else if(a>=minele){
	    s.push(a);
	}else{
	    minele=a;
	    s.push(2*a-minele);
	}
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)return true;
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	if(s.empty())return -1;
	int x;
	if(s.top()>=minele){
	    x=s.top();
	    s.pop();
	    return x;
	}else{
	    x=minele;
	    minele=2*minele-s.top();
	    s.pop();
	    return x;
	}
}

int getMin(stack<int>& s){
	// Your code goes here
	return minele;
}

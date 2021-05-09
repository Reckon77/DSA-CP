//https://practice.geeksforgeeks.org/problems/special-stack/1#
//https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/
int current_min;
void push(stack<int>& s, int a){
	// Your code goes here
   if(s.empty()) {
        current_min = a;
        s.push(a);
        return;
    }
    if(a < current_min) {
        s.push(2*a- current_min);
        current_min = a;
    }
    else {
        s.push(a);
    }
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n){
	    return true;
	}
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	 if(s.empty()) {
        return -1;
    }
    int x = s.top();
    s.pop();
    if(x < current_min) {
        return current_min;
        current_min = 2 * current_min - x;
    }
    else{
        return x;
    }
}

int getMin(stack<int>& s){
	// Your code goes here
return current_min;
}

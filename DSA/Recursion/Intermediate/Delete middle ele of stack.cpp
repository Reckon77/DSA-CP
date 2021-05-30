//https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        if (s.size() == ceil((float)sizeOfStack/2.0)) {
		s.pop();
		return;
	}
	int x = s.top();
	s.pop();
	deleteMid(s, sizeOfStack);
	s.push(x);
    }

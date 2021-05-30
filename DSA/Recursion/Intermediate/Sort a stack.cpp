//Sort a stack (algo1)
void ssort(stack<int>&s) {
	if (s.size() == 1) {
		return;
	}
	int x = s.top();
	s.pop();
	ssort(s);
	stack<int>k;
	while (!s.empty() && s.top() > x) {
		k.push(s.top());
		s.pop();
	}
	s.push(x);
	while (!k.empty()) {
		s.push(k.top());
		k.pop();
	}
}
//Sort a stack (algo2)
void insert(stack<int>&s, int temp) {
	if (s.size() == 0 || s.top() <= temp) {
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	insert(s, temp);
	s.push(val);
}
void ssort(stack<int>&s) {
	if (s.size() == 1) {
		return;
	}
	int x = s.top();
	s.pop();
	ssort(s);
	insert(s, x);
}

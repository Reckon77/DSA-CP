 //https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1/
 int getMaxWidth(Node* root) {

        // Your code here
    queue<Node*>q;
	q.push(root);
	int maxwidth=INT_MIN;
	while (!q.empty()) {
		int n = q.size();
		maxwidth=max(maxwidth,n);
		while (n--) {
			Node *p = q.front();
			q.pop();
			if (p->left) {
				q.push(p->left);
			}
			if (p->right) {
				q.push(p->right);
			}
		}
	}
	return maxwidth;
    }

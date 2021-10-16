//https://www.geeksforgeeks.org/preorder-postorder-and-inorder-traversal-of-a-binary-tree-using-a-single-stack/
//TC - O(3N) SC - O(4N)
#include <bits/stdc++.h>
using namespace std;

// Structure of the
// node of a binary tree
struct Node {
	int data;
	struct Node *left, *right;

	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

// Function to print all nodes of a
// binary tree in Preorder, Postorder
// and Inorder using only one stack
void allTraversal(Node* root)
{
	// Stores preorder traversal
	vector<int> pre;

	// Stores inorder traversal
	vector<int> post;

	// Stores postorder traversal
	vector<int> in;

	// Stores the nodes and the order
	// in which they are currently visited
	stack<pair<Node*, int> > s;

	// Push root node of the tree
	// into the stack
	s.push(make_pair(root, 1));

	// Traverse the stack while
	// the stack is not empty
	while (!s.empty()) {
	pair<Node*,int> temp=s.top();
	s.pop();
	if(temp.second==1){
		pre.push_back(temp.first->data);
		temp.second++;
		s.push(temp);
		if(temp.first->left){
			s.push(make_pair(temp.first->left,1));
		}
	}else if(temp.second==2){
		in.push_back(temp.first->data);
		temp.second++;
		s.push(temp);
		if(temp.first->right){
			s.push(make_pair(temp.first->right,1));
		}
	}else{
			post.push_back(temp.first->data);
	}
	
	}

	cout << "Preorder Traversal: ";
	for (int i = 0; i < pre.size(); i++) {
		cout << pre[i] << " ";
	}
	cout << "\n";

	// Printing Inorder
	cout << "Inorder Traversal: ";

	for (int i = 0; i < in.size(); i++) {
		cout << in[i] << " ";
	}
	cout << "\n";

	// Printing Postorder
	cout << "Postorder Traversal: ";

	for (int i = 0; i < post.size(); i++) {
		cout << post[i] << " ";
	}
	cout << "\n";
}

// Driver Code
int main()
{

	// Creating the root
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	// Function call
	allTraversal(root);

	return 0;
}


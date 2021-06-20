//https://www.geeksforgeeks.org/construct-binary-tree-string-bracket-representation/
//Recursive approach
//https://www.youtube.com/watch?v=BH_btihSwVM
#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, int> umap;
void inputarr(int arr[], int n) {REP(i, 0, n) {cin >> arr[i];}}
struct Node {
	int data;
	Node *left;
	Node *right;
	Node(int x) {
		data = x;
		left = NULL;
		right = NULL;
	}
};
bool isDigit(char c) {
	if (c >= '0' && c <= '9') {
		return true;
	}
	return false;
}
int toDigit(char c) {
	return (int)c - 48;
}
int start = 0;
Node *construct(string s) {
	if (start >= s.size())return NULL;
	bool neg = false;
	if (s[start] == '-') {
		neg = true;
		start++;
	}
	int num = 0;
	while (start < s.size() && isDigit(s[start])) {
		num = (num * 10) + toDigit(s[start]);
		start++;
	}
	if (neg) {
		num = -num;
	}
	Node *temp = new Node(num);
	if (start >= s.size()) {
		return temp;
	}
	if (s[start] == '(') {
		start++;
		temp->left = construct(s);
	}
	if (s[start] == ')') {
		start++;
		return temp;
	}
	if (s[start] == '(') {
		start++;
		temp->right = construct(s);
	}
	if (s[start] == ')') {
		start++;
		return temp;
	}
	return temp;
}
void preorder(Node *root) {
	if (!root)return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(Node *root) {
	if (!root)return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	Node *root = construct(s);
	preorder(root);
	cout << endl;
	inorder(root);



}

#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define f first
#define s second
#define pb push_back
//Representaion of Binary tree in C++
#define mp make_pair
#define endl "\n"
#define mod 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, int> umap;
void inputarr(int arr[], int n) {REP(i, 0, n) {cin >> arr[i];}}
struct node {
	int data;
	node *left;
	node *right;
	node(int val) {
		data = val;
		left = right = NULL;
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//    1
	//   / \ 
	//  2   3
	node *root = new node(1);
	root->left = new node(2);
	root->right = new node(3);


}

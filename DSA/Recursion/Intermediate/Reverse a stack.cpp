//Reverse a stack using recursion
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

void pushatb(stack<int>&s, int x) {
	if (s.size() == 0) {
		s.push(x);
		return;
	}
	int temp = s.top();
	s.pop();
	pushatb(s, x);
	s.push(temp);
}
void reverses(stack<int>&s) {
	if (s.size() == 0) {
		return;
	}
	int temp = s.top();
	s.pop();
	reverses(s);
	pushatb(s, temp);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	stack<int>s;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.push(x);
	}
	reverses(s);
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

}

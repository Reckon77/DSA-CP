//https://www.geeksforgeeks.org/reverse-a-stack-using-recursion/
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
void insert(stack<int> &s, int k) {
	if (s.empty()) {
		s.push(k);
		return;
	}
	int x = s.top();
	s.pop();
	insert(s, k);
	s.push(x);
}
void reversest(stack<int> &st)
{
	if (st.size() > 0)
	{
		int x = st.top();
		st.pop();
		reversest(st);
		insert(st, x);
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	stack<int>st;
	st.push(3);
	st.push(2);
	st.push(1);
	insert(st, 4);
	reversest(st);
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

}

//Nearest greater to left
//https://www.geeksforgeeks.org/closest-greater-or-same-value-on-left-side-for-every-element-in-array/
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
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	stack<int>st;
	vi ans;
	int arr[n];
	inputarr(arr, n);
	for (int i = 0; i < n; i++) {
		while (!st.empty() && st.top() <= arr[i]) {
			st.pop();
		}
		if (st.empty()) {
			ans.pb(-1);
		} else {
			ans.pb(st.top());
		}
		st.push(arr[i]);
	}
	for (auto a : ans) {
		cout << a << " ";
	}


}

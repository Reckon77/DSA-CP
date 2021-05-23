//https://www.geeksforgeeks.org/interleave-first-half-queue-second-half/
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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	queue<int>q;
	REP(i, 0, n) {
		int x;
		cin >> x;
		q.push(x);
	}
	stack<int>s;
	int x = n / 2;
	while (x--) {
		s.push(q.front());
		q.pop();
	}
	x = n / 2;
	while (!s.empty()) {
		q.push(s.top());
		s.pop();
	}
	while (x--) {
		q.push(q.front());
		q.pop();
	}
	x = n / 2;
	while (x--) {
		s.push(q.front());
		q.pop();
	}
	while (!s.empty()) {
		q.push(s.top());
		s.pop();
		q.push(q.front());
		q.pop();
	}
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

}

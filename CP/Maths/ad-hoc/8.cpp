//https://codeforces.com/contest/914/problem/A
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
bool isPerfect(int n) {
	if (n == 0 || n == 1)
		return true;
	for (int i = 1; i <= n / 2; i++) {
		if (i * i == n)
			return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	REP(i, 0, n) {
		cin >> arr[i];
	}
	priority_queue<int> pq;
	REP(i, 0, n) {
		if (!isPerfect(arr[i]))
			pq.push(arr[i]);
	}
	cout << pq.top();



}

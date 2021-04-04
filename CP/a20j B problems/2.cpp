//https://codeforces.com/problemset/problem/339/B
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
typedef unordered_map<int, int> um;
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int m;
	cin >> n >> m;
	int arr[m];
	inputarr(arr, m);
	ll steps = 0, ci = 1;
	REP(i, 0, m) {
		if (arr[i] > ci) {
			steps += arr[i] - ci;
		} else if (arr[i] < ci) {
			steps += (n - ci) + arr[i];
		}
		ci = arr[i];
	}
	cout << steps;
}

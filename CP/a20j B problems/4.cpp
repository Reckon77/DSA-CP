//https://codeforces.com/contest/230/problem/B
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
bool sieve[1000001] = {true};
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(sieve, true, sizeof(sieve));
	sieve[0] = sieve[1] = false;
	for (int i = 2; i * i < 1000001; i++) {
		if (sieve[i]) {
			for (int j = i * i; j < 1000001; j += i) {
				sieve[j] = false;
			}
		}
	}
	vector<long long>tprimes;
	for (int i = 0; i < 1000001; i++) {
		if (sieve[i]) {
			tprimes.pb((long long)i * (long long)i);
		}
	}
	// REP(i, 0, 10000) {
	// 	cout << tprimes[i] << " ";
	// }
	int n;
	cin >> n;
	ll arr[n];
	REP(i, 0, n) {
		cin >> arr[i];
	}
	REP(i, 0, n) {
		if (binary_search(tprimes.begin(), tprimes.end(), arr[i])) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}
 
 
 
}

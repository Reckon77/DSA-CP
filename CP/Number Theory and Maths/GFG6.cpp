//https://www.geeksforgeeks.org/prime-factorization-using-sieve-olog-n-multiple-queries/
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
	stack<int>s1, s2;
	vi sieve(100001, -1);
	for (int i = 2; i < sieve.size(); i++) {
		if (sieve[i] == -1) {
			for (int j = i; j < sieve.size(); j += i) {
				if (sieve[j] == -1) {
					sieve[j] = i;
				}
			}
		}
	}
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		while (n > 1) {
			cout << sieve[n] << " ";
			n /= sieve[n];
		}
		cout << endl;
	}

}

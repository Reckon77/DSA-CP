//Gives TLE though
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
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	memset(sieve, true, sizeof(sieve));
	sieve[0] = sieve[1] = 0;
	for (int i = 2; i * i < 1000001; i++) {
		if (sieve[i]) {
			for (int j = i * i; j < 1000001; j += i) {
				sieve[j] = 0;
			}
		}
	}
	int tc;
	scanf("%d", &tc);
	// cin >> tc;
	while (tc--) {
		int n;
		int t1, t2;
		scanf("%d%d", &t1, &t2);
		// cin >> t1 >> t2;
		n = t2 - t1 + 1;
		int arr[t2 - t1 + 1] = {0};
		int arr2[n];
		int k = 0;
		for (int i = t1; i <= t2; i++) {
			arr2[k] = i;
			k++;
		}
		int x = t1;
		while (x) {
			arr[0] += x % 10;
			x /= 10;
		}
		int j = 1;
		for (int i = t1 + 1; i <= t2; i++) {
			if (i % 10 == 0) {
				int x = i;
				while (x) {
					arr[j] += x % 10;
					x /= 10;
				}
			} else {
				arr[j] = arr[j - 1] + 1;
			}
			j++;
		}
		int ctr = 0;
		REP(i, 0, n) {
			if (sieve[arr[i]] && sieve[arr2[i]])
				ctr++;
		}
		printf("%d\n", ctr);
		// cout << ctr << endl;

	}


}

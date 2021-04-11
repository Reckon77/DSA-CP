//https://www.codechef.com/APRIL21C/problems/BOLT
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
double roundl(double var)
{
	double value = (int)(var * 100 + .5);
	return (double)value / 100;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		double k1, k2, k3, v;
		cin >> k1 >> k2 >> k3 >> v;
		double res;
		res = 100.00 / (k1 * k2 * k3 * v);
		cout << fixed << setprecision(2);
		double k = 9.575;
		if (res >= k) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

}

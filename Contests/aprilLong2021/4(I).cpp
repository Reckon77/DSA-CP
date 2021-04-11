//https://www.codechef.com/APRIL21C/problems/SDICE
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
		ll n;
		cin >> n;
		if (n == 0) {
			cout << 0 << endl;
		} else if (n == 1) {
			cout << 20 << endl;
		} else if (n == 2) {
			cout << 36 << endl;
		} else if (n == 3) {
			cout << 51 << endl;
		} else if (n == 4) {
			cout << 60 << endl;
		} else if (n == 5) {
			cout << 76 << endl;
		} else if (n == 6) {
			cout << 88 << endl;
		} else if (n == 7) {
			cout << 99 << endl;
		} else if (n == 8) {
			cout << 104 << endl;
		} else {
			ll b = n / 4;
			ll r = n % 4;
			ll c = b - 1;
			if (r == 0) {
				cout << c * 44 + 60 << endl;
			} else if (r == 1) {
				cout << c * 44 + 76 << endl;
			} else if (r == 2) {
				cout << c * 44 + 88 << endl;
			} else {
				cout << c * 44 + 99 << endl;
			}
		}
	}

}

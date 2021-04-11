//https://www.codechef.com/APRIL21C/problems/SSCRIPT
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
float roundl(float var)
{
	float value = (int)(var * 100 + .5);
	return (float)value / 100;
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
		int l, k;
		cin >> l >> k;
		string s;
		cin >> s;
		int curc = 0, maxc = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '*') {
				int j = i;
				while (s[j] == '*') {
					j++;
					curc++;
				}
				i=j;
			}
			if (curc > maxc) {
				maxc = curc;
			}
			curc = 0;
		}
		if (maxc >= k) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

}

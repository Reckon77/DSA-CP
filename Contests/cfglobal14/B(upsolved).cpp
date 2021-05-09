//https://codeforces.com/contest/1515/problem/B
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
bool isSquare(int x) {
	int y = sqrt(x);
	return y * y == x;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		if (n % 2 == 0 && isSquare(n / 2))
			cout << "YES" << endl;
		else if (n % 4 == 0 && isSquare(n / 4))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
 
	}
}

//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-stair-paths-official/ojquestion
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
void get_stairs(vector<vector<int>>&ans, int n, vector<int>path) {
	if (n <= 0) {
		if (n == 0) {
			ans.pb(path);
		}
		return;
	}
	vector<int> p1, p2, p3;
	p1 = p2 = p3 = path;
	p1.pb(1);
	p2.pb(2);
	p3.pb(3);
	get_stairs(ans, n - 1, p1);
	get_stairs(ans, n - 2, p2);
	get_stairs(ans, n - 3, p3);

}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<vector<int>> ans;
	vector<int>p;
	get_stairs(ans, 3, p);
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}

}

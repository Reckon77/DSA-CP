//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-maze-path-with-jumps-official/ojquestion
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

void maze_path(vector<string>&ans, int sr, int sc, int dr, int dc, string path) {
	if (sr == dr && sc == dc) {
		ans.push_back(path);
		return;
	}
	if (sr > dr || sc > dc) {
		return;
	}
	string h1, h2, h3, v1, v2, v3, d1, d2, d3;
	h1 = h2 = h3 = v1 = v2 = v3 = d1 = d2 = d3 = path;
	h1 += "h1";
	h2 += "h2";
	h3 += "h3";
	v1 += "v1";
	v2 += "v2";
	v3 += "v3";
	d1 += "d1";
	d2 += "d2";
	d3 += "d3";
	maze_path(ans, sr, sc + 1, dr, dc, h1);
	maze_path(ans, sr, sc + 2, dr, dc, h2);
	maze_path(ans, sr, sc + 3, dr, dc, h3);
	maze_path(ans, sr + 1, sc, dr, dc, v1);
	maze_path(ans, sr + 2, sc, dr, dc, v2);
	maze_path(ans, sr + 3, sc, dr, dc, v3);
	maze_path(ans, sr + 1, sc + 1, dr, dc, d1);
	maze_path(ans, sr + 2, sc + 2, dr, dc, d2);
	maze_path(ans, sr + 3, sc + 3, dr, dc, d3);

}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<string>ans;
	string p;
	maze_path(ans, 1, 1, 3, 3, p);
	for (auto s : ans) {
		cout << s << endl;
	}

}

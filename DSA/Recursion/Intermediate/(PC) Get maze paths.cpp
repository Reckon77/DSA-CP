//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-maze-paths-official/ojquestion
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
	string p1, p2;
	p1 = p2 = path;
	p1.push_back('h');
	p2.push_back('v');
	maze_path(ans, sr, sc + 1, dr, dc, p1);
	maze_path(ans, sr + 1, sc, dr, dc, p2);
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

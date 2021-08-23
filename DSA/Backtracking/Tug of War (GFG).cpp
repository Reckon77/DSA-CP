//https://www.geeksforgeeks.org/tug-of-war/
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
void tugofwar(int &ms, vector<vector<int>>&ans, vector<int>inp, vector<int>set1, vector<int>set2, int sum1, int sum2, int n) {
	if (inp.size() == 0) {
		if (n % 2 == 0) {
			if (set1.size() == set2.size() && abs(sum1 - sum2) < ms) {
				ms = abs(sum1 - sum2);
				ans.clear();
				ans.pb(set1);
				ans.pb(set2);
			}
		} else {
			if (((set1.size() == (n - 1) / 2 && set2.size() == (n + 1) / 2) || (set1.size() == (n + 1) / 2 && set2.size() == (n - 1) / 2)) && abs(sum1 - sum2) < ms) {
				ms = abs(sum1 - sum2);
				ans.clear();
				ans.pb(set1);
				ans.pb(set2);
			}
		}

		return;
	}

	int ele = inp[0];
	inp.erase(inp.begin());
	set1.push_back(ele);
	tugofwar(ms, ans, inp, set1, set2, sum1 + ele, sum2, n);
	set2.push_back(ele);
	set1.pop_back();
	tugofwar(ms, ans, inp, set1, set2, sum1, sum2 + ele, n);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int>inp, set1, set2;
	REP(i, 0, n) {
		int x;
		cin >> x;
		inp.pb(x);
	}
	int ms = INT_MAX;
	vector<vector<int>>ans;
	tugofwar(ms, ans, inp, set1, set2, 0, 0, inp.size());
	for (auto vec : ans) {
		for (auto ele : vec) {
			cout << ele << " ";
		}
		cout << endl;
	}


}

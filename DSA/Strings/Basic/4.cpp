//Find	Duplicate	characters	in	a	string
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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str;
	getline(cin, str);
	unordered_map<char, int>m1;
	REP(i, 0, str.length()) {
		m1[str[i]]++;
	}
	for (auto& kv : m1) {
		if (kv.second > 1) {
			cout << kv.first << " ";
		}
	}
}

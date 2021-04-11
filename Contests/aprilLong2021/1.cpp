#include <bits/stdc++.h>
using namespace std;
//https://www.codechef.com/APRIL21C/problems/SOCKS1
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
	int arr[3];
	umap m1;
	cin >> arr[0] >> arr[1] >> arr[2];
	REP(i, 0, 3) {
		m1[arr[i]]++;
	}
	bool flag = false;
	for (auto itr = m1.begin(); itr != m1.end(); itr++) {
		if (itr->second > 1) {
			flag = true;
		}
	}
	if (flag) {
		cout << "YES";
	} else {
		cout << "NO";
	}

}

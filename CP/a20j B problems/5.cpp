//https://codeforces.com/problemset/problem/508/B
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
bool sieve[1000001] = {true};
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1;
	cin >> s1;
	int arr[s1.length()];
	bool flag = false;
	REP(i, 0, s1.length()) {
		arr[i] = s1[i] - 48;
		if (arr[i] % 2 == 0) {
			flag = true;
		}
	}
	if (!flag) {
		cout << -1;
	} else {
		int x = arr[s1.length() - 1];
		int j = -1;
		REP(i, 0, s1.length()) {
			if (arr[i] % 2 == 0 && arr[i] < x) {
				j = i;
				break;
			}
		}
		if (j != -1) {
			swap(arr[j], arr[s1.length() - 1]);
		} else {
			for (int i = s1.length() - 1; i >= 0; i--) {
				if (arr[i] % 2 == 0 && arr[i] > x) {
					j = i;
					break;
				}
			}
			swap(arr[j], arr[s1.length() - 1]);
		}
		REP(i, 0, s1.length()) {
			cout << arr[i];
		}
	}
 
 
}

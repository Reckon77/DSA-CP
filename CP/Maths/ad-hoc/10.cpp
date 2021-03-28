//https://codeforces.com/problemset/problem/1395/A
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
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int arr[4];
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		int nofodd = 0;
		REP(i, 0, 4) {
			if (arr[i] % 2 != 0)
				nofodd++;
		}
		if (nofodd <= 1)
			cout << "Yes" << endl;
		else {
			bool flag = true;
			for (int i = 0; i < 3; i++) {
				if (arr[i] == 0)
					flag = false;
			}
			if (!flag) {
				cout << "No" << endl;
			} else {
				arr[0]--;
				arr[1]--;
				arr[2]--;
				arr[3]++;
				nofodd = 0;
				REP(i, 0, 4) {
					if (arr[i] % 2 != 0)
						nofodd++;
				}
				if (nofodd <= 1)
					cout << "Yes" << endl;
				else
					cout << "No" << endl;
			}

		}
	}
}

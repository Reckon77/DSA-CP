//Split	the	Binary	string	into	two	substring	with	equal	0’s	and	1’s.	
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
	string s1;
	cin >> s1;
	int ctr = 0;
	int octr = 0, zctr = 0;
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] == '0') {
			zctr++;
		} else {
			octr++;
		}
		if (zctr == octr) {
			ctr++;
		}
	}
	if (ctr == 0) {cout << -1 << endl;}
	else
		cout << ctr << endl;

}

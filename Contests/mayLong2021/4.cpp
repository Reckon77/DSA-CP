//https://www.codechef.com/MAY21C/problems/TCTCTOE
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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		string s1, s2, s3;
		cin >> s1 >> s2 >> s3;
		char winner = 'X';
		int win = 0;
		int cnt = 0;
		if (s1[0] == s1[1] && s1[1] == s1[2] && s1[0] != '_') {
			win++;
			s1[0] == 'X' ? winner = 'X' : winner = 'O';
		}
		if (s2[0] == s2[1] && s2[1] == s2[2] && s2[0] != '_') {
			win++;
			s2[0] == 'X' ? winner = 'X' : winner = 'O';
		}
		if (s3[0] == s3[1] && s3[1] == s3[2] && s3[0] != '_') {
			win++;
			s3[0] == 'X' ? winner = 'X' : winner = 'O';
		}
		if (s1[0] == s2[0] && s2[0] == s3[0] && s1[0] != '_') {
			win++;
			s1[0] == 'X' ? winner = 'X' : winner = 'O';
		}
		if (s1[1] == s2[1] && s2[1] == s3[1] && s1[1] != '_') {
			win++;
			s1[1] == 'X' ? winner = 'X' : winner = 'O';
		}
		if (s1[2] == s2[2] && s2[2] == s3[2] && s1[2] != '_') {
			win++;
			s1[2] == 'X' ? winner = 'X' : winner = 'O';
		}
		if (s1[0] == s2[1] && s2[1] == s3[2] && s1[0] != '_') {
			win++;
			s1[0] == 'X' ? winner = 'X' : winner = 'O';
			if (s1[0] == 'X')cnt++;
		}
		if (s1[2] == s2[1] && s2[1] == s3[0] && s1[2] != '_') {
			win++;
			s1[2] == 'X' ? winner = 'X' : winner = 'O';
			if (s1[2] == 'X')cnt++;
		}
		int numb = 0, numz = 0, numx = 0;
		for (int i = 0; i < 3; i++) {
			if (s1[i] == '_') {
				numb++;
			}
			if (s2[i] == '_') {
				numb++;
			}
			if (s3[i] == '_') {
				numb++;
			}
			if (s1[i] == 'O') {
				numz++;
			}
			if (s2[i] == 'O') {
				numz++;
			}
			if (s3[i] == 'O') {
				numz++;
			}
			if (s1[i] == 'X') {
				numx++;
			}
			if (s2[i] == 'X') {
				numx++;
			}
			if (s3[i] == 'X') {
				numx++;
			}
		}
		if ((win > 1 && cnt != 2) || abs(numx - numz) > 1) {
			cout << 3;
		} else if (numz > numx) {
			cout << 3;
		} else if (win == 1 && ((winner == 'X' && numz >= numx) || (winner == 'O' && numz != numx))) {
			cout << 3;
		}
		else if (win == 1 || numb == 0 || cnt == 2 ) {

			cout << 1;
		} else {
			cout << 2;
		}
		cout << endl;
	}



}

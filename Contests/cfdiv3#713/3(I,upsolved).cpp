//https://codeforces.com/contest/1512/problem/C
//Constructive Algorithm
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
bool isPalindrome(string s2) {
	int i = 0, j = s2.length() - 1;
	while (i <= j) {
		if (s2[i] != s2[j])
			return false;
		i++;
		j--;
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int a, b;
		cin >> a >> b;
		string s1;
		cin >> s1;
		int n = s1.length();
		unordered_map<char, int>m1;
		bool flag = true;
		REP(i, 0, n) {
			m1[s1[i]]++;
		}
		if (a != 0) {
			a = a - m1['0'];
		}
		if (b != 0) {
			b = b - m1['1'];
		}
		if (a < 0 || b < 0) {
			flag = false;
		}
		int i = 0, j = n - 1;
		while (flag && i <= j) {
			if ((s1[i] == '0' || s1[i] == '1') && s1[j] == '?') {
				if (s1[i] == '0') {
					s1[j] = '0';
					a--;
				} else {
					s1[j] = '1';
					b--;
				}
 
			} else if ((s1[j] == '0' || s1[j] == '1') && s1[i] == '?') {
				if (s1[j] == '0') {
					s1[i] = '0';
					a--;
				} else {
					s1[i] = '1';
					b--;
				}
			} else if (s1[i] != '?' && s1[j] != '?' && s1[i] != s1[j]) {
				flag = false;
			}
			if (a < 0 || b < 0) {
				flag = false;
			}
			i++;
			j--;
 
		}
		if (a < 0 || b < 0) {
			flag = false;
		}
		// cout << a << " " << b << " " << flag << " " << s1 << endl;
		int k = 0, m = n - 1;
		while (k < m) {
			if (s1[k] != s1[m]) {
				flag = false;
			}
			if (s1[k] == '?' && s1[m] == '?') {
				while (a > 1 && k < m) {
					if (s1[k] == '?' && s1[m] == '?') {
						s1[k] = '0';
						s1[m] = '0';
						a -= 2;
					}
					k++;
					m--;
				}
				while (b > 1 && k < m) {
					if (s1[k] == '?' && s1[m] == '?') {
						s1[k] = '1';
						s1[m] = '1';
						b -= 2;
					}
					k++;
					m--;
				}
			}
			k++;
			m--;
		}
		if (n % 2 != 0 && s1[n / 2] == '?') {
			if ((a % 2 != 0 || b % 2 != 0)) {
				if (a % 2 != 0 && a > 0) {
					s1[n / 2] = '0';
					a--;
				} else if (b % 2 != 0 && b > 0) {
					s1[n / 2] = '1';
					b--;
				}
			} else {
				flag = false;
			}
		} else if (n % 2 == 0 && s1[n / 2] == '?' && s1[(n / 2) - 1] == '?') {
			if ((a == 2) || b == 2) {
				if (a == 2) {
					s1[n / 2] = '0';
					s1[(n / 2) - 1] = '0';
					a -= 2;
				} else {
					s1[n / 2] = '1';
					s1[(n / 2) - 1] = '1';
					b -= 2;
				}
			} else {
				flag = false;
			}
		}
		if (!isPalindrome(s1) || count(s1.begin(), s1.end(), '?') != 0) {
			flag = false;
		}
		// cout << a << " " << b << " " << flag << " " << s1 << endl << endl;
 
		if (a == 0 && b == 0 && flag) {
			cout << s1 << endl;
		} else {
			cout << -1 << endl;
		}
 
	}
}

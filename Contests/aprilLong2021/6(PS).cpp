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
bool solve(string t, string s) {
	if (s == t)
		return true;
	int n = s.size();
	int m = t.size();
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (t[j] == s[i])
			j++;
		if (j == t.size())
			return true;
	}
	return false;
}
string decToBinary(int n)
{
	if (n == 0) {
		string k = {"0"};
		return k;
	}
	int binaryNum[32];
	int i = 0;
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	string s = "";
	for (int j = i - 1; j >= 0; j--)
		s += to_string(binaryNum[j]);
	return s;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		string s1;
		cin >> s1;
		int i = 0, k = 0;
		for (int i = 0; i <= 300; i++) {
			string s2 = decToBinary(i);
			if (!(solve(s2, s1))) {
				k = i;
				break;
			}
		}
		cout << decToBinary(k) << endl;

	}


}

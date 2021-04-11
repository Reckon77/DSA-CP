//Number	of	Substrings	with	count	of	each	character	as	“K”
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
bool count(string s, int k)
{
	unordered_map<char, int> m1;

	for (int i = 0; i < s.length(); i++)
		m1[s[i]]++;
	bool flag = true;
	for (auto itr = m1.begin(); itr != m1.end(); itr++) {
		if (itr->s != k) {
			flag = false;
		}
	}
	return flag;
}
int main() {
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	int k, ctr = 0;
	string s1, s2 = "";
	cin >> s1 >> k;
	for (int i = 0; i < s1.length() - 1; i++) {
		s2 = s1[i];
		if (count(s2, k)) {
			ctr++;
		}
		for (int j = i + 1; j < s1.length(); j++) {
			s2 += s1[j];
			if (count(s2, k)) {
				ctr++;
			}
		}
	}
	cout << ctr;

}

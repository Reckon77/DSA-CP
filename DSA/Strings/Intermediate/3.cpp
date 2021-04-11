//Write	a	Program	to	check	whether	a	string	is	a	valid	shuffle	of	two	
//strings	or	not.	
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
bool isShuffle(string s1, string s2, string s3) {
	if (s1.length() + s2.length() != s3.length()) {
		return false;
	}
	int x = 0, z = 0;
	REP(i, 0, s3.length()) {
		if (s3[i] == s1[x]) {
			x++;
		} else if (s3[i] == s2[z]) {
			z++;
		} else {
			return false;
		}
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	cout << boolalpha << isShuffle(s1, s2, s3);

}

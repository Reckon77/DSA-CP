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
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	string s1;
	cin >> s1;
	int freq[26] = {0};
	int maxfreq = 0;
	for (int i = 0; i < s1.length(); i++) {
		freq[s1[i] - 97]++;
	}
	REP(i, 0, 26) {
		maxfreq = max(maxfreq, freq[i]);
	}
	if (maxfreq <= s1.length() - maxfreq + 1) {
		cout << "Possible";
		//Need to do the printing part //HERE
	} else {
		cout << "Not possible";
	}

}

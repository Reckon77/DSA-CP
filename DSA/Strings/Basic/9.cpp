//Write	a	program	to	reverse	each	word	in	the	given	string
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
void reversesstr(string &a, int s, int e) {
	while (s <= e) {
		swap(a[s++], a[e--]);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str;
	getline(cin, str);
	int s = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			reversesstr(str, s, i - 1);
			s = i + 1;
		}
	}
	reversesstr(str, s, str.length() - 1);
	cout << str;


}

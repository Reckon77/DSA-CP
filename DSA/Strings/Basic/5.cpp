//Write	a	program	to	reverse	the	string	in	place.	
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
	string str;
	getline(cin, str);
	//One line of code
	//reverse(str.begin(), str.end());
	int i = 0, j = str.length() - 1;
	while (i <= j) {
		swap(str[i++], str[j--]);
	}
	cout << str;
}

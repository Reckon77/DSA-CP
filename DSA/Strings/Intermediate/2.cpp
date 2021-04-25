//Write	a	program	to	remove	Duplicate	characters	from	the	String.
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
	//Algo1 (order is not maintained)
	// sort(s1.begin(), s1.end());
	// int x = 0;
	// for (int i = 0; i < s1.length() - 1; i++) {
	// 	if (s1[i] != s1[i + 1]) {
	// 		s1[x++] = s1[i];
	// 	}
	// }
	// s1[x++] = s1[s1.length() - 1];
	// s1.erase(x, s1.length());

//Algo 2 (order maintened O(n))
unordered_map<char, int> exists;
	int index = 0;
	for (int i = 0; i < s1.length(); i++) {
		if (exists[s1[i]] == 0)
		{
			s1[index++] = s1[i];
			exists[s1[i]]++;
		}
	}
	s1.erase(index, s1.length());
	cout << s1;
}

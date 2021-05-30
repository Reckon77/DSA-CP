//https://www.geeksforgeeks.org/first-uppercase-letter-in-a-string-iterative-and-recursive/
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
//My Algo
void firstupper(string s) {
	if (s.size() == 0) {
		return;
	} else if (isupper(s[0])) {
		cout << s[0] << endl;
		return;
	}
	s.erase(0, 1);
	firstupper(s);
}
//GFG
char first(string str)
{
	if (str.size() == 0)
		return 0;
	if (isupper(str[0]))
		return str[0];
	str.erase(0, 1);
	return first(str);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<string>ans;
	string s1;
	getline(cin, s1);
	cout << first(s1);

}

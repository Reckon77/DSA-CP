//https://www.geeksforgeeks.org/print-subsequences-string/
//NOTE: Draw the recurssion tree for "abc" while making notes for clear understanding
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
void printSubsequence(string input, string output) {
	if (input.empty()) {
		cout << output << endl;
		return;
	}
	printSubsequence(input.substr(1), output + input[0]);
	printSubsequence(input.substr(1), output);

}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1;
	cin >> s1;
	printSubsequence(s1, "");

}

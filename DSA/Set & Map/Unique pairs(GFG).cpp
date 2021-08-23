#include <bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/number-of-unique-pairs-in-an-array/
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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	unordered_set<int>s;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}
	cout << pow(s.size(), 2);

}

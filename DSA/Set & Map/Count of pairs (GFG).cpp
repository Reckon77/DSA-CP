//https://www.geeksforgeeks.org/count-of-pairs-between-two-arrays-such-that-the-sums-are-distinct/
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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n1, n2;
	cin >> n1 >> n2;
	int arr1[n1], arr2[n2];
	REP(i, 0, n1) {
		cin >> arr1[i];
	}
	REP(i, 0, n2) {
		cin >> arr2[i];
	}
	unordered_set<int>s;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			s.insert(arr1[i] + arr2[j]);
		}
	}
	cout << s.size();
}

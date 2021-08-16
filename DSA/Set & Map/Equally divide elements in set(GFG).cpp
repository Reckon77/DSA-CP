//https://www.geeksforgeeks.org/equally-divide-into-two-sets-such-that-one-set-has-maximum-distinct-elements/
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
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	unordered_set<int>s;
	REP(i, 0, n) {
		s.insert(arr[i]);
	}
	int m = s.size();
	cout << min(n / 2, m);

}

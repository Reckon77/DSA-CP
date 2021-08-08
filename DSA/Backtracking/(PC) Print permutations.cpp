//https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/permutation-i-official/ojquestion
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
void permutations(int arr[], int n, int ci, int ti) {
	if (ci > ti) {
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			arr[i] = ci;
			permutations(arr, n, ci, ti);
			arr[i] = 0;
		}

	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int arr[4];
	fill_n (arr, 4, 0);
	for (auto a : arr) {
		cout << a << endl;
	}


}

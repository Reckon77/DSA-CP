//Given	an	array	which	consists	of	only	0,	1	and	2.	Sort	the	array	without	
//using	any	sorting	algorithm.	
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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int size;
	cin >> size;
	int arr[size];
	REP(i, 0, size) {
		cin >> arr[i];
	}
	int l = 0, m = 0, h = size - 1;
	while (m <= h) {
		if (arr[m] == 0) {
			swap(arr[l++], arr[m++]);
		} else if (arr[m] == 1) {
			m++;
		} else {
			swap(arr[h--], arr[m]);
		}
	}
	REP(i, 0, size) {
		cout << arr[i] << " ";
	}
	return 0;
}

//	 Write	a	program	to	reverse	the	array.	
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
	int i = 0, j = size - 1;
	while (i <= j) {
		swap(arr[i++], arr[j--]);
	}
	REP(i, 0, size) {
		cout << arr[i] << " ";
	}
	return 0;
}

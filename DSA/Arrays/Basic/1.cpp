//Create	an	Array	of	size	10	of	integers.	Take	input	from	the	user	for	these	
//10	elements	and	print	the	entire	array	after	that.	
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
	int arr[10];
	REP(i, 0, 10) {
		cin >> arr[i];
	}
	REP(i, 0, 10) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
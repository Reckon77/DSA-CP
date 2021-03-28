//Given	an	number	n.	Find	the	number	of	occurrences	of	n	in	the	array.	
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
	int n;
	cin >> n;
	int size, c = 0;
	cin >> size;
	int arr[size];
	REP(i, 0, size) {
		cin >> arr[i];
		if (arr[i] == n)
			c++;
	}
	cout << c;
	return 0;
}

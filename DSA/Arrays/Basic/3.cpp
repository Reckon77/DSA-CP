//Find	the	minimum	and	maximum	element	in	an	array.	
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
	int min = arr[0], max = arr[0];
	REP(i, 1, size) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min << " " << max;
	return 0;
}

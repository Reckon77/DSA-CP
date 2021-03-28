//Write	a	program	to	sort	the	given	array.	//bubble sort
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
	REP(i, 0, size - 1) {
		REP(j, 0, size - 1 - i) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
	REP(i, 0, size) {
		cout << arr[i] << " ";
	}
	return 0;
}

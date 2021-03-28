//Find	the	Kth	largest	and	Kth	smallest	number	in	an	array.	(maxheap,minheap)
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
	int k;
	cin >> k;
	int size;
	cin >> size;
	priority_queue<int> maheap;
	priority_queue<int, vector<int>,
	               greater<int> > miheap;
	REP(i, 0, size) {
		int x;
		cin >> x;
		maheap.push(x);
		miheap.push(x);
	}
	REP(i, 0, k - 1) {
		maheap.pop();
		miheap.pop();
	}
	cout << maheap.top() << " " << miheap.top();
	return 0;
}

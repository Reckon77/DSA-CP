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
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}
double roundl(double var)
{
	double value = (int)(var * 100 + .5);
	return (double)value / 100;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1;
	getline(cin, s1);
	unordered_map<char, int> m1;
	REP(i, 0, s1.length()) {
		m1[s1[i]]++;
	}

	int maxNo = m1.begin()->second;
	char maxChar = m1.begin()->first;
	for (auto itr = m1.begin(); itr != m1.end(); itr++) {
		if (itr->second > maxNo) {
			maxNo = itr->s;
			maxChar = itr->f;
		}
	}
	for (auto itr = m1.begin(); itr != m1.end(); itr++) {
		if (itr->second == maxNo && itr->f < maxChar) {
			maxChar = itr->f;
		}
	}

	cout << maxChar << " " << maxNo;

}

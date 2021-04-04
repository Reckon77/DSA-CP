//MY Solution gives tle
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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	unordered_map<string, int> m1;
	REP(i, 0, n) {
		string s;
		cin >> s;
		if (m1[s] != 0) {
			string str = s;
			int i = 1;
			while (m1[str] != 0) {
				str = s;
				str.insert(str.length(), to_string(i));
				i++;
			}
			m1[str]++;
			cout << str << endl;

		} else {
			m1[s]++;
			cout << "OK" << endl;
		}
	}

}

//Better approach no tle
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	unordered_map<string, int> m1;
	string s;
	while (n--)
	{
		cin >> s;
		if (m1.count(s) == 0)
		{
			cout << "OK" << endl;
			m1[s] = 1;
		}
		else
		{
			cout << s << m1[s] << endl;
			m1[s] += 1;
		}
	}


}

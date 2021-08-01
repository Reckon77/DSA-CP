//https://www.pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-encodings-official/ojquestion

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

bool check(string num) {
	int x = stoi(num);
	if (x <= 0 || x > 26) {
		return false;
	}
	return true;
}
void encoding(string ip, string op, char enc[]) {
	if (ip.size() == 0) {
		cout << op << endl;
		return;
	}
	if (ip[0] == '0') {
		return;
	}
	string nop1 = op;
	nop1.push_back(enc[ip[0] - 48]);
	char c = ip[0];
	ip.erase(0, 1);
	encoding(ip, nop1, enc);
	if (ip.size() > 0) {
		string npip(1, c);
		npip.push_back(ip[0]);
		if (check(npip)) {
			string nop2 = op;
			nop2.push_back(enc[stoi(npip)]);
			ip.erase(0, 1);
			encoding(ip, nop2, enc);
		}
	}



}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	char enc[] = {'.', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	string ip = "1123";
	string op = "";
	encoding(ip, op, enc);

}

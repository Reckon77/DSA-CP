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
//typedef unordered_map<int, int> umap;
void inputarr(int arr[], int n) {REP(i, 0, n) {cin >> arr[i];}}
void bubble(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}
void selection(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				swap(arr[j], arr[i]);
			}
		}
	}
}
void insertion(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int j = i ;
		int temp = arr[i];
		while (j > 0 && arr[j - 1] > temp) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = temp;
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	// bubble(arr, n);
	// selection(arr, n);
	insertion(arr, n);
	REP(i, 0, n) {
		cout << arr[i] << " ";
	}

}

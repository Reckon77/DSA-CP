//https://www.youtube.com/watch?v=3DdP6Ef8YZM&list=PL_z_8CaSLPWdtY9W22VjnPxG30CXNZpI9&index=3
#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; i++)
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
typedef priority_queue<int> maxHeap;
typedef priority_queue<int, vector<int>, greater<int>> minHeap;
typedef pair<int, pair<int, int>> ppi;
void inputarr(int arr[], int n)
{
    REP(i, 0, n) { cin >> arr[i]; }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    minHeap pq;
    int n;
    cin >> n;
    int arr[n];
    inputarr(arr, n);
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
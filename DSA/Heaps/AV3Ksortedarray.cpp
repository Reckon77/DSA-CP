//https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0
//https://www.youtube.com/watch?v=dYfM6J1y0mU&list=PL_z_8CaSLPWdtY9W22VjnPxG30CXNZpI9&index=4
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        minHeap pq;
        vi ans;
        int n, k;
        cin >> n >> k;
        int arr[n];
        inputarr(arr, n);
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
            if (pq.size() > k)
            {
                ans.pb(pq.top());
                pq.pop();
            }
        }
        while (!pq.empty())
        {
            ans.pb(pq.top());
            pq.pop();
        }
        for (auto e : ans)
        {
            cout << e << " ";
        }
        cout << endl;
    }
}
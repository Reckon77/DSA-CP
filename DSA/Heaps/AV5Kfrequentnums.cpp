//https://leetcode.com/problems/top-k-frequent-elements/
//https://www.youtube.com/watch?v=7VoJn544QrM&list=PL_z_8CaSLPWdtY9W22VjnPxG30CXNZpI9&index=6
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
    int n, k;
    cin >> n >> k;
    int arr[n];
    inputarr(arr, n);
    unordered_map<int, int> m1;
    for (int i = 0; i < n; i++)
    {
        m1[arr[i]]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minH;
    for (auto i = m1.begin(); i != m1.end(); i++)
    {
        minH.push({i->second, i->first});
        if (minH.size() > k)
        {
            minH.pop();
        }
    }
    while (!minH.empty())
    {
        cout << minH.top().second << " ";
        minH.pop();
    }
}
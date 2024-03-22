// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1#
void cycledfs(int ele, vector<int> &vis, vector<int> adj[], int parent, bool &f)
{
    vis[ele] = 1;
    for (auto e : adj[ele])
    {
        if (vis[e] == 0)
        {
            cycledfs(e, vis, adj, ele, f);
        }
        else if (e != parent)
        {
            f = true;
        }
    }
}
bool isCycle(int V, vector<int> adj[])
{
    // Code here
    bool f = false;
    vector<int> vis(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (vis[i] == 0)
        {
            cycledfs(i, vis, adj, -1, f);
        }
    }
    return f;
}

//https://www.codingninjas.com/studio/problems/detect-cycle-in-an-undirected-graph-_758967?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
 bool detectCycle(int V, vector<int> adj[]) {
        // Write your code here.
        vector<int>vis(V+1,0);
        queue<pair<int,int>>q;
        q.push({1,-1});
        vis[1]=1;
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(vis[it]==1&&it!=parent){
                    return true;
                }else if(vis[it]!=1){
                    q.push({it,node});
                    vis[it]=1;
                }
            }
        }
        return false;
    }
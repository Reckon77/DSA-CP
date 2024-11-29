// User function Template for C++
//https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<int> adj[N];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> dist(N,INT_MAX);
        dist[src]=0;
        queue<pair<int,int>> q;
        q.push({src,0});
        while(!q.empty()){
            pair<int,int> node = q.front();
            q.pop();
            for(auto e:adj[node.first]){
                if(node.second+1<dist[e]){
                    dist[e]=node.second+1;
                    q.push({e,node.second+1});
                }
            }
        }
        for(int i=0;i<N;i++){
            if(dist[i]==INT_MAX){
                dist[i]=-1;
            }
        }
        return dist;
        
    }
};
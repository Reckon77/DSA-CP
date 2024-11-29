//https://www.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1
class Solution {
  public:
   vector<int> dijkstra(int src, int dest, vector<pair<int, int>> adj[], int n) {
        int dist[n + 1];
        for(int i = 0; i <= n; i++) dist[i] = 1e9;
        dist[src] = 0;
        
        int parent[n + 1];
        for(int i = 0; i <= n; i++) parent[i] = i;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, src});
        
        while(!pq.empty()) {
            pair<int, int> top = pq.top();
            pq.pop();
            
            int node = top.second;
            int distToNode = top.first;
            
            for(pair<int, int> pr : adj[node]) {
                int nbr = pr.first;
                int distNodeToNbr = pr.second;
                
                if(dist[nbr] > distToNode + distNodeToNbr) {
                    dist[nbr] = distToNode + distNodeToNbr;
                    pq.push({distToNode + distNodeToNbr, nbr});
                    parent[nbr] = node;
                } 
            }
        }
        
        if(dist[dest] == 1e9) return {-1};
        
        vector<int> path;
        path.push_back(dest);
        int j = dest;
        while(parent[j] != j) {
            path.push_back(parent[j]);
            j = parent[j];
        }
        
        reverse(path.begin(), path.end());
        path.insert(path.begin(), dist[dest]);
        
        return path;
    }
    
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<pair<int, int>> adj[n + 1];
        for(int i = 0; i < m; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt  = edges[i][2];
            
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }
        
        return dijkstra(1, n, adj, n);
    }
};
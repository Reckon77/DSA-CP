//https://leetcode.com/problems/cheapest-flights-within-k-stops/
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
       queue<pair<int, pair<int, int>>> pq;
        vector<int> dist(n,1e9);
        dist[src]=0;
        //{stops,node,distance}
        pq.push({0,{src, 0}});
        while(!pq.empty()){
            auto it=pq.front();
            pq.pop();
            int stops = it.first;
            int node = it.second.first;
            int d = it.second.second;
            for(auto e:adj[node]){
                if(d+e.second<dist[e.first]&&stops<=k){
                    dist[e.first] = d+e.second;
                    pq.push({ stops+1,{e.first,d+e.second}});
                }
            }
        }
        if(dist[dst]==1e9)return -1;
        return dist[dst];
    }
};
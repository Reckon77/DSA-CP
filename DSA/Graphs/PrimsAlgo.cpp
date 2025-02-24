//https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        int sum=0;
        vector<pair<int,int>> mst;
        std::priority_queue<std::pair<int, std::pair<int, int>>, 
                        std::vector<std::pair<int, std::pair<int, int>>>, 
                        std::greater<std::pair<int, std::pair<int, int>>>> pq;
        pq.push({0,{0,-1}});
        vector<bool> vis(V,false);
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int wt = it.first;
            int node = it.second.first;
            int parent = it.second.second;
            if(parent!=-1&&!vis[node]){
                mst.push_back({parent,node});
                sum+=wt;
            }
            vis[node]=true;
            for(auto neighbour:adj[node]){
                int adjNode = neighbour[0];
                int adjWt = neighbour[1];
                if(!vis[adjNode]){
                    pq.push({adjWt,{adjNode,node}});
                }
            }
            
        }
        //print edges
        // for(auto e:mst){
        //     cout<<e.first<<" "<<e.second<<endl;
        // }
        return sum;
    }
};
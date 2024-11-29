//https://leetcode.com/problems/find-eventual-safe-states/description/
vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        //reverse the graph
        vector<int> adj[V];
        for(int i=0;i<V;i++){
            for(auto e:graph[i]){
                adj[e].push_back(i);
            }
        }
        // for(int i=0;i<V;i++){
        //     cout<<i<<"->";
        //     for(auto e : adj[i]){
        //         cout<<e<<", ";
        //     }
        //     cout<<endl;
        // }
        vector<int> indegree(V,0);
	    for(int i=0;i<V;i++){
	        for(auto e:adj[i]){
	            indegree[e]++;
	        }
	    }
	   // for(auto e:indegree){
	   //     cout<<e<<" ";
	   // }
	   // cout<<endl;
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    vector<int>ans;
	    while(!q.empty()){
	        int ele = q.front();
	        q.pop();
	        ans.push_back(ele);
	        for(auto e:adj[ele]){
	            indegree[e]--;
	            if(indegree[e]==0){
	                q.push(e);
	            }
	        }
	    }
        sort(ans.begin(),ans.end());
        return ans;
    }
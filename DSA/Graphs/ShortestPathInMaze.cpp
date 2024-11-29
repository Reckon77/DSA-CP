//https://leetcode.com/problems/shortest-path-in-binary-matrix/description/
int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)return -1;
        int n=grid.size();
        vector<vector<int>> dis(n,vector<int>(n,INT_MAX));
        dis[0][0]=0;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
       
        int dx[8] = {0, 0, 1, -1,-1,-1,1,1};
        int dy[8] = {1, -1, 0, 0,-1,1,-1,1};
        pq.push({0,{0,0}});
        while(!pq.empty()){
           pair<int, pair<int, int>> t= pq.top();
           pq.pop();
           int d= t.first;
           int r = t.second.first;
           int c = t.second.second;
        //    cout<<d<<" "<<r<<" "<<c<<endl;
           for(int i=0;i<8;i++){
            int nx=r+dx[i],ny=c+dy[i];
            // cout<<nx<<" "<<ny<<endl;
            if(nx<0||ny<0||nx>=n||ny>=n||grid[nx][ny]==1)continue;
            if(d+1<dis[nx][ny]){
                dis[nx][ny]=d+1;
                pq.push({d+1,{nx,ny}});
            }
           }

        }
         for(auto e:dis){
            for(auto f:e){
                cout<<f<<" ";
            }
            cout<<endl;
        }
        return dis[n-1][n-1]==INT_MAX?-1:dis[n-1][n-1]+1;
        
    }
//BFS
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)return image;
        queue<pair<int,int>>q;
        int str=image[sr][sc];
        q.push({sr,sc});
        image[sr][sc]=color;
        int n=image.size(),m=image[0].size();
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        while(!q.empty()){
            int x=q.size();
            while(x--){
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                     int nx=r+dx[i],ny=c+dy[i];
                    if(nx<0||ny<0||nx>=n||ny>=m||image[nx][ny]!=str)continue;
                    image[nx][ny]=color;
                     q.push({nx,ny});
                }
            }
        }
        return image;
    }
//DFS
 void dfs(vector<vector<int>>& v,vector<vector<int>>& vis, int sr, int sc, int c, int n, int m,int f) {
        if (sr < 0 || sc < 0 || sr >= n || sc >= m  ||v[sr][sc]!=f|| vis[sr][sc]>0)
            return;

        if (v[sr][sc] != c)
            v[sr][sc] = c;
            vis[sr][sc]++;
        dfs(v,vis, sr + 1, sc, c, n, m,f);
        dfs(v, vis,sr, sc - 1, c, n, m,f);
        dfs(v, vis,sr, sc + 1, c, n, m,f);
        dfs(v, vis,sr - 1, sc, c, n, m,f);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int c) {
        int n = v.size();
        int m = v[0].size();
        int f=v[sr][sc];
       vector<vector<int>> vis(n, vector<int>(m, 0));

        dfs(v, vis,sr, sc, c, n, m,f);
        return v;
    }
//https://leetcode.com/problems/number-of-enclaves/description/
class Solution {
public:
    void dfs(int r,int c,int n,int m,vector<vector<int>>& grid,vector<vector<int>>&vis){
        if(r<0||c<0||r>=n||c>=m||grid[r][c]==0||vis[r][c]==1)return;
        if(grid[r][c]==1){
            vis[r][c]=1;
            dfs(r+1,c,n,m,grid,vis);
            dfs(r,c+1,n,m,grid,vis);
            dfs(r-1,c,n,m,grid,vis);
            dfs(r,c-1,n,m,grid,vis);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            dfs(i,0,n,m,grid,vis);
        }
        for(int i=0;i<n;i++){
            dfs(i,m-1,n,m,grid,vis);
        }
        for(int i=0;i<m;i++){
            dfs(0,i,n,m,grid,vis);
        }
         for(int i=0;i<m;i++){
            dfs(n-1,i,n,m,grid,vis);
        }
        int cnt=0;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=1&&grid[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;

    }
};
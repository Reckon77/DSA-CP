//https://leetcode.com/problems/surrounded-regions/description/
class Solution {
public:
    void dfs(int r,int c,int n,int m, vector<vector<char>>& board,vector<vector<int>>& vis){
        if(r<0||c<0||r>=n||c>=m||board[r][c]=='X'||vis[r][c]==1)return;
        if(board[r][c]=='O'){
            vis[r][c]=1;
            dfs(r+1,c,n,m,board,vis);
            dfs(r,c+1,n,m,board,vis);
            dfs(r-1,c,n,m,board,vis);
            dfs(r,c-1,n,m,board,vis);
        }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m= board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            dfs(i,0,n,m,board,vis);
        }
        for(int i=0;i<n;i++){
            dfs(i,m-1,n,m,board,vis);
        }
        for(int i=0;i<m;i++){
            dfs(0,i,n,m,board,vis);
        }
         for(int i=0;i<m;i++){
            dfs(n-1,i,n,m,board,vis);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=1&&board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};
//https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1
class Solution {
  public:
    void shortestDistance(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==-1){
                    mat[i][j]=INT_MAX;
                }
            }
        }
        for(int via = 0;via<n;via++){
           for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][via]!=INT_MAX&&mat[via][j]!=INT_MAX){
                    mat[i][j] = min(mat[i][j], mat[i][via]+mat[via][j]);
                }
                
            }
        } 
        }
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==INT_MAX){
                    mat[i][j]=-1;
                }
            }
        }
        
    }
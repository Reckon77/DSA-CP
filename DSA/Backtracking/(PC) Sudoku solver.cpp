 //https://www.geeksforgeeks.org/sudoku-backtracking-7/
 //https://www.youtube.com/watch?v=uyetDh-DyDg&list=PL-Jc9J83PIiHO9SQ6lxGuDsZNt2mkHEn0&index=26
 int ansm[N][N];
    bool isValid(int grid[N][N],int row,int col,int ele){
        for(int i=0;i<N;i++){
            if(grid[i][col]==ele){
                return false;
            }
        }
         for(int i=0;i<N;i++){
            if(grid[row][i]==ele){
                return false;
            }
        }
        int smr=3*(row/3);
        int smc=3*(col/3);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[smr+i][smc+j]==ele){
                    return false;
                }
            }
        }
        return true;
    }
    void solver(bool &ans,int grid[N][N],int row,int col){
        if(row==9){
            ans=true;
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    ansm[i][j]=grid[i][j];
                }
            }
            return;
        }
       if(col==9){
           solver(ans,grid,row+1,0);
           return;
       }
        if(grid[row][col]!=0){
            solver(ans,grid,row,col+1);
        }else{
            for(int i=1;i<=9;i++){
                if(isValid(grid,row,col,i)){
                    grid[row][col]=i;
                    solver(ans,grid,row,col+1);
                    grid[row][col]=0;
                }
            }
        }
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        bool flag=false;
        solver(flag,grid,0,0);
         for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    grid[i][j]=ansm[i][j];
                }
            }
        return flag;
        
    }
     void printGrid (int grid[N][N]) 
    {
        // Your code here
        if(SolveSudoku(grid)){
              for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    cout<<grid[i][j]<<" ";
                }
            }
        }
          
    }
    
    
    
//LeetCode
vector<vector<char>> ans;
    bool safe(int row, int col, vector<vector<char>>& board, char ch)
    {
        // check row
        for(int i = 0; i < 9;i++)
            if(board[row][i] == ch)
                return false;
        
        // check col
        for(int i = 0; i < 9;i++)
            if(board[i][col] == ch)
                return false;
        
        // find starting index of each grid
        int x = (row/3)*3;
        int y = (col/3)*3;
        
        for(int i = x; i<(x+3); i++)
        {
            for(int j = y; j<(y+3); j++)
            {
                if(board[i][j] == ch)
                    return false;
            }
        }
        
        return true;
    }
    void sudoku(vector<vector<char>>& board, int row, int col)
    {
        if(row == 9)
        {
            ans = board;
            return;
        }
        if(col == 9)
        {
            sudoku(board,row+1,0);
            return;
        }
        
        if(board[row][col] != '.')
        {
            sudoku(board,row,col+1);
            return;
        }
        
        for(char i = '1'; i<='9'; i++)
        {
            if(safe(row,col,board,i))
            {
                board[row][col] = i;
                sudoku(board,row,col+1);
                board[row][col] = '.';
            }
        }
    }
    void solveSudoku(vector<vector<char>>& board) {
      
        sudoku(board,0,0);
        board = ans;
    }
};

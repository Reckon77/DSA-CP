 //https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1#
 //Refer pepcoding video
 int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>=2){
            int i=s.top();
            s.pop();
            int j=s.top();
            s.pop();
            if(M[i][j]==1){
                //i knows j
                s.push(j);
            }else{
                //i doesnt knows j
                s.push(i);
            }
        }
        int pot=s.top();
        for(int i=0;i<n;i++){
            if(i!=pot){
                if(M[pot][i]==1||M[i][pot]==0)
                return -1;
            }
        }
        return pot;
    }

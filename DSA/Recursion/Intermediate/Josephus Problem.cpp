 //https://practice.geeksforgeeks.org/problems/josephus-problem/1/
 void solve(vector<int>&ans,int sword,int k){
        if(ans.size()==1){
            return;
        }
        sword=(sword+k)%ans.size();
        ans.erase(ans.begin()+sword);
        solve(ans,sword,k);
    }
    int josephus(int n, int k)
    {
       //Your code here
        vector<int>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(i);
        }
        solve(ans,0,k-1);
        return ans[0];
    }

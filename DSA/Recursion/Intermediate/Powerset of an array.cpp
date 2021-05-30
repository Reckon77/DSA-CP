 //https://leetcode.com/problems/subsets/submissions/
 void solve(vector<vector<int>>&ans,vector<int>ip,vector<int>op){
        if(ip.size()==0){
            sort(op.begin(),op.end());
            ans.push_back(op);
            return;
        }
        vector<int>op1=op;
        vector<int>op2=op;
        op2.push_back(ip[ip.size()-1]);
        ip.pop_back();
        solve(ans,ip,op1);
        solve(ans,ip,op2);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>op;
        solve(ans,nums,op);
        return ans;
    }

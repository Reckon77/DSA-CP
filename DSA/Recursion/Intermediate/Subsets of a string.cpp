//https://practice.geeksforgeeks.org/problems/power-set-using-recursion/1/
//Subsets of a string
void solve(vector<string> &ans,string ip,string op){
    if(ip.length()==0){
        ans.push_back(op);
        return;
    }
    string op1=op;
    string op2=op+ip[0];
    ip.erase(0,1);
    solve(ans,ip,op1);
     solve(ans,ip,op2);
}
vector <string> powerSet(string s)
{
   //Your code here
   string op={""};
   vector<string>ans;
   solve(ans,s,op);
   return ans;
}

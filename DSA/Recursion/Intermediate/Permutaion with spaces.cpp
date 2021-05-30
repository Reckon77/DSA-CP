//https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1/
void generate(vector<string>&ans,string ip,string op){
        if(ip.length()==0){
            ans.push_back(op);
            return;
        }
        string op1=op+ip[0];
        string op2=op;
        op2.push_back(' ');
        op2.push_back(ip[0]);
        ip.erase(0,1);
        generate(ans,ip,op2);
         generate(ans,ip,op1);
        
        
    }
    vector<string> permutation(string S){
        // Code Here
        vector<string>ans;
        string op;
        op.push_back(S[0]);
        S.erase(0,1);
        generate(ans,S,op);
        return ans;
    }

//https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1
//Generate balanced parenthesis 
 void generate(vector<string>&ans,string ip,int o,int c){
        if(o==0&&c==0){
            ans.push_back(ip); 
            return;
        }
        if(o!=0){
            generate(ans,ip+'(',o-1,c); 
        }
        if(c>o){
             generate(ans,ip+')',o,c-1);
        }
       
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>ans;
        string s1={""};
        generate(ans,s1,n,n);
        return ans;
    }

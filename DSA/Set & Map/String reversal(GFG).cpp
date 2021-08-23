//https://practice.geeksforgeeks.org/problems/string-reversalunpublished-for-now5324/1/
string reverseString(string s)
{
    //code here.
    unordered_map<char,int>m1;
    string ans="";
    for(int i=s.size()-1;i>=0;i--){
       
        if(m1.find(s[i])==m1.end()&&s[i]!=' '){
            ans.push_back(s[i]);
            m1[s[i]]++;
        }
    }
    return ans;
}

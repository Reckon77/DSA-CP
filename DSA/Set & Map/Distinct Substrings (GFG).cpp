//https://practice.geeksforgeeks.org/problems/distinct-substrings2516/1/
int fun(string s)
{
    //code here
    unordered_map<string,int>m1;
    for(int i=0;i<s.size()-1;i++){
        string temp;
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        m1[temp]++;
    }
    return m1.size();
    
}

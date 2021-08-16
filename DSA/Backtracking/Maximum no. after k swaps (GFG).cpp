//https://practice.geeksforgeeks.org/problems/largest-number-in-k-swaps-1587115620/1
//https://www.youtube.com/watch?v=5crucASFoA4
//Getting TLE dont know why
void solve(string &ans,string s,int k){
       if(s>ans){
           ans=s;
       }
       if(k==0){
           return;
       }
       for(int i=0;i<s.size()-1;i++){
           for(int j=i+1;j<s.size();j++){
               if(s[j]>s[i]){
                   swap(s[i],s[j]);
                   solve(ans,s,k-1);
                   swap(s[i],s[j]);
               }
           }
       }
   }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string ans=str;
       solve(ans,str,k);
       return ans;
      
    }

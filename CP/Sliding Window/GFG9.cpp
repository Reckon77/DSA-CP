//Gives TLE
//https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1/
string smallestWindow (string s, string p){
        // Your code here
       unordered_map<char,int>m1,m2;
       for(int i=0;i<p.length();i++){
           m1[p[i]]++;
       }
       int mct=0,dmct=p.length(),n=s.length();
       int i=-1,j=-1;
       string ans="";
       while(true){
           //accquire
           bool f1=false,f2=false;
           while(i<n&&mct<dmct){
               i++;
               m2[s[i]]++;
               if(m2[s[i]]<=m1[s[i]]){
                   mct++;
               }
               f1=true;
           }
           //collect ans and release
           while(j<i&&mct==dmct){
               string pans=s.substr(j+1,i-j);
               if(ans.length()==0||pans.length()<ans.length()){
                   ans=pans;
               }
               j++;
               if(m2[s[j]]==1){
                   m2.erase(s[j]);
               }else{
                     m2[s[j]]--;
               }
               if(m2[s[j]]<m1[s[j]]){
                   mct--;
               }
               f2=true;
           }
           if(f1==false&&f2==false){
               break;
           }
       }
       if(ans.length()==0){
           ans="-1";
       }
       return ans;
    }

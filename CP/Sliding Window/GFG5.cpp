//https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1
int longestUniqueSubsttr(string S){
        //code
        int j=0,i=0;
        unordered_map<char,int>m1;
        int ans=INT_MIN;
        while(j<S.length()){
            m1[S[j]]++;
            if(m1.size()==j-i+1){
                ans=max(ans,j-i+1);
                j++;
            }else if(m1.size()<j-i+1){
                while(m1.size()<j-i+1){
                    m1[S[i]]--;
                    if(m1[S[i]]==0){
                        m1.erase(S[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return ans;
        
    }

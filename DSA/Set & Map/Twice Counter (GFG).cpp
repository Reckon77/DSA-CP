//https://practice.geeksforgeeks.org/problems/twice-counter4236/1/
int countWords(string list[], int n)
        {
           //code here.
           unordered_map<string,int>m1;
           for(int i=0;i<n;i++){
               m1[list[i]]++;
           }
           int cnt=0;
           for(auto &p:m1){
               if(p.second==2){
                   cnt++;
               }
           }
           return cnt;
        }

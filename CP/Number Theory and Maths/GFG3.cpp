//https://www.geeksforgeeks.org/find-divisors-natural-number-set-1/
//https://practice.geeksforgeeks.org/problems/kth-smallest-factor2345/1
int kThSmallestFactor(int N , int K) {
        // code here
        vector<int>ans;
        for(int i=1;i<=sqrt(N);i++){
            if(N%i==0){
            if(N/i==i){
                ans.push_back(i);
            }else if(N%i==0){
                ans.push_back(i);
                ans.push_back(N/i);
            }  
            }
           
        }
        sort(ans.begin(),ans.end());
        if(K>ans.size()){
            return -1;
        }
        return ans[K-1];
    }

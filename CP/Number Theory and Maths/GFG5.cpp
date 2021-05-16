 //https://practice.geeksforgeeks.org/problems/largest-prime-factor2601/1
 //https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
 long long int largestPrimeFactor(int N){
        // code here
        int ans=INT_MIN;
        for(int i=2;i*i<=N;i++){
            if(N%i==0){
                ans=max(ans,i);
                while(N%i==0){
                    N/=i;
                }
            }
        }
        if(N>1){
            ans=max(ans,N);
        }
        return ans;
    }

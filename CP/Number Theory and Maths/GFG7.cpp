//https://practice.geeksforgeeks.org/problems/factors-sum2016/1#
//https://www.geeksforgeeks.org/sum-factors-number/
long long factorSum(int N)
    {
        // Your code goes here
        long long int ans=0;
        for(int i=1;i*i<=N;i++){
            if(N%i==0){
                if(N/i==i){
                    ans+=i;
                }else{
                    ans+=i;
                    ans+=N/i;
                }
            }
        }
        return ans;
    }

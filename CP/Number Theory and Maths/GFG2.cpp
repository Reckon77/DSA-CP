//https://www.geeksforgeeks.org/sieve-of-eratosthenes/
//https://practice.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1#
vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        int s=100001;
        vector<int>ans,sieve(s,1);
        sieve[0]=sieve[1]=0;
        for(int i=2;i*i<s;i++){
            if(sieve[i]){
                for(int j=i*i;j<s;j+=i){
                    sieve[j]=0;
                }
            }
        }
        for(int i=0;i<=N;i++){
            if(sieve[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }

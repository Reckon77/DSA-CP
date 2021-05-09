//https://www.geeksforgeeks.org/least-prime-factor-of-numbers-till-n/
//https://practice.geeksforgeeks.org/problems/least-prime-factor5216/1#
 vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>lp(n+1,0);
        // cout<<lp[0]<<" "<<lp[1];
        lp[1]=1;
        for(int i=2;i<=n;i++){
            if(lp[i]==0){
                lp[i]=i;
                for(int j=i*i;j<=n;j+=i){
                    if(lp[j]==0){
                        lp[j]=i;
                    }
                }
            }
        }
        return lp;
    }

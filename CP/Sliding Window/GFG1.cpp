 //https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1/
 int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i,j,sum,mx;
        i=j=sum=0;
        mx=INT_MIN;
        while(j<N){
            sum+=Arr[j];
            if(j-i+1<K){
                j++;
            }else if(j-i+1==K){
                mx=max(sum,mx);
                sum=sum-Arr[i];
                i++;
                j++;
            }
        }
        return mx;
        
    }

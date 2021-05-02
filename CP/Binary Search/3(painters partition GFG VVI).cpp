 //https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
 long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long low=0,high=0,mid,ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]>low){
                low=arr[i];
            }
            high+=arr[i];
        }
        while(low<=high){
            mid=low+(high-low)/2;
            long long p=1,sum=0;
            for(int i=0;i<n;i++){
                sum+=arr[i];
                if(sum>mid){
                    p++;
                    sum=arr[i];
                }
            }
            if(p<=k){
               ans=mid;
               high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }

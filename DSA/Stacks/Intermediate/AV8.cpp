//https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
//https://www.geeksforgeeks.org/trapping-rain-water/
int trappingWater(int arr[], int n){
        // Code here
        int mxl[n],mxr[n];
        mxl[0]=arr[0];
        mxr[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            mxl[i]=max(arr[i],mxl[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            mxr[i]=max(arr[i],mxr[i+1]);
        }
        int ans=0;
       for(int i=0;i<n;i++){
          ans+=min(mxl[i],mxr[i])-arr[i]; 
       }
       return ans;
    }

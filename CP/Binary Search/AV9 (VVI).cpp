//https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1#
//Allocate minimum no. of pages
int findPages(int arr[], int n, int m) {
        //code here
        if(m>n){
            return -1;
        }
        int res=-1;
        int start=INT_MIN;
        int end=0,mid;
        for(int i=0;i<n;i++){
            end+=arr[i];
            start=max(arr[i],start);
        }
        while(start<=end){
            mid=(start+end)/2;
            int student=1;
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=arr[i];
                if(sum>mid){
                    student++;
                    sum=arr[i];
                }
            }
            if(student>m){
                    start=mid+1;
                    continue;
            }
            res=mid;
            end=mid-1;
        }
        return res;
        
    }

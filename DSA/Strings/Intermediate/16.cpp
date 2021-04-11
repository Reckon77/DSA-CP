vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int k=-1;
        for(int i=0;i<N-1;i++){
            if(arr[i]<arr[i+1])
                k=i;
        }
        if(k==N-1||k==-1){
            sort(arr.begin(),arr.end());
            return arr;
        }
        int l=k;
        for(int i=k;i<N;i++){
            if(arr[k]<arr[i]){
                l=i;
            }
        }
        swap(arr[k],arr[l]);
        int i=k+1,j=N-1;
        while(i<=j){
            swap(arr[i++],arr[j--]);
        }
         return arr;
    }
   

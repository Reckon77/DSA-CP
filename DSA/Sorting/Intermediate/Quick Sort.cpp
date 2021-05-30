//https://practice.geeksforgeeks.org/problems/quick-sort/1/
  void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high)return;
        int p=partition(arr,low,high);
    	quickSort(arr,low,p-1);
    	quickSort(arr,p+1,high);
    }
    
    
    int partition (int arr[], int low, int high)
    {
       	// Your code here
        int pivot = arr[high];
        int pi=low;
        for(int i=low;i<high;i++){
            if(arr[i]<=pivot){
                swap(arr[i],arr[pi++]);
            }
        }
        swap(arr[pi],arr[high]);
        return pi;
    }

//Sort in specific order
//https://practice.geeksforgeeks.org/problems/sort-in-specific-order2422/1/
//https://www.geeksforgeeks.org/sort-even-numbers-ascending-order-sort-odd-numbers-descending-order/
//Algo1
int i = 0, j = n - 1;
	while (i < j) {
		while (arr[i] % 2 != 0)i++;
		while (arr[j] % 2 == 0)j--;
		if (i < j) {
			swap(arr[i], arr[j]);
		}
	}
	sort(arr.begin(), arr.begin() + i, greater<int>());
	sort(arr.begin() + i, arr.end());
	
//Algo2 (optimized)
void sortIt(long long arr[], long long n)
    {
        //code here.
        for(long long i=0;i<n;i++){
            if(arr[i]%2==1){
                arr[i]=-arr[i];
            }
        }
        sort(arr,arr+n);
        for(long long i=0;i<n;i++){
            if(arr[i]<0){
                arr[i]=-arr[i];
            }
        }
    } 

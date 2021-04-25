//Normal binary search
int bsearch(int arr[], int n, int ele) {
	int s = 0, e = n - 1;
	while (s <= e) {
		// int mid=(s+e)/2;
		int mid = s + (e - s) / 2; //to avoid integer overflow
		if (arr[mid] == ele) {
			return mid;
		} else if (arr[mid] > ele) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return -1;
}

//Binary search on descending sorted array
//10
//10 9 8 7 6 5 4 3 2 1
int bsearch(int arr[], int n, int ele) {
	int s = 0, e = n - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == ele) {
			return mid;
		} else if (arr[mid] > ele) {
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return -1;
}

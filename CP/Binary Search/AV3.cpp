//first occurence of an element
//2 4 10 10 10 18 20
//ele=10
//o/p=2
int firstoccur(int arr[], int n, int ele) {
	int s = 0, e = n - 1;
	int res = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == ele) {
			res = mid;
			e = mid - 1;
		} else if (arr[mid] > ele) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return res;
}
//last occurence of an element
//2 4 10 10 10 18 20
//ele=10
//o/p=4
int lastoccur(int arr[], int n, int ele) {
	int s = 0, e = n - 1;
	int res = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == ele) {
			res = mid;
			s=mid+1;
		} else if (arr[mid] > ele) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return res;
}

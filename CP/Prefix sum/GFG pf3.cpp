//https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/
//https://practice.geeksforgeeks.org/problems/max-value-after-m-range-operation/0/
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;
	cin>>tc;
	while(tc--){
	    int n;
	    cin>>n;
	    int arr[n]={0};
	    int m;
	    cin>>m;
	    for(int i=0;i<m;i++){
	        int a,b,k;
	        cin>>a>>b>>k;
	        arr[a]+=k;
	        arr[b+1]-=k;
	    }
	    for(int i=1;i<n;i++){
	        arr[i]=arr[i-1]+arr[i];
	    }
	    int maxe=arr[0];
	    for(int i=0;i<n;i++){
	        maxe=max(maxe,arr[i]);
	    }
	    cout<<maxe<<endl;
	}
	return 0;
}

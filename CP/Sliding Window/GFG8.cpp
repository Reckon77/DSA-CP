//https://practice.geeksforgeeks.org/problems/longest-subarray-with-atmost-k-even-elements/0/
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;
	cin>>tc;
	while(tc--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int i=0,j=0,ans=0,count=0;
	    while(j<n){
	        if(arr[j]%2==0){
	            count++;
	        }
	        if(count<=k){
	            ans=max(ans,j-i+1);
	            j++;
	        }else{
	            while(count>k){
	                if(arr[i]%2==0){
	                    count--;
	                }
	                i++;
	            }
	            j++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

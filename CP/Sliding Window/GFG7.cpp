//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1/
vector<int> subarraySum(int arr[], int n, int s){
        
        // Your code here
        vector<int>ans;
        int i=0,j=0,sum=0;
        while(j<n){
            sum+=arr[j];
            if(sum<s){
                j++;
            }else if(sum==s){
                ans.push_back(i+1);
                ans.push_back(j+1);
                   return ans;
                j++;
            }else if(sum>s){
                while(sum>s){
                    sum-=arr[i];
                    i++;
                }
                if(sum==s){
                ans.push_back(i+1);
                ans.push_back(j+1);
                   return ans;
                }
                j++;
            }
        }
        ans.push_back(-1);
        return ans;
    }

 //https://practice.geeksforgeeks.org/problems/subset-sums2234/1
 //https://www.youtube.com/watch?v=rYkfBRtMJr8
 void funsubset(vector<int>&ans,vector<int>arr,int l,int sum,int N){
        if(l==N){
            ans.push_back(sum);
            return;
        }
        funsubset(ans,arr,l+1,sum+arr[l],N);
        funsubset(ans,arr,l+1,sum,N);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
       vector<int>ans;
       funsubset(ans,arr,0,0,N);
       sort(ans.begin(),ans.end());
       return ans;
        
    }

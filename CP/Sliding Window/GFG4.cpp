  //https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1/
  vector <int> max_of_subarrays(int *arr, int n, int k){
        // your code here
        list<int>l;
        vector<int>ans;
        int i=0,j=0;
        while(j<n){
            while(l.size()>0&&l.back()<arr[j]){
                l.pop_back();
            }
            l.push_back(arr[j]);
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                ans.push_back(l.front());
                if(arr[i]==l.front()){
                    l.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }

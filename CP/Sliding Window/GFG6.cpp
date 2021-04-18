//https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1/
vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        int i=0,j=0;
        unordered_map<int,int>m1;
        vector<int>ans;
        while(j<n){
            m1[A[j]]++;
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                ans.push_back(m1.size());
                m1[A[i]]--;
                if(m1[A[i]]==0){
                    m1.erase(A[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }

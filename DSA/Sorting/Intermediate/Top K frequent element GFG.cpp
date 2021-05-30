 //https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1/
 vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int>m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto &i:m1){
            v.push_back(make_pair(i.second,i.first));
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        vector<int>ans;
        int i=0;
        while(k--){
            ans.push_back(v[i].second);
            i++;
        }
        return ans;
    }

 //https://leetcode.com/problems/majority-element-ii/submissions/
 //https://www.youtube.com/watch?v=yDbkQd9t2ig&list=TLPQMjYwNzIwMjHDQkOPsCSXtw&index=2
 vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int me1=-1,me2=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==me1){
                cnt1++;
            }else if(nums[i]==me2){
                cnt2++;
            }else if(cnt1==0){
                me1=nums[i];
                cnt1=1;
            }else if(cnt2==0){
                me2=nums[i];
                cnt2=1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=cnt2=0;
        for(auto a:nums){
            if(a==me1){
                cnt1++;
            }
            if(a==me2){
                cnt2++;
            }
        }
        vector<int>ans;
        if(cnt1>nums.size()/3){
            ans.push_back(me1);
        }
         if(cnt2>nums.size()/3){
            ans.push_back(me2);
        }
        if(ans.size()==2&&ans[0]==ans[1]){
            ans.pop_back();
        }
        return ans;
    }

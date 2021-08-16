//Finding duplicate in O(1) space and O(n) time
//https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int ele;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])]>0){
                nums[abs(nums[i])]=-nums[abs(nums[i])];
            }else{
                ele=abs(nums[i]);
            }
        }
        return ele;
    }
};

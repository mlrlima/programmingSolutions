//after countless tentatives with recursion lmao
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int far=0;
        for(int i=0;i<nums.size();i++){
            if(far+nums[far]<i) return false;
            if(far+nums[far]>= nums.size()-1) return true;
            if(far+nums[far] < i+nums[i]) far=i;
        }

        return false;
    }
};

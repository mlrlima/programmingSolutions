class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1]) return nums[0];
        int low=0, high=nums.size()-1;
        while(low<high){
            if(low==high-1 || nums[high]==nums[low]) return min(nums[low], nums[high]);
            int mid=(low+high)/2;
            if(nums[mid]<nums[low]) high=mid;
            else low=mid;
        }
        return nums[low];
    }
};

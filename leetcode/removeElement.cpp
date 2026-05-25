class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last=nums.size()-1;
        int count=0;

        for(int i=0;i<=last;i++){
            if(nums[i]==val){
                count++;
                swap(nums[i], nums[last]);
                last--;
                i--;
            }
        }
      
        return nums.size()-count;

    }
};

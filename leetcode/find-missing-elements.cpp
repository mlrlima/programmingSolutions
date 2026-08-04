class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> missing;

        int m=nums[0]+1; //smallest +1
        for(int i=1;i<nums.size();i++){
            if(m==nums[i]) m++;
            else{
                missing.push_back(m);
                m++;
                i--;
            }
        }


        return missing;
    }
};

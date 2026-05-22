class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int> > nums2;
        for(int i=0;i<nums.size();i++){
            nums2.push_back(make_pair(nums[i], i));
        }

        sort(nums2.begin(), nums2.end());

        int i=0, j=nums.size()-1;
        while(nums2[i].first + nums2[j].first !=target){
            if(nums2[i].first + nums2[j].first >target) j--;
            else i++;
        }

        vector<int> ret={nums2[i].second,nums2[j].second};
        return ret;
    }
};

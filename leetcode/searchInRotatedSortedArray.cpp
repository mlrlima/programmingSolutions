class Solution {
public:

    int binarySearch(vector<int>& ordered, int n){
        int low=0, high=ordered.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(ordered[mid]==n) return mid;
            else if(ordered[mid]>n) high=mid-1;
            else low=mid+1;
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        
        vector<int> ordered =nums;
        sort(ordered.begin(), ordered.end());

        int originalIndex=binarySearch(ordered, target);
        if(originalIndex==-1) return -1;

        int firstItemIndex=binarySearch(ordered, nums[0]);

        int newIndex=originalIndex-firstItemIndex;
        if(newIndex<0) newIndex=nums.size()+newIndex;

        return newIndex;

    }
};

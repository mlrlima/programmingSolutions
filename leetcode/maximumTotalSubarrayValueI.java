class Solution {
    public long maxTotalValue(int[] nums, int k) {
        int max=nums[0];
        int min=nums[0];

        for(int i=1;i<nums.length;i++){
            if(max<nums[i]) max=nums[i];
            if(min>nums[i]) min=nums[i];
        }

        long lmax=max;
        long lmin=min;
        long lk=k;

        return (lmax-lmin)*lk;
    }
}

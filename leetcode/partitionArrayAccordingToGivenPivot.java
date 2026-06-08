class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        List<Integer> less=new ArrayList<>();
        List<Integer> greater=new ArrayList<>();
        List<Integer> equal=new ArrayList<>();

        for(int i=0;i<nums.length;i++){
            if(nums[i]>pivot) greater.add(nums[i]);
            else if(nums[i]==pivot) equal.add(nums[i]);
            else less.add(nums[i]);
        }

        int[] ret=new int[nums.length];

        int j=0;
        for(int i=0;i<less.size();i++, j++) ret[j]=less.get(i);
        for(int i=0;i<equal.size();i++, j++) ret[j]=equal.get(i);
        for(int i=0;i<greater.size();i++, j++) ret[j]=greater.get(i);


        return ret;
    }
}

class Solution {

    int gcd(int a, int b){
        if(a==0) return b;
        if(b==0) return a;

        // Base case
        if(a==b) return a;

        // a is greater
        if(a > b)return gcd(a-b, b);

        return gcd(a, b-a);
    }

    public int findGCD(int[] nums) {
        int smallest=nums[0];
        int largest=nums[0];

        for(int i=1;i<nums.length;i++){
            if(nums[i]> largest) largest=nums[i];
            if(nums[i]<smallest) smallest=nums[i];
        }

        return gcd(smallest, largest);

    }
}

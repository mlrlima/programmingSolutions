class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
        int[] sorted=arr;
        Arrays.sort(sorted);

        for(int i=2;i<sorted.length;i++){
            if(sorted[i]-sorted[i-1]!=sorted[1]-sorted[0]) return false;
        }

        return true;
    }
}

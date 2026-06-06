class Solution {
    public int[] leftRightDifference(int[] nums){
        
        int l=nums.length; 

        int[] leftSum=new int[l]; 
        int[] rightSum=new int[l];
        int[] answer=new int[l];

        for(int i=1;i<l;i++){
            int j=(l-1)-i;

            leftSum[i]=leftSum[i-1]+nums[i-1];
            rightSum[j]=rightSum[j+1]+nums[j+1];

            answer[i]+=leftSum[i];
            answer[j]-=rightSum[j];

            if(i>=j){
                answer[i]=Math.abs(answer[i]);
                answer[j]=Math.abs(answer[j]);
            }
        }


        return answer;
    }
}

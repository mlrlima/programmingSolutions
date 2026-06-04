class Solution {
    public int totalWaviness(int num1, int num2) {
        int count=0;
        for(int i=num1;i<=num2;i++){
            //100 or less
            if(i-100<=0) continue;

            String s=String.valueOf(i);
            for(int j=1;j<s.length()-1;j++){
                if(s.charAt(j-1)>s.charAt(j) && s.charAt(j)<s.charAt(j+1)) count++;
                else if(s.charAt(j-1)<s.charAt(j) && s.charAt(j)>s.charAt(j+1)) count++;
            }

        }

        return count;
    }
}

class Solution {
    public long sumAndMultiply(int n) {
        int sum=0;
        String x="0";
        String sn=String.valueOf(n);

        for(int i=0;i<sn.length();i++){
            if(sn.charAt(i)!='0'){
                x+=sn.charAt(i);
                sum+=(sn.charAt(i)-'0');
            }
        }

        n=Integer.parseInt(x);

        return (long)n*(long)sum;

    }
}

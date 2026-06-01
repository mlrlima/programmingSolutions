class Solution {
    public int pivotInteger(int n) {
        int l=0, r=n;
        for(int i=1;i<=n;i++) l+=i;

        int i=n;
        while(i>0){
            if(r==l) return i;

            l-=i;
            i--;
            r+=i;
        }

        return -1;

    }
}

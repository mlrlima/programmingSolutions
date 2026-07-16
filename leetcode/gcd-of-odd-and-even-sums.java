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

    public int gcdOfOddEvenSums(int n) {
        int sumOdd=0, sumEven=0;
        int odd=1, even=2;
        while(n>0){
            sumOdd+=odd;
            sumEven+=even;

            odd+=2;
            even+=2;
            n--;
        }

        return gcd(sumOdd, sumEven);
    }
}

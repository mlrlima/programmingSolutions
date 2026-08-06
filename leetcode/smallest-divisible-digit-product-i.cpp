class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            string str=to_string(n);
            int product=1;
            for(int i=str.size()-1;i>=0;i--){
                product*=(str[i]-'0');
            }

            if(product%t==0) return stoi(str);

            n++;
        }
    }
};

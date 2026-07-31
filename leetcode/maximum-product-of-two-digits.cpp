class Solution {
public:
    int maxProduct(int n) {
        string sorted=to_string(n);
        sort(sorted.begin(), sorted.end());

        int a=sorted[sorted.size()-1]-'0';
        int b=sorted[sorted.size()-2]-'0';

        return a*b;
    }
};

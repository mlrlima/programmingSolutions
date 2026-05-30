class Solution {
public:
    int minElement(vector<int>& nums) {
        int min;
        for(int i=0;i<nums.size();i++){
            
            string s=to_string(nums[i]);
            int sum=0;
            for(int j=0;j<s.size();j++){
                sum+=(s[j]-'0');
            }

            if(i==0 || sum<min) min=sum;
        }

        return min;
    }
};

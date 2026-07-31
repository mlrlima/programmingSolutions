class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int max=0;

        if(nums.size()<=6){

            for(int i=0;i<nums.size();i++){
                for(int j=i+1; j<nums.size();j++){
                    for(int k=j+1;k<nums.size();k++){

                        int p=nums[i]*nums[j]*nums[k];
                        if(max==0 || p>max) max=p;
                    }
                }
            }

        }else{
            vector<int> selected(6);

            selected[0]=nums[0];
            selected[1]=nums[1];
            selected[2]=nums[2];
            
            selected[3]=nums[nums.size()-1];
            selected[4]=nums[nums.size()-2];
            selected[5]=nums[nums.size()-3];

            for(int i=0; i<selected.size(); i++){
                for(int j=i+1; j<selected.size();j++){
                    for(int k=j+1;k<selected.size();k++){

                        int p=selected[i]*selected[j]*selected[k];
                        if(max==0 || p>max) max=p;
                    }
                }
            }
        }

        return max;
    }
};

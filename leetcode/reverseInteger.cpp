class Solution {
public:

    int convert(string s){
        bool negative=false;
        if(s[s.size()-1]=='-'){
            negative=true;
            s.pop_back();
        }
        
        string range="2147483647";
        if(s.size()==range.size()){
            for(int i=0;i<s.size();i++){
                if(s[i]>range[i]) return 0;
                else if(s[i]<range[i]) break;
            }
        }

        int reversed=stoi(s);
        if(negative) reversed*=-1;

        return reversed;

    }

    int reverse(int x) {
        string s=to_string(x);
        ::reverse(s.begin(), s.end());

        return convert(s);
    }
};

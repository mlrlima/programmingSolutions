class Solution {
public:

    string divide(string s){
        //removing last digit is a shortcut
        s.erase(s.size() - 1);
        return s;
    }

    string add(string s){
        string n="";
        char carry='1';

        int i=s.size()-1;
        while(i>=0){
            if(carry=='1' && s[i]=='1') n+="0";
            else if(carry=='1' && s[i]=='0'){
                n+="1";
                carry='0';
            }else n+=s[i];

            i--;
        }

        if(carry=='1') n+="1";

        reverse(n.begin(), n.end());
        return n;
    }

    bool allZero(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') return false;
        }

        return true;
    }

    int numSteps(string s) {
        
        int steps=0;

        while(s.size()>1){

            if(allZero(s)) break;

            if(s[s.size()-1]=='0') s=divide(s);
            else s=add(s);

            steps++;
        }

        return steps;
    }
};

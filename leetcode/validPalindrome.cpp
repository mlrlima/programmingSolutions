class Solution {
public:
    bool isNumber(char c){
        if(c>='0' && c<='9') return true;
        return false;
    }

    bool isLetter(char c){
        if(c>='a' && c<='z') return true;
        if(c>='A' && c<='Z') return true;
        return false;
    }

    bool isPalindrome(string s) {
        bool yn=true;
        int i=0,j=s.size()-1;
        while(i<j){
            //cout<<"i: "<<i<<" "<<s[i]<<endl;
            //cout<<"j: "<<j<<" "<<s[j]<<endl;
            
            if(!isNumber(s[i]) && !isLetter(s[i])) i++;
            else if(!isNumber(s[j]) && !isLetter(s[j])) j--;
            else if(s[i]==s[j]){
                i++;
                j--;
            }else if(isLetter(s[i]) && isLetter(s[j]) && ((s[i]-'a' == s[j]-'A') || (s[i]-'A' == s[j]-'a'))){
                i++;
                j--;
            }else{
                yn= false;
                break;
            }
        }

        return yn;

    }
};

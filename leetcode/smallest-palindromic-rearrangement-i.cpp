class Solution {
public:
    string smallestPalindrome(string s) {
        int strSize=s.size();

        if(strSize<3) return s;

        sort(s.begin(), s.end());

        string p="";
        string single="";
        for(int i=1;i<strSize;i+=2){
            if(s[i-1]==s[i]) p+=s[i];
            else{
                single+=s[i-1];
                i--;
            }
        }

        if(strSize%2==1 && single=="") single+=s[strSize-1];

        //cout<<p<<endl<<single<<endl;

        string r=p;
        reverse(r.begin(), r.end());

        return p+single+r;
    }
};

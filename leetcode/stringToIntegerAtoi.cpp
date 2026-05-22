class Solution {
public:

    string intoRange(string s){
        while(s[0]=='0'){
            s.erase(s.begin());
        }

        if(s=="") return "0";

        string range="2147483648";
        if(s.size()>range.size()) return "2147483648";
        if(s.size()==range.size()){
            for(int i=0;i<s.size();i++){
                if(s[i]>range[i]) break;
                else if(s[i]<range[i]) return s;
            }
            return "2147483648";
        }

        return s;
    }


    int myAtoi(string s) {
        string result="0";
        bool negative=false;
        for(int i=0;i<s.size();i++){
            if(result.size()>1 && (s[i]<'0' || s[i]>'9')) break;
            if(result.size()==1 && s[i]==' ') continue;
            if((s[i]<'0' || s[i]>'9') && s[i]!='-' && s[i]!='+') break;

            if(s[i]=='-' && i+1<s.size() && s[i+1]>='0' && s[i+1]<='9'){
                negative=true;
                cout<<negative<<endl;
                continue;
            }else if(s[i]=='+' && i+1<s.size() && s[i+1]>='0' && s[i+1]<='9'){
                continue;
            }else if(s[i]<'0' || s[i]>'9') break;

            

            result+=s[i];
        }

        result=intoRange(result);
        cout<<result<<endl;

        if(negative){
            if(result=="2147483648") return -2147483648;
            return stoi(result)*(-1);
        }

        if(result=="2147483648") return 2147483647;
        else return stoi(result);

    }
};

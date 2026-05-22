class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char, string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        
        vector<string> answer;

        for(int i=0; i<m[digits[0]].size(); i++){
            string s="";
            s+=m[digits[0]][i];
            if(digits.size()==1){
                answer.push_back(s);
                continue;
            }

            for(int j=0; j<m[digits[1]].size(); j++){
                string s2=s+m[digits[1]][j];
                if(digits.size()==2){
                    answer.push_back(s2);
                    continue;
                }

                for(int k=0; k<m[digits[2]].size(); k++){
                    string s3=s2+m[digits[2]][k];
                    if(digits.size()==3){
                        answer.push_back(s3);
                        continue;
                    }

                    for(int l=0;l<m[digits[3]].size(); l++){
                        string s4=s3+m[digits[3]][l];
                        answer.push_back(s4);
                    }
                }
            }
        }

        return answer;

    }
};

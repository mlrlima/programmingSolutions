class Solution {
public:
    int numberOfSpecialChars(string word) {
        bool lower[26]={};
        bool upper[26]={};

        for(int i=0;i<word.size();i++){
            if(word[i]>='a') lower[word[i]-'a']=true;
            else upper[word[i]-'A']=true;
        }

        int count=0;
        for(int i=0;i<26;i++){
            if(upper[i] && lower[i]) count++;
        }

        return count;
    }
};

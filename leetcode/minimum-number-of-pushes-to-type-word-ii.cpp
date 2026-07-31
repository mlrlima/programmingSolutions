class Solution {
public:
    int minimumPushes(string word) {
        vector<pair<char, int> > v(26);

        for(int i=0;i<word.size();i++){
            v[word[i]-'a'].second++;
        }

        sort(v.begin(), v.end(),
        [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        int eight=8;
        int quantity=1;
        int r=0;

        for(int i=0; i<v.size() && v[i].second>0; i++){
            r+=(quantity*v[i].second);
            eight--;
            if(eight==0){
                quantity++;
                eight=8;
            }
        }

        return r;

    }
};

class Solution {
public:
    int minimumPushes(string word) {
        
        int ws=word.size();
        if(ws<=8) return ws;
        if(ws<=16) return 8+((ws-8)*2);
        if(ws<=24) return 8+16+((ws-16)*3);

        return 8+16+24+((ws-24)*4);
    }
};

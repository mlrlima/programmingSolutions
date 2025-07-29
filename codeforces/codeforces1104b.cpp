#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cin>>s;

    bool win=false;

    int i=1;
    bool tem=false;

    while(s.size()>1 && i<s.size()){
        if(s[i-1]==s[i]){
            s.erase(s.begin()+(i));
            s.erase(s.begin()+(i-1));
            win=!win;
            tem=true;
            i--;
        }else{
            i++;
        }

        if(i>=s.size() && !tem) break;
        else if(i>=s.size()){
            i=1;
            tem=false;
        }
    }

    if(win) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}
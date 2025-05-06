#include<iostream>
#include<string>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        long long res=0;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='A' ||
                s[i]=='e' || s[i]=='E' ||
                s[i]=='i' || s[i]=='I' ||
                s[i]=='o' || s[i]=='O' ||
                s[i]=='s' || s[i]=='S'
            ) res*=3;
            else res*=2;
        }

        cout<<res<<endl;
    }

    return 0;
}
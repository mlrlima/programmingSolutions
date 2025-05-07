#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int n;cin>>n;n--;
        string s1;cin>>s1;
        bool en=false;
        while(n--){
            string s2;cin>>s2;
            if(s2!=s1) en=true;
        }

        if(en) cout<<"ingles"<<endl;
        else cout<<s1<<endl;
    }

    return 0;
}
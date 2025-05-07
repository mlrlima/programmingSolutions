#include<iostream>
#include<string>
using namespace std;

bool ehconsoante(char c){
    if(c=='A' || c=='a') return false;
    if(c=='E' || c=='e') return false;
    if(c=='I' || c=='i') return false;
    if(c=='O' || c=='o') return false;
    if(c=='U' || c=='u') return false;

    return true;
}

int main(){

    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        bool sn=false;
        for(int i=2;i<s.size();i++){
            if(ehconsoante(s[i]) && ehconsoante(s[i-1]) && ehconsoante(s[i-2])){
                sn=true;
                break;
            }
        }

        if(sn) cout<<s<<" nao eh facil\n";
        else cout<<s<<" eh facil\n";
    }

    return 0;
}
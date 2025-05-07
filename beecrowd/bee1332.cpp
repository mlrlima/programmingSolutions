#include<iostream>
#include<string>
using namespace std;

bool one(string s){
    int cont=0;
    if(s[0]=='o') cont++;
    if(s[1]=='n') cont++;
    if(s[2]=='e') cont++;
    
    if(cont<2) return false;
    
    return true;
}

int main(){
    
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        if(s.size()==5) cout<<"3\n";
        else if(one(s)) cout<<"1\n";
        else cout<<"2\n";
    }
    
    return 0;
}

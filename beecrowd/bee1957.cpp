#include<iostream>
#include<string>
using namespace std;

string dec_hex(string num){
    int n=stoi(num);
    string res="",res1="";
    while(n>0){
        int resto=n%16;
        if(resto<10) res+=(resto+'0');
        else res+=(resto+'A'-10);
        n/=16;
    }

    bool comeco=true;
    for(int i=res.size()-1;i>=0;i--){
        if(comeco && res[i]=='0'){
            continue;
        }

        res1+=res[i];
        comeco=false;
    }

    if(res1=="") res1="0";

    return res1;
}

int main(){
    
    
    string s;cin>>s;
    cout<<dec_hex(s)<<endl;
    
    return 0;
}

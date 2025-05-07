#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    while(cin>>s){
        string r="", l="", j="";
        int i=0;
        while(s[i]!='+'){
            r+=s[i];
            i++;
        }
        i++;
        while(s[i]!='='){
            l+=s[i];
            i++;
        }
        i++;
        while(i<s.size()){
            j+=s[i];
            i++;
        }

        //cout<<r<<" "<<l<<" "<<j<<endl;

        if(r=="R"){
            int res=stoi(j)-stoi(l);
            cout<<res<<endl;  
        }else if(l=="L"){
            int res=stoi(j)-stoi(r);
            cout<<res<<endl;  
        }else{
            int res=stoi(r)+stoi(l);
            cout<<res<<endl;  
        }

    }

    return 0;
}
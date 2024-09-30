#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    while(getline(cin,s)){
        bool b=true; //true== uppercase, false== downcase
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                cout<<" ";
            }else if(b){
                if(s[i]>='A' && s[i]<='Z'){
                    cout<<s[i];
                }else{
                    cout<<char(s[i]+('A'-'a'));
                }
                b=!b;
            }else{
                if(s[i]>='a' && s[i]<='z'){
                    cout<<s[i];
                }else{
                    cout<<char(s[i]-('A'-'a'));
                }
                b=!b;
            }
        }
        cout<<endl;
    }

    return 0;
}
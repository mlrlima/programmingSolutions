#include<iostream>
#include<string>
using namespace std;

int main(){

    int t, t1=0,t2=0;
    cin>>t;
    while(t--){
        string s;
        do{
            getline(cin,s);
        }while(s=="");
        
        //cout<<s<<endl;
        if(s[5]=='1') t1+= (s[8]-'0');
        else t2+= (s[8]-'0');

        //cout<<s[8]-'0'<<endl;
    }

    cout<<t1<<" x "<<t2<<endl;

    return 0;
}
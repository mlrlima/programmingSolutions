#include<iostream>
#include<string>
using namespace std;

int main(){

    int n,um=0,zero=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='n'){
            um++;
        }else if(s[i]=='z'){
            zero++;
        }
    }

    for(int i=0;i<um;i++){
        if(i>0){
            cout<<" ";
        }
        cout<<"1";
    }

    for(int i=0;i<zero;i++){
        if(um>0 || i>0){
            cout<<" ";
        }
        cout<<"0";
    }
    cout<<endl;

    return 0;
}
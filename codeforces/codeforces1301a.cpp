#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;

        bool s=true;
        for(int i=0;i<a.size();i++){
            if(c[i]!=a[i] && c[i]!=b[i]){
                cout<<"NO\n";
                s=false;
                break;
            }
        }
        if(s){
            cout<<"YES\n";
        }
    }

    return 0;
}
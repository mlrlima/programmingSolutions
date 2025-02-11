#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<s<<": ";

        bool eh=true;
        if(s[0]<'a'){
           s[0]+=32;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]<'a'){
                s[i]+=32;
            }

            if(s[i]<=s[i-1]){
                cout<<"N\n";
                eh=false;
                break;
            }
        }
        if(eh){
            cout<<"O\n";
        }
    }

    return 0;
}
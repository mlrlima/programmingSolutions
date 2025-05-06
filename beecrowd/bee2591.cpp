#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int i=1, j=s.size()-3;
        int a=0,b=0;
        while(s[i]=='a' || s[j]=='a'){
            if(s[i]=='a'){
                a++;
                i++;
            }

            if(s[j]=='a'){
                b++;
                j--;
            }
        }

        string k="k";
        for(int i=0;i<a*b;i++) k+="a";
        cout<<k<<endl;
    }

    return 0;
}
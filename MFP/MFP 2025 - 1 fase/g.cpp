#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

    string s, s1="",s2="";
    cin>>s;

    for(int i=1;i<s.size();i+=2){
        s1+=s[i-1];
        s2+=s[i];
    }

    cout<<s1<<endl<<s2<<endl;


    return 0;
}
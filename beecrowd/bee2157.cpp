#include<iostream>
#include<string>
using namespace std;

int main(){

    int t; scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        string s="";
        for(int i=a;i<=b;i++) s+=to_string(i);

        cout<<s;
        for(int i=s.size()-1;i>=0;i--) cout<<s[i];
        cout<<endl;
    }

    return 0;
}
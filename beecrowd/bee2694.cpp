#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;scanf("%d",&n);
    while(n--){
        string s;cin>>s;
        string num1="",num2="",num3="";

        int i=0;
        while(s[i]<'0' || s[i]>'9') i++;
        while(s[i]>='0' && s[i]<='9'){
            num1+=s[i];
            i++;
        }

        while(s[i]<'0' || s[i]>'9') i++;
        while(s[i]>='0' && s[i]<='9'){
            num2+=s[i];
            i++;
        }

        while(s[i]<'0' || s[i]>'9') i++;
        while(s[i]>='0' && s[i]<='9'){
            num3+=s[i];
            i++;
        }

        long long res=stoll(num1)+stoll(num2)+stoll(num3);

        cout<<res<<endl;

    }

    return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

    int n,p,k;
    scanf("%d %d %d",&n,&p,&k);


    if(n==2 && p==1){
        cout<<"2\n";
        return 0;
    }else if(n==2 && p==2){
        cout<<"1\n";
        return 0;
    }

    int res=p+1;
    if(res>n) res=1;
    while(k--){
        res++;
        if(res>n) res=1;

        if(res==p) res++;
        if(res>n) res=1;
    }

    cout<<res<<endl;

    return 0;
}
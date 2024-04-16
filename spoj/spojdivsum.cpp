#include<iostream>
#include<cmath>
using namespace std;

long long int calcula(long long int n){
    long long int a,s=1;
    if(n%2==0){
        a=2;
    }
    else{a=3;}
    for(long long int i=a;i<sqrt(n);i++){
        if(n%i==0){
            s+=i;
            s+=n/i;
        }
    }
    a=sqrt(n);
    if(a*a==n){s+=a;}
    return s;
}

int main(){

    int t;
    long long int s,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%lld",&n);
        if(n==1){
            s=0;
        }
        else{
            s=calcula(n);
        }
        cout<<s<<endl;
    }


    return 0;
}

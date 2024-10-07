#include<iostream>
#include<cmath>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,d,res;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(abs(c-a)>abs(d-b)){
            res=gcd(abs(c-a), abs(d-b))+1;
        }else{
            res=gcd(abs(d-b), abs(c-a))+1;
        }
        printf("%d\n",res);
    }

    return 0;
}
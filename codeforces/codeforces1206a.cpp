#include<iostream>
using namespace std;

int main(){

    int x,n,maiora=0,maiorb=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        if(x>maiora){
            maiora=x;
        }
    }
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        if(x>maiorb){
            maiorb=x;
        }
    }

    printf("%d %d\n",maiora,maiorb);

    return 0;
}
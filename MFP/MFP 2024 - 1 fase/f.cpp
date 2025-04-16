#include<iostream>
using namespace std;

int main(){

    int n,cont=0;
    scanf("%d",&n);

    if(n>=8){
        cont++;
        n-=8;
    }
    if(n>=4){
        cont++;
        n-=4;
    }
    if(n>=2){
        cont++;
        n-=2;
    }
    if(n>=1){
        cont++;
        n-=1;
    }

    printf("%d\n",cont);

    return 0;
}
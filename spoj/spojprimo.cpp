//ok
#include<iostream>
using namespace std;

bool ehprimo(int n){
    if(n%2==0){
        return false;
    }

    for(int i=3;i<n/2;i+=2){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){

    int n;
    scanf("%d",&n);

    if(ehprimo(n)){
        printf("sim\n");
    }else{
        printf("nao\n");
    }

    return 0;
}
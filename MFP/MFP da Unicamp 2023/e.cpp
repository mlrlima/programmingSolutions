//https://codeforces.com/group/WYIydkiPyE/contest/450037/attachments/download/20669/MFP.pdf

#include<iostream>
using namespace std;

int main(){

    int x,cont=0;

    for(int i=0;i<7;i++){
        scanf("%d",&x);
        cont+=x;
    }

    scanf("%d",&x);
    if(cont%2==x){
        printf("N?\n");
    }else{
        printf("S\n");
    }

    return 0;
}
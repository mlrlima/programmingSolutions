//https://codeforces.com/group/WYIydkiPyE/contest/450037/attachments/download/20669/MFP.pdf

#include<iostream>
using namespace std;

int main(){

    int f, v,l,r;
    scanf("%d %d",&f,&v);

    for(int i=0;i<v;i++){
        scanf("%d %d",&l,&r);
    }

    for(int i=0;i<f;i++){
        printf("%d",i%2);
    }
    printf("\n");

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    char c[3];
    scanf("%c %c %c",&c[0],&c[1],&c[2]);

    if(c[0]+c[1]+c[2]!='X'+'X'+'O'){
        printf("?\n");
    }
    else if(c[0]==c[1] || c[1]==c[2]){
        printf("Alice\n");
    }
    else{
        printf("*\n");
    }

    return 0;
}
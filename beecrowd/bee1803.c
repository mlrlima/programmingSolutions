#include<stdio.h>

int main(){

    int n[400];
    int cont=0;
    char num;
    while((num=getchar())!=EOF){
        if(num<'0' || num>'9') continue;
        n[cont]=num-'0';
        cont++;
    }

    int tam=cont/4;
    int m[4][tam];
    cont=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<tam;j++){
            m[i][j]=n[cont];
            cont++;
        }
    }

    int f=m[0][0]*1000;
    f+=(m[1][0])*100;
    f+=(m[2][0])*10;
    f+=(m[3][0]);

    int l=(m[0][tam-1])*1000;
    l+=(m[1][tam-1])*100;
    l+=(m[2][tam-1])*10;
    l+=(m[3][tam-1]);


    for(int j=1;j<tam-1;j++){
        int numero=0;
        int dez=1000;
        for(int i=0;i<4;i++){
            numero+=(m[i][j])*dez;
            dez/=10;
        }

        char c=(f*numero+l)%257;
        printf("%c",c);
    }
    printf("\n");

    return 0;
}
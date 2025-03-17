#include<stdio.h>

int main(){
    
    int a,b;
    while(scanf("%d %d",&a,&b) && a+b>0){
        if(a>b){
            int aux=a;
            a=b;
            b=aux;
        }
        
        int c=(a*3)-a-b;
        printf("%d\n",c);
    }
    
    return 0;
}

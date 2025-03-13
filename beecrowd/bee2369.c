#include<stdio.h>

int main(){
    
    int n,r=7;
    scanf("%d",&n);
    for(int i=11;i<31 && i<=n;i++) r++;
    for(int i=31;i<101 && i<=n;i++) r+=2;
    for(int i=101;i<=n;i++) r+=5;
    
    printf("%d\n",r);
    
    return 0;
}

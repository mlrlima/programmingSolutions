#include<stdio.h>

int main(){
 
    int n;
    while(scanf("%d",&n) && n>0){
        int p1, p2;
        int tempo=10;
        scanf("%d",&p1);
        for(int i=1;i<n;i++){
            scanf("%d",&p2);
            if(p2-p1<10) tempo+=(p2-p1);
            else tempo+=10;

            p1=p2;
        }
        printf("%d\n",tempo);
    }
 
    return 0;
} 

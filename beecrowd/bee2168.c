#include<stdio.h>

int main(){
    
    int t;scanf("%d",&t);
    int m[t+1][t+1];
    for(int i=0;i<t+1;i++){
        for(int j=0;j<t+1;j++){
            scanf("%d",&m[i][j]);
        }
    }
    
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(m[i][j]+m[i+1][j]+m[i][j+1]+m[i+1][j+1]>=2) printf("S");
            else printf("U");
        }
        printf("\n");
    }
    
    
    return 0;
}

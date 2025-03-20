#include<iostream>
#include<cstring>
using namespace std;

int main(){
    
    int n,bolas,p,b[100],sn[100];
    while(scanf("%d %d",&n,&bolas) && n+bolas>0){
        memset(sn,0,sizeof(sn));
        
        for(int i=0;i<bolas;i++){
            scanf("%d",&b[i]);
        }
        
        int cont=1;
        for(int i=0;i<bolas;i++){
            for(int j=cont;j<bolas;j++){
                int valor=abs(b[i]-b[j]);
                sn[valor]=1;
            }
            cont++;
        }
        
        p=0;
        for(int i=1;i<=n;i++){
            if(sn[i]==0){
                printf("N\n");
                p=1;
                break;
            }
        }
        
        if(p==0){
            printf("Y\n");
        }
        
    }
    
    return 0;
}

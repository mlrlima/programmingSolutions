#include<iostream>
using namespace std;

int main(){
    
    int t;
    while(scanf("%d",&t) && t>0){
        while(t--){
            int resposta, black=0, x;
            for(int i=0;i<5;i++){
                scanf("%d",&x);
                if(x<=127){ 
                    black++;
                    resposta=i;
                }
            }
            
            if(black!=1) printf("*\n");
            else printf("%c\n",resposta+'A');
        }
    }
    
    return 0;
}

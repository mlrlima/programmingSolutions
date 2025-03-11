#include<iostream>
using namespace std;

int main(){
    
    int sn,i,g, inter=0,gremio=0,empate=0;
    do{
        scanf("%d %d",&i,&g);
        
        if(i>g) inter++;
        else if(g>i) gremio++;
        else empate++;
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&sn);
    }while(sn==1);
    
    printf("%d grenais\n",gremio+inter+empate);
    printf("Inter:%d\nGremio:%d\nEmpates:%d\n",inter,gremio,empate);
    
    if(inter>gremio) printf("Inter venceu mais\n");
    else if(inter<gremio) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    
    return 0;
}

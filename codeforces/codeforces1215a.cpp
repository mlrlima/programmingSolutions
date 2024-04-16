#include<iostream>
#include<cstring>
using namespace std;

int main(){
    
    int t1, t2, m1,m2,cards, maximo=0;
    scanf("%d %d %d %d %d", &t1, &t2, &m1, &m2, &cards);
    if(m1>m2){
        int aux=m1;
        m1=m2;
        m2=aux;
        
        aux=t1;
        t1=t2;
        t2=aux;
    }
    
    //maximo
    int cardsog=cards;
    int t1og=t1;
    int t2og=t2;
    
    while(cardsog>0 && t1og>0 && cardsog>=m1){
        cardsog-=m1;
        t1og--;
        maximo++;
    }
    while(cardsog>0 && t2og>0 && cardsog>=m2){
        cardsog-=m2;
        t2og--;
        maximo++;
    }
    
    //minimo
    int time1[t1], time2[t2];
    memset(time1, 0, t1);
    memset(time2, 0, t2);
    for(int i=0; i<t2; i++){
        if(cards<1){
            printf("0 %d\n", maximo);
            return 0;
        }
        time2[i]+=m2-1;
        cards-=m2-1;
    }
    for(int i=0; i<t1; i++){
        if(cards<1){
            printf("0 %d\n", maximo);
            return 0;
        }
        time1[i]+=m1-1;
        cards-=m1-1;
    }
    printf("%d %d\n", cards,maximo);
    
    return 0;
}

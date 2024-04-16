#include <iostream>
using namespace std;

int main(){
    
    int c, e, encomendas, tempo=0, high, low, medio, ant=0;
    scanf("%d %d", &c, &e);
    int casas[c];
    
    for(int i=0; i<c; i++){
        scanf("%d", &casas[i]);
    }
    for(int i=0; i<e; i++){
        scanf("%d", &encomendas);
        low=0;
       	high=c-1;
       	medio=(low+high)/2;
        while(low<=high){
            medio=low+(high-low)/2;
            if(casas[medio]==encomendas){
                tempo+=abs(medio-ant);
                ant=medio;
                break;
   	 	    }
   	 	    else if(casas[medio]<encomendas){
   	     	    low=medio+1;
   	 	    }
   	 	    else if(encomendas<casas[medio]){
   	     	    high=medio-1;
   	 	    }
        }
    }
    printf("%d\n", tempo);
    
    return 0;
}

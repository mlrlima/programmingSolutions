#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include <cmath>
using namespace std;

int main(){
    
    int n;
    int cidade=0;
    while(cin>>n && n!=0){
        cidade++;
        if(cidade>1) printf("\n");
        printf("Cidade# %d:\n", cidade);
        
        vector<pair<int, int> > propriedades(n);
        map<int, int> sorted;
        
        int total=0, pessoas=0;
        for(int i=0;i<n;i++){
            int residentes, consumo;
            
            scanf("%d %d", &residentes, &consumo);
            pessoas+=residentes;
            total+=consumo;
            
            sorted[consumo/residentes]+=residentes;
        }
        
        int i=0;
        for(auto it:sorted){
            if(i>0) printf(" ");
            printf("%d-%d", it.second, it.first);
            
            i++;
            if(i==sorted.size()) printf("\n");
        }
        
        
        double consumo= double(total)/double(pessoas);
        double truncated_consumo = trunc(consumo * 100.0) / 100.0;
        printf("Consumo medio: %.2lf m3.\n", truncated_consumo);
    }
    
    return 0;
}

#include<iostream>
using namespace std;
 
int main(){
    
    int cid, rios, dist;
    cin>>cid>>rios>>dist;
    
    int ant=0, atual=0;
    int qtd=0;
    while(rios--){
        cin>>atual;
        
        int cidades=atual-ant;
        
        int torre=cidades/(dist+dist+1);
        if(cidades % (dist+dist+1) > 0) torre+=1;
        
        qtd+=torre;
        
        ant=atual;
    }
 
    int cidades=cid-ant;
        
    int torre=cidades/(dist+dist+1);
    if(cidades % (dist+dist+1) > 0) torre+=1;
    
    qtd+=torre;
    
    
    cout<<qtd<<endl;
    
    return 0;
}

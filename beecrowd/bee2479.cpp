#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    
    int n;cin>>n;
    
    int mais=0,menos=0;
    vector<string> lista;
    for(int i=0;i<n;i++){
        char c;
        string nome;
        cin>>c>>nome;
        
        lista.push_back(nome);
        
        if(c=='+') mais++;
        else menos++;
        
    }
    
    sort(lista.begin(), lista.end());
    
    for(int i=0;i<n;i++) cout<<lista[i]<<endl;
    
    cout<<"Se comportaram: "<<mais<<" | Nao se comportaram: "<<menos<<endl;
    
    return 0;
} 

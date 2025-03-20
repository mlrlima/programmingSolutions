#include <iostream>
using namespace std;

int main(){
    
	int nFaixas, nOgros, fo, pontos;
	cin>>nFaixas>>nOgros;
	int forcas[nFaixas-1];
	int premio[nFaixas];
		
	for (int i=0; i<(nFaixas-1); i++){
		cin>>forcas[i];
	}
	
	for (int j=0; j<nFaixas; j++){
		cin>>premio[j];
	}
	for (int k=0; k<nOgros; k++){
		cin>>fo;
		for (int l=0; l<(nFaixas-1); l++){
			if (fo<forcas[l]){
				cout<<premio[l]<<" ";
				break;
			}
			else if(fo>=forcas[nFaixas-2]){
				cout<<premio[nFaixas-1]<<" ";
				break;
			}
		}
	}

    return 0;
}

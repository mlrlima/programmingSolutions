#include <iostream>
using namespace std;

int main(){
	
	int n, maximo=0, soma=0;
	cin>>n;
	int pos[n][n];
	int somas[n+n];
	int max[n][n];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin>>pos[i][j];
		}
	}
	int ps=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			soma+=pos[i][j];
		}
		somas[ps]=soma;
		ps++;
		soma=0;
	}
	
	for (int j=0; j<n; j++){
		for (int i=0; i<n; i++){
			soma+=pos[i][j];
		}
		somas[ps]=soma;
		ps++;
		soma=0;
	}
	
	int ene=n;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			max[i][j]=somas[i]+somas[ene]-(2*(pos[i][j]));
			ene++;
			if (max[i][j]>maximo){
				maximo=max[i][j];
			}
		}
		ene=n;
	}
	
	cout<<maximo;
	
    return 0;
}

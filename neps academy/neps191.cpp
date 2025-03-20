#include <iostream>
using namespace std;

int main(){
    
	int n, a, q, li, ci, lf, cf, cenouras;
	cin>>a;
	int m[a][a];
	for (int j=0; j<a; j++){
		for (int i=0; i<a; i++){
			cin>>m[j][i];
		}
	}
	cin>>q;
	cenouras=0;
	for (int k=0; k<q; k++){
		cin>>li>>ci>>lf>>cf;
		for (int s=li-1; s<lf; s++){
			for (int r=ci-1; r<cf; r++){
				cenouras+=m[s][r];
				m[s][r]=0;
			}
		}
	}
	cout<<cenouras;

    return 0;
}

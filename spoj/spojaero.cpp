#include <iostream>
using namespace std;

int main() {
	
	int a, v, x, maior, teste=0, mais;
	scanf("%d %d", &a, &v);
	int cont[101];
	cont[0]=0;
	while(a!=0){
		
		if (teste>0){ printf("\n\n"); }
		
		teste++;
		maior=0;
		for (int k=1; k<=a; k++){
		    cont[k]=0;
		}
		
		for (int i=0; i<(v*2); i++){
			scanf("%d", &x);
			cont[x]++;
			if (cont[x]>maior){
				maior=cont[x];
			}
		}
		printf("Teste %d\n", teste);
		mais=0;
		for (int j=1; j<=a; j++){
		    if (cont[j]==maior && mais>0){
				printf(" %d", j);
			}
			if(cont[j]==maior && mais==0){
				printf("%d", j);
				mais++;
			}
		}
		
		scanf("%d %d", &a, &v);
	}

	return 0;
}

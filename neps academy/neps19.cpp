#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, tam, pe, pares=0;
	vector < pair <int, char> > botas;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++){
		scanf("%d %c", &tam, &pe);
		botas.push_back(make_pair(tam, pe));
		if (i>0){
			for(int j=i-1; j>=0; j--){
				if (botas[i].first==botas[j].first){
					if (botas[i].second!=botas[j].second){
						botas[j].first=0;
						botas[i].first=0;
						pares++;
						break;
					}
				}
			}
		}
	}
	printf("%d\n", pares);
	
	return 0;
}

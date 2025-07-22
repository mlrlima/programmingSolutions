#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;scanf("%d",&n);
    vector<pair<int,int> > consultas;
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        consultas.push_back(make_pair(b,a));
    }

    sort(consultas.begin(), consultas.end());

    int qtd=1;
    int termina=consultas[0].first;
    for(int i=1;i<n;i++){
        if(consultas[i].second>=termina){
            qtd++;
            termina=consultas[i].first;
        }
    }

    printf("%d\n",qtd);

    return 0;
}
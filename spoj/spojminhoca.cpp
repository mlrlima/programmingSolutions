#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n,m,a,maior=0;
    scanf("%d %d",&n,&m);
    vector<int> linhas(n);
    vector<int> colunas(m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a);
            linhas[i]+=a;
            colunas[j]+=a;

            if(linhas[i]>maior){maior=linhas[i];}
            if(colunas[j]>maior){maior=colunas[j];}
        }
    }

    printf("%d\n",maior);

    return 0;
}
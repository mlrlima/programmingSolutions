#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int ouro[101], prata[101], bronze[101],paises[101];

vector<int> quaisOuro, quaisPrata;

int desempateBronze(int maiorPrata){
    int maior=0;
    int menor=quaisPrata[0];
    for(int i=0;i<quaisPrata.size();i++){
        if(bronze[quaisPrata[i]]>maior){
            maior=bronze[quaisPrata[i]];
            menor=quaisPrata[i];
        }
    }

    return menor;
}

int desempatePrata(int maiorOuro){
    quaisPrata.clear();
    int maior=0;
    int qtd=0,qual;
    for(int i=0;i<quaisOuro.size();i++){
        if(prata[quaisOuro[i]]>maior){
            maior=prata[quaisOuro[i]];
            qtd=0;
            quaisPrata.clear();
        }
        if(prata[quaisOuro[i]]==maior){
            qtd++;
            quaisPrata.push_back(quaisOuro[i]);
            qual=quaisOuro[i];
        }
    }

    if(qtd!=1){
        qual=desempateBronze(maior);
    }

    return qual;
}

int main(){

    int n, m,o,p,b,jafoi=0;
    scanf("%d %d",&n,&m);

    memset(ouro, 0, sizeof(ouro));
    memset(prata, 0, sizeof(prata));
    memset(bronze, 0, sizeof(bronze));
    memset(paises, 0, sizeof(paises));

    for(int i=0;i<m;i++){
        scanf("%d %d %d",&o,&p,&b);
        ouro[o]++;
        prata[p]++;
        bronze[b]++;
    }

    while(jafoi<n){
        quaisOuro.clear();
        int maior=0;
        int qtd=0;
        int qual;
        for(int i=1;i<=n;i++){
            if(paises[i]==1){
                continue;
            }
            if(ouro[i]>maior){
                maior=ouro[i];
                qtd=0;
                quaisOuro.clear();
            }

            if(ouro[i]==maior){
                quaisOuro.push_back(i);
                qtd++;
                qual=i;
            }
        }

        if (qtd!=1){
            qual=desempatePrata(maior);
        }

        printf("%d ",qual);
        jafoi++;
        paises[qual]=1;
    }

    return 0;
}

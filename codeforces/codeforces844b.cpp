//ac
#include<iostream>
using namespace std;

#define TIPO long long int

TIPO fat[51][51];

void combinacao(int a, int b){
    
    for(int i=0;i<=a;i++){
        for(int j=0;j<=min(i,b);j++){
            if(j==0 || j==i){
                fat[i][j]=1;
            }
            else{
                fat[i][j]=fat[i-1][j-1]+fat[i-1][j];
            }
        }
    }
    
}

TIPO calcular(int n){

    if(n<3){
        return 1;
    }

    TIPO total=0;
    for(int i=1;i<=n/2;i++){
        if(fat[n][i]==0){
            combinacao(n,i);
        }

        total+=fat[n][i];
        if(i!=1){
            total+=fat[n][i];
        }
        if(i==n/2 && n%2==0){
            total-=fat[n][i];
        }
    }
    //cout<<"***"<<total<<endl;
    return total+1;
}

int main(){

    for(int i=0;i<51;i++){
        for(int j=0;j<51;j++){
            fat[i][j]=0;
        }
    }

    int n,m;
    TIPO qtd[51]={0};
    scanf("%d %d",&n,&m);
    int r[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&r[i][j]);
        }
    }

    TIPO cont=m*n;
    int branco=0,preto=0;

    //contando por linhas 

    if(m>1){
        for(int i=0;i<n;i++){
            preto=0;branco=0;
            for(int j=0;j<m;j++){
                if(r[i][j]==1){
                    preto++;
                }
                else{
                    branco++;
                }
            }

            if(preto>1 && qtd[preto]==0){
                qtd[preto]=calcular(preto);
            }
            if(branco>1 && qtd[branco]==0){
                qtd[branco]=calcular(branco);
            }

            cont+=qtd[preto];
            cont+=qtd[branco];
            //cout<<"***"<<qtd[branco]+qtd[branco]<<"***"<<branco<<endl;
        } 
    }

    if(n>1){
        for(int i=0;i<m;i++){
            preto=0;branco=0;
            for(int j=0;j<n;j++){
                if(r[j][i]==1){
                    preto++;
                }
                else{
                    branco++;
                }
            }

            if(preto>1 && qtd[preto]==0){
                qtd[preto]=calcular(preto);
            }
            if(branco>1 && qtd[branco]==0){
                qtd[branco]=calcular(branco);
            }

            cont+=qtd[preto];
            cont+=qtd[branco];
            //cout<<"***"<<qtd[branco]<<"***"<<branco<<endl;
        }
    }

    cout<<cont<<endl;

    return 0;
}
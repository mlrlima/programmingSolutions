#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long int n,total,po,ne,v;
    long long int positivo[100000][2],negativo[100000][2];
    while(scanf("%lld",&n) && n!=0){
        total=0;po=0;ne=0;
        for(long long int i=0;i<n;i++){
            scanf("%lld",&v);
            if(v>0){
                positivo[po][0]=v; //salvando a quantidade
                positivo[po][1]=i; //salvando a posicao
                po++;
            }
            else if(v<0){
                negativo[ne][0]=v; //salvando a quantidade
                negativo[ne][1]=i; //salvando a posicao
                ne++;
            }
        }
        
        //for(int i=0;i<3;i++){
          //  cout<<"**"<<positivo[i][0]<<"**"<<positivo[i][1]<<endl;
        //}
        
        
        po--; ne--;
        
        while(ne>=0){
            int a=positivo[po][0]+negativo[ne][0];
            if(a>0){
                positivo[po][0]+=negativo[ne][0];
                total+=abs(positivo[po][1]-negativo[ne][1])*negativo[ne][0]*(-1);
                ne--;
            }
            else if(a<0){
                negativo[ne][0]+=positivo[po][0];
                total+=abs(positivo[po][1]-negativo[ne][1])*positivo[po][0];
                po--;
            }
            else{
                total+=abs(positivo[po][1]-negativo[ne][1])*positivo[po][0];
                ne--;
                po--;
            }
        }
        
        printf("%lld\n",total);
        
    }
    
    return 0;
}

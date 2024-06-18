#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

#define TIPO long long int

int main(){

    int n;
    TIPO l,r,x, res=0;
    scanf("%d %lld %lld %lld",&n ,&l, &r, &x);

    TIPO p[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&p[i]);
    }

    int s=sizeof(p)/sizeof(p[0]);
    sort(p,p+s);

    int a=1;
    for(int i=0;i<n;i++){
        a*=2;
    }
    for(int i=3;i<a;i++){
        bitset<15> b(i);

        TIPO menor=-1, maior, qtd=0, total=0;
        
        //cout<<endl<<b<<endl;

        for(int j=0;j<n;j++){
            if(b[j]){
                if(menor==-1){
                    menor=p[j];
                }
                maior=p[j];

                qtd++;
                total+=p[j];

                if(total>r){
                    break;
                }
            }
        }

        if(qtd>1 && maior-menor>=x && total>=l && total<=r){
            res++;

        }

    }

    printf("%lld\n", res);

    return 0;
}
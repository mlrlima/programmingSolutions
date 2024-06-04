#include<iostream>
#include<algorithm>
using namespace std;

#define TIPO long long int


int main(){

    int n;
    scanf("%d",&n);

    TIPO a,b,c;
    TIPO soma[n], menor[n];
    bool elemsm[n];

    for(int i=0;i<n;i++){
        //cin>>a>>b>>c;
        scanf("%lld %lld %lld",&a,&b,&c);
        soma[i]=a+b+c;

        TIPO menor1,menor2;
        if(a>b){
            menor1=b;
            if(a>c){
                menor2=c;
            }
            else{
                menor2=a;
            }
        }
        else{
            menor1=a;
            if(b>c){
                menor2=c;
            }
            else{
                menor2=b;
            }
        }

        menor[i]=menor1+menor2+2;

        if(soma[i]>=menor[i]){
            elemsm[i]=true;
        }
        else{
            elemsm[i]=false;
        }
    }

    int s=sizeof(menor)/sizeof(menor[0]);
    sort(menor, menor+s);

    for(int i=0;i<n;i++){
        int qtd=-1;

        int high=n-1, low=0, mid;
        while(high>=low){
            mid=(high+low)/2;
            if(soma[i]>=menor[mid]){
                qtd=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        if(!elemsm[i] || qtd==-1){
            qtd++;
        }
        cout<<qtd<<" ";
    }

    return 0;
}
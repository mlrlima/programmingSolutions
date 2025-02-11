#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int k,cont=0;
    scanf("%d",&k);
    int meses[12];

    for(int i=0;i<12;i++){
        scanf("%d",&meses[i]);
    }
    int n=sizeof(meses)/sizeof(meses[0]);sort(meses,meses+n);

    for(int i=11;i>=0;i--){
        if(k<=0){
            break;
        }
        cont++;
        k-=meses[i];
    }

    if(k>0){
        printf("-1\n");
    }else{
        printf("%d\n",cont);
    }

    return 0;
}
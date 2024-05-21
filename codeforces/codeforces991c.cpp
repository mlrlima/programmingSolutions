#include<iostream>
using namespace std;

#define TIPO long long int

TIPO c;

bool sn(TIPO comer){
    TIPO chocolate=c,qtd=0,metade=c/2;
    if(c%2==1){
        metade++;
    }

    while(chocolate>0){
        if(chocolate>comer){
            qtd+=comer;
            chocolate-=comer;
            chocolate-=(chocolate/10);
        }
        else{
            qtd+=chocolate;
            chocolate-=comer;
        }

        if(qtd>=metade){
            return true;
        }
    }

    return false;
}

int main(){

    TIPO res;
    cin>>c;

    TIPO high=(c/2)+1,low=1,mid;
    while(high>=low){
        mid=(high+low)/2;
        bool soun=sn(mid);
        if(soun){
            high=mid-1;
            res=mid;
        }
        else{
            low=mid+1;
        }
    }

    cout<<res<<endl;

    return 0;
}
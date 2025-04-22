#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int,int> m;
    int n,a,qtd=0,total=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        m[a]++;
        if(m[a]==2){
            qtd+=2;
            m[a]=0;
        }

        if(qtd==4){
            qtd=0;
            total++;
        }
    }

    printf("%d\n",total);


    return 0;
}
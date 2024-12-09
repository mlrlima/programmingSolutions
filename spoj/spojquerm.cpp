#include<iostream>
using namespace std;

int main(){

    int n,teste=1;
    while(scanf("%d",&n) && n!=0){
        int num,ingresso;
        for(int i=1;i<=n;i++){
            scanf("%d",&ingresso);
            if(ingresso==i){
                num=i;
            }
        }

        printf("Teste %d\n%d\n\n",teste,num);
        teste++;
    }

    return 0;
}
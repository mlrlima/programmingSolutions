#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t,a,b,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&x,&y);
        x++;y++;
        int cima= a*(b-y);
        int baixo= a*(y-1);
        int esq=b*(x-1);
        int dir=b*(a-x);

        printf("%d\n",max(max(cima,baixo),max(esq,dir)));
    }

    return 0;
}
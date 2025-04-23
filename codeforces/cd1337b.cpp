#include<iostream>
using namespace std;

int main(){

    int t,h,v,l;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&h,&v,&l);

        while(h>20 && v>0){
            h=(h/2)+10;
            v--;
        }

        while(h>0 && l>0){
            h-=10;
            l--;
        }

        if(h<=0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
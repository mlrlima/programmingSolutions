#include<iostream>
using namespace std;

int main(){
    
    int t,n,ant,agr,l,h;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d", &n);
        l=0;h=0;
        for(int j=0; j<n;j++){
            if(j==0){
                scanf("%d",&ant);
            }
            else{
                scanf("%d", &agr);
                if(agr>ant){
                    h++;
                }
                else if(agr<ant){
                    l++;
                }
                ant=agr;
            }
        }
        printf("Case %d: %d %d\n",i+1,h,l);
    }
    
    return 0;
}

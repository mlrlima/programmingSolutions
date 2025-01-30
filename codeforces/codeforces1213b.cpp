#include<iostream>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n,menor,cont=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(i== n-1) menor=a[i];
        }

        for(int i=n-2; i>=0;i--){
            if(a[i]>menor){
                cont++;
            }else{
                menor=a[i];
            }
        }

        printf("%d\n",cont);
    }

    return 0;
}
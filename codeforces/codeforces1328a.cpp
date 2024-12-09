#include<iostream>
using namespace std;

int main(){

    int n,a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        
        int resto=a%b;
        if(resto>0){
            printf("%d\n",b-a%b);
        }else{
            printf("0\n");
        }
    }

    return 0;
}
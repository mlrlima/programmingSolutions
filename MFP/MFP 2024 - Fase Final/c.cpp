#include<iostream>
using namespace std;

int main(){


    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a-b;i<=a;i++){
        if(a%i==0){
            printf("%d\n",i);
            return 0;
        }
    }
}

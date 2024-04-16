#include<iostream>
#include<cmath>
using namespace std;

//raizes triangulares= (sqrt(8x +1) -1)/2

int main(){
    
    long long int t, warriors, cont, rows;
    scanf("%lld",&t);
    for(long int i=0; i<t; i++){
        scanf("%lld",&warriors);
        rows=8*warriors;
        rows=sqrt(rows+1);
        rows--;
        printf("%lld\n",rows/2);
    }
    
    return 0;
}

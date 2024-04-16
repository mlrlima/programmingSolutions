#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    long long int n;
    scanf("%lli", &n);
    //cin>>n;
    
    if(n<4){
        printf("N\n");
        return 0;
    }
    
    if(n%2==0 && n>2){
        printf("S\n");
        return 0;
    }
    
    for(long long int i=3; i<=sqrt(n); i+=2){
        if(n%i==0){
            printf("S\n");
            return 0;
        }
    }
    
    printf("N\n");
    return 0;
}

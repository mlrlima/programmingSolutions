#include<iostream>
using namespace std;

int main(){
    
    char op; cin>>op;
    double a[12][12];
    double soma=0;
    int cont=5;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>a[i][j];
        }
    }
    
    
    int c=5,q=2;
    for(int i=7;i<12;i++){
        for(int j=c;j<c+q;j++){
            soma+=a[j][i];
        }
        c--;q+=2;
    }
    
    if(op=='M') soma/=30.0;
    
    printf("%.1lf\n",soma);
    
    return 0;
}

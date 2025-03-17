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
     
     
     int c=1,dividir=0;
     for(int i=0;i<12;i++){
         for(int j=c;j<12;j++){
             soma+=a[i][j]; dividir++;
         }
        c++;
     }
     
     if(op=='M') soma/=(double(dividir));
     
     printf("%.1lf\n",soma);
     
     return 0;
 }

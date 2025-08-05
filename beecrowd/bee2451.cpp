#include<iostream>
using namespace std;
 
int main(){
 
    int n,l=0,c=0,comida=0,maior=0;
    scanf("%d",&n);
    string jogo[n];
 
    for(int i=0;i<n;i++){
        cin>>jogo[i];
    }
 
    while(l<n){
        if(jogo[l][c]=='o'){
            comida++;
        }
        else if(jogo[l][c]=='A'){
            comida=0;
        }
        
        if(comida>maior){
            maior=comida;
        }
 
        //printf("*lin: %d, col: %d, c: %c\n",l,c,jogo[l][c]);
 
        if(l%2==0){
            c++;
            if(c==n){
                l++;
                c--;
            }
        }
        else{
            c--;
            if(c==-1){
                c=0;
                l++;
            }
        }
    }
 
    printf("%d\n",maior);
 
    return 0;
} 

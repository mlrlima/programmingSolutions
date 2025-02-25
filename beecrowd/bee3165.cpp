#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n,a=3,b=5;
    scanf("%d",&n);
    
    vector<bool> ehprimo(n+1);
    vector<int> primos;
    
    ehprimo[2]=true;
    ehprimo[3]=true;
    ehprimo[5]=true;
    primos.push_back(2);
    primos.push_back(3);
    primos.push_back(5);
    
    for(int i=7; i<=n;i+=2){
        bool sn=true;
        for(int j=1;j<primos.size();j++){
            if(i%primos[j]==0){
                sn=false;
                break;
            }
        }
        
        if(sn){
            primos.push_back(i);
            ehprimo[i]=true;
            if(ehprimo[i-2]==true){
                a=i-2;
                b=i;
            }
        }else{
            ehprimo[i]=false;
        }
    }
    
    printf("%d %d\n",a,b);
    
    return 0;
}

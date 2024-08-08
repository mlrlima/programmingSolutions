#include<iostream>
#include<algorithm>
using namespace std;

#define TIPO long long int

int main(){

    int n,cont=0,iguais=0;
    scanf("%d",&n);
    int pilhas[n];
    for(int i=0;i<n;i++){
        scanf("%d",&pilhas[i]);
    }

    int s=sizeof(pilhas)/sizeof(pilhas[0]);
    sort(pilhas, pilhas+s);

    for(int i=1;i<n;i++){
        if(pilhas[i]==pilhas[i-1]){
            iguais++;
            if(pilhas[i]==0 || iguais>1 || (i>1 && pilhas[i-2]==pilhas[i]-1)){
                cout<<"cslnb"<<endl;
                return 0;
            }
            else{
                cont++;
                pilhas[i-1]--;
            }
        }
    }

    for(int i=0;i<n;i++){
        cont+=(pilhas[i]-i);
    }

    if(cont%2==0){
        cout<<"cslnb"<<endl;
    }
    else{
        cout<<"sjfnb"<<endl;
    }

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n, cont=0;
    scanf("%d",&n);

    vector<int> fat;
    fat.push_back(0);
    fat.push_back(1);    
    for(int i=2;i*fat[i-1]<=n;i++){
        fat.push_back(fat[i-1]*i);
    }

    for(int i=fat.size()-1;i>0;i--){
        cont+=(n/fat[i]);
        n%=fat[i];
    }

    printf("%d\n",cont);

    return 0;
}
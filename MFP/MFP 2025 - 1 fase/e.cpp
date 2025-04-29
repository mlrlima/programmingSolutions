#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

    int n,m;
    scanf("%d %d",&n,&m);
    int f[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&f[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0 && j%2==0 && f[i][j]%2==1) f[i][j]++; //par
            else if(i%2==0 && j%2==1 && f[i][j]%2==0) f[i][j]++; //impar
            else if(i%2==1 && j%2==0 && f[i][j]%2==0) f[i][j]++; // impar
            else if(i%2==1 && j%2==1 && f[i][j]%2==1) f[i][j]++; //par
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",f[i][j]);
        }
        printf("\n");
    }

    return 0;
}
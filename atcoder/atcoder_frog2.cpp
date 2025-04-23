#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

    int n,k;
    scanf("%d %d",&n,&k);
    int h[n], memo[n];
    for(int i=0;i<n;i++){
        scanf("%d",&h[i]);
    }

    memo[0]=0;
    for(int i=1;i<n;i++){
        int melhor=1e9+7; //slar kkkkk
        for(int j=max(0,i-k);j<i;j++){
            melhor=min(melhor, memo[j]+abs(h[i]-h[j]));
        }
        memo[i]=melhor;
        //cout<<memo[i]<<endl;
    }

    printf("%d\n",memo[n-1]);

    return 0;
}

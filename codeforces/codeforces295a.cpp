//ac
#include<iostream>
using namespace std;
 
int main(){
    
    //m= num of operatons
    int n,m,k,x,y;
    long long int l,r,d;
    scanf("%d %d %d",&n,&m,&k);
    long long int array[n], op[3][m], q[n+1], b[m];

    //get array
    for(int i=0;i<n;i++){
        scanf("%lld",&array[i]);
        q[i]=0;
    }
    
    //get operations
    for(int i=0;i<m;i++){
        scanf("%lld %lld %lld",&op[0][i],&op[1][i],&op[2][i]);
        b[i]=0;
    }
    
    //get x and y
    for(int i=0;i<k;i++){
        scanf("%d %d",&x,&y);
        b[x-1]++;
        b[y]--;
    }

    long long int soma=0;
    for(int i=0;i<m;i++){
        soma+=b[i];
        op[2][i]*=soma;
        q[op[0][i]-1]+=op[2][i];
        q[op[1][i]]-=op[2][i];
        //cout<< soma<<endl;
    }

    soma=0;
    for(int i=0;i<n;i++){
        soma+=q[i];
        array[i]+=soma;
        printf("%lld ",array[i]);
    }
    
    printf("\n");
    
    return 0;
}
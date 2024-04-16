#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int n,len;
    scanf("%d %d",&n,&len);
    int l[n];
    for(int i=0;i<n;i++){
        scanf("%d", &l[i]);
    }
    int s=sizeof(l) / sizeof(l[0]);
    sort(l, l+s);
    int maior=l[0]*2;
    for(int i=1;i<n;i++){
        if((l[i]-l[i-1]) >maior){
            maior=l[i]-l[i-1];
        }
    }
    if(maior< 2*(len-l[n-1])){
        maior=2*(len-l[n-1]);
    }
    double m=maior;
    m/=2;
    printf("%lf\n",m);
    
    return 0;
}

#include<stdio.h>

int maxSubarraySum(int* a, int n) { //Kadane's Algorithm
    int res=a[0];           
    int maxEnding=a[0];     

    for (int i=1;i<n;i++) {
        if(a[i]>maxEnding+a[i]) maxEnding=a[i];
        else maxEnding+=a[i];
        
        if(res<maxEnding) res=maxEnding;
    }
    return res;
}

int main(){
    
    int n;scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    
    printf("%d\n",maxSubarraySum(a,n));
    
    
    return 0;
}

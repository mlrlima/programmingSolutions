#include <iostream>
using namespace std;

int buscar(int n, int c[], int k, int num){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if(c[m]+num==k){
            return c[m];
        }
        else if(c[m]+num<k){
            l=m+1;
        }
        else if(c[m]+num>k){
            h=m-1;
        }
    }
    return -1;
}

int main(){
    
	int n, k, n1;
	scanf("%d",&n);
	int c[n];
	for (int i=0; i<n; i++){
		scanf("%d",&c[i]);
	}
	
	scanf("%d",&k);
	int sn;
	for(int i=0; i<n-1;i++){
	    sn=buscar(n,c,k,c[i]);
	    if(sn!=-1){
	        if(sn>c[i]){
	            printf("%d %d\n",c[i],sn);
	            return 0;
	        }
	        else{
	            printf("%d %d\n",sn,c[i]);
	            return 0;
	        }
	    }
	}
}

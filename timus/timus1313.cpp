#include <iostream>
using namespace std;

int main() {
	
	int n, l, c, cc=1, ll=1, soma=0,a;
	cin>>n;
	int q[n][n];
	int x=n*n;
	for (int i=0; i<n; i++){
	    soma+=(i+1);
	    for (int j=0; j<n; j++){
	        cin>>q[i][j];
	    }
	}
	
	if(n==1){
	    printf("%d\n",q[0][0]);
	    return 0;
	}
	
	printf("%d ", q[0][0]);
	
	x--;
	c=0;
	l=1;
	
	
	for(int i=1; i<soma; i++){
	    printf("%d ", q[l][c]);
	    x--;
	    
	    l--;
	    c++;
	    if(l<0){
	        ll++;
	        l=ll;
	    }
	    if(c>cc){
	        cc++;
	        c=0;
	    }
	}
	
	
	c=1;
	l=n-1;
	cc=n-1;
	ll=0;
	int contC=2;
	int xx=x;
	for(int k=xx; k<n*n; k++){
	    if(x!=1){
	        printf("%d ", q[l][c]);
	    }
	    else{
	        printf("%d\n", q[l][c]);
	        return 0;
	    }
	    x--;
	    l--;
	    c++;
	    if(c>cc){
	        c=contC;
	        contC++;
	    }
	    if(l==ll){
	        l=n-1;
	        ll++;
	    }
	}
}

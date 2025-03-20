#include <iostream>
using namespace std;

int main(){
    
	int n, cor=1, cont=0, zeros=0, m,z1,z2=0;
	scanf("%d",&n);
	int q[n];
	for (int i=0; i<n; i++){
		scanf("%d",&q[i]);
		
		if(q[i]!=0 && i!=n-1){
		    continue;
		}
		
		if(q[i]==0 && z2==0){
		    z1=i;
		    z2++;
		    if(i>0){ //do 0 pra tras ate o comeco do array
		        cor=1;
		        for(int j=i-1;j>=0;j--){
		            q[j]=cor;
		            if(cor!=9){
		                cor++;
		            }
		        }
		    }
		}
		else if(q[i]==0){
		    z2=i;
		    if(z2-z1==1){
		        z1=z2;
		        continue;
		    }
		    cor=1;
		    int c=1, a=(z2-z1)/2;
            for(int j=z2-1; j>(z1+a);j--){
		        q[j]=cor;
	            q[z1+c]=cor;
	            c++;
		        if(cor<9){
		            cor++;
		        }
		     }
		     if(z2-z1%2!=0){
		         if(q[z1+a-1]+1==10){
		             q[z1+a]=9;
		         }
		         else{
		         q[z1+a]=q[z1+a-1]+1;
		     }}
		  z1=i;
		}
		else if(i==n-1 && q[i]!=0){
		    cor=1;
		    for(int j=z1+1;j<n;j++){
		        q[j]=cor;
		        if(cor<9){
		            cor++;
		        }
		    }
		}
	}
	
	for(int i=0;i<n;i++){
	    printf("%d ",q[i]);
	}
	
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    
    int n, q, out,medio, low,high,num;
    scanf("%d %d", &n, &q);
    int ar[n];
    for (int i=0; i<n; i++){
   	 scanf("%d", &ar[i]);
    }
    
    for (int j=0; j<q; j++){
   	 scanf("%d", &num);
   	 low=0;
   	 high=n-1;
   	 out=0;
   	 medio=(low+high)/2;
   	 while (low<=high){
   	 	//printf("*%d*\n", medio);
   	 	medio=low+(high-low)/2;
   	 	//printf("*%d %d*\n", high, low);
   	 	if(ar[medio]==num){
   	     	while(ar[medio-1]==num){
   	         	medio--;
   	     	}
   	   	printf("%d\n", medio);
   	       	out=1;
   	           	break;
   	 	}
   	 	else if(ar[medio]<num){
   	     	low=medio+1;
   	 	}
   	 	else if(num<ar[medio]){
   	     	high=medio-1;
   	 	}
   	 }
   	 if(out==0){
   	 	printf("-1\n");
   	 }
    }

    return 0;
}

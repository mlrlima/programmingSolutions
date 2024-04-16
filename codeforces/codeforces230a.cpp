 #include<iostream>
using namespace std;

int main(){
    
	int kirito, dragons, s, bonus,cont=0,dr=0;
	scanf("%d %d", &kirito, &dragons);
	int d[2][dragons];
	for(int i=0;i<dragons;i++){
    	scanf("%d %d", &d[0][i], &d[1][i]);
	}
	int i=-1;
	while(dr<dragons && cont<dragons-dr){
    	if(i==dragons-1){
        	i=0;
    	}
    	else{i++;}
   	 
    	if(kirito>d[0][i] && d[0][i]!=0){
        	kirito+=d[1][i];
        	d[0][i]=0;
        	d[1][i]=0;
        	dr++;
        	cont=0;
    	}
    	else if(d[0][i]!=0){cont++;}
	}
    
	if(dr==dragons){
    	printf("YES\n");
    	return 0;
	}
	else{
    	printf("NO\n");
	}
    
	return 0;
}

#include <iostream>
using namespace std;

int main(){
    
	int n, z;
	int b=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>z;
		if (z==2){
			b++;
		}
	}
	if (n%2==0 || n==0){
		cout<<"0"<<"\n";
	}
	else{
		cout<<"1"<<"\n";
	}
	if (b%2==0 || b==0){
		cout<<"0";
	}
	else{
		cout<<"1";
	}
	
    return 0;
}

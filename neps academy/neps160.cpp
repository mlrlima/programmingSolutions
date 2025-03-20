#include <iostream>
using namespace std;

int main(){

	int n, ac=0;
	cin>>n;
	char gabarito[n];
	char res;
	for (int i=0; i<n; i++){
		cin>>gabarito[i];
	}
	for (int j=0; j<n; j++){
		cin>>res;
		if (res==gabarito[j]){
			ac++;
		}
	}
	cout<<ac;
	
    return 0;
}

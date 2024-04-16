#include <iostream>
using namespace std;

int main() {
	
	long int n, q, sum, n1, n2;
	cin>>n;
	long int lista[n];
	for (long int i=0; i<n; i++){
		cin>>lista[i];
	}
	cin>>q;
	for (long int j=0; j<q; j++){
		sum=0;
		cin>>n1>>n2;
		for (long int k=n1; k<=n2; k++){
			sum+=lista[k];
		}
		cout<<sum<<endl;
	}
	
	return 0;
}

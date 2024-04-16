#include <iostream>
using namespace std;

int main() {
	
	int n;
	unsigned int s;
	while(cin>>n && n!=0){
		s=0;
		for(int i=1; i<=n; i++){
			s+=i*i;
		}
		printf("%u\n", s);
	}

	return 0;
}

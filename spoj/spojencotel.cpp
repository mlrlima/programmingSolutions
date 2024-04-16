#include <iostream>
#include<string>
using namespace std;
 
int main() {
	
	string p;
	int s;
	while(cin>>p){
		s=p.size();
		for (int i=0; i<s; i++){
			if (p[i]=='A' || p[i]=='B'|| p[i]=='C'){
				cout<<"2";
			}
			else if (p[i]=='D' || p[i]=='E'|| p[i]=='F'){
				cout<<"3";
			}
			else if (p[i]=='G' || p[i]=='H'|| p[i]=='I'){
				cout<<"4";
			}
			else if (p[i]=='J' || p[i]=='K'|| p[i]=='L'){
				cout<<"5";
			}
			else if (p[i]=='M' || p[i]=='N'|| p[i]=='O'){
				cout<<"6";
			}
			else if (p[i]=='P' || p[i]=='Q'|| p[i]=='R' || p[i]=='S'){
				cout<<"7";
			}
			else if (p[i]=='T' || p[i]=='U'|| p[i]=='V'){
				cout<<"8";
			}
			else if (p[i]=='W' || p[i]=='X'|| p[i]=='Y' || p[i]=='Z'){
				cout<<"9";
			}
			else{
				cout<<p[i];
			}
		}
		cout<<endl;
	}
 
	return 0;
} 

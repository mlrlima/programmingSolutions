#include<iostream>
#include<cmath>
using namespace std;


int gcd(int a, int b) { //function from geeksforgeeks.org
	int res = min(a, b);

  	while (res > 1) {

        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
	return res;
}

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,d1,d2;
        char op, aux;
        cin>>n1>>aux>>d1>>op>>n2>>aux>>d2;
        
        //cout<<n1<<aux<<d1<<op<<n2<<aux<<d2<<endl;
        
        int um, dois;
        if(op=='+'){
            um=(n1*d2 + n2*d1);
            dois=d1*d2;
        }else if(op=='-'){
            um=(n1*d2 - n2*d1);
            dois=d1*d2;
        }else if(op=='*'){
            um=(n1*n2);
            dois=d1*d2;
        }else{
            um=n1*d2;
            dois=n2*d1;
        }
        
        
        cout<<um<<"/"<<dois<<" = ";
        
        int d=abs(gcd(um,dois));
        cout<<um/d<<"/"<<dois/d<<endl;
    }
    
    return 0;
}

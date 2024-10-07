#include<iostream>
using namespace std;

#define TIPO long long

TIPO n,m,divisor;

TIPO gcd(TIPO a,TIPO b){
    if(b==0){
        return a;
    }

    //cout<<b<<" "<<a%b<<endl;
    return gcd(b,a%b);
}

int main(){

    TIPO x1,x2,y1,y2;
    int q;
    cin>>n>>m>>q;

    if(n==m){
        divisor=n;
    }else{
        divisor=gcd(n,m);
    }

    //cout<<divisor<<"***"<<endl;

    for(int i=0;i<q;i++){
        cin>>x1>>y1>>x2>>y2;

        if(divisor==-1){
            cout<<"YES\n";
        }
        else if(x1!=x2){
            if(x2==1){
                x1=1;
                x2=2;

                TIPO aux=y1;
                y1=y2;
                y2=aux;

            }

            TIPO ac=n/divisor,dc=m/divisor;
            
            TIPO ac1=(y1-1)/ac;
            TIPO ac2=(y2-1)/dc;

            if(ac1==ac2){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }
        else{
            TIPO ac;
            if(x1==1){
                ac=n/divisor;
            }else{
                ac=m/divisor;
            }

            if((y1-1)/ac == (y2-1)/ac){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }

    }

    return 0;
}
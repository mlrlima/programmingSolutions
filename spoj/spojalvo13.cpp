#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main(){

    int c,t;
    cin>>c>>t;
    long long int d,x,y, raios[c], total=0,qtd;

    for(int i=0;i<c;i++){
        cin>>raios[i];
        //cout<<"*"<<raios[i]*raios[i]<<endl;
    }

    for(int i=0;i<t;i++){
        cin>>y>>x;
        d=(x*x)+(y*y);
        //cout<<"*"<<d<<endl;

        int low=0, high=c-1, mid;
        while(low<=high){
            mid=(high+low)/2;
            if(raios[mid]*raios[mid] < d){
                low=mid+1;
            }
            else if(raios[mid]*raios[mid] > d){
                high=mid-1;
            }
            else{
                break;
            }
        }

        if(raios[mid]*raios[mid]>=d){
            mid--;
        }

        total+=(c-(mid+1));
        
    }

    cout<<total<<endl;

    return 0;
}

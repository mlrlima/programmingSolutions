//ac
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    long long int l[n],k,alive=1;
    for(int i=0;i<n;i++){
        cin>>l[i];
    }

    k=l[n-1];
    for(int i=n-2;i>=0;i--){
        if(k>0){k--;}
        else{alive++;}

        if(l[i]>k){
            k=l[i];
        }
    }

    cout<<alive<<endl;

    return 0;
}
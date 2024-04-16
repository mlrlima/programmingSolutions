#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    int n;
    int age;
    int captain;
    
    for (int i=1; i<t+1; i++){
        cin>>n;
        for (int j=1; j<n+1; j++){
            cin>>age;
            if (j==(n/2)+1){
                captain=age;
            }
        }
        cout<<"Case "<<i<<": "<<captain<<"\n";
    }
    
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    long long soma=1;
    for(int i=1;i<=n;i++){
        soma*=3;
    }
    
    cout<<soma<<endl;
    
    return 0;
}

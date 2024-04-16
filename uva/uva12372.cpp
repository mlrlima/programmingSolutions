#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    int l;
    int w;
    int h;
    
    for(int i=1; i<t+1; i++){
        cin>>l;
        cin>>w;
        cin>>h;
        if (l>20 || w>20 || h>20){
            cout<<"Case "<<i<<": bad\n";
        }
        else{
            cout<<"Case "<<i<<": good\n";
        }
    }
    
    return 0;
}

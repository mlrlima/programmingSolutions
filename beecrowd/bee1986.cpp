#include<iostream>
#include<string>
using namespace std;

char hex_dec(string l){
    int a,b;
    if(l[1]>='0' && l[1]<='9') a=l[1]-'0';
    else a=(l[1]-'A')+10;
    
    if(l[0]>='0' && l[0]<='9') b=l[0]-'0';
    else b=(l[0]-'A')+10;
    
    return a+(b*16);
}

int main(){
 
    int n;
    cin>>n;
    while(n--){
        string letra;
        cin>>letra;
        cout<<hex_dec(letra);
    }
    
    cout<<endl;
 
    return 0;
} 
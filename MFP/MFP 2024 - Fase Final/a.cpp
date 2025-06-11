#include<iostream>
#include<string>
using namespace std;

string s;

string calcular(int n){
    if(n==0) return "a";

    string atual(1, n+'a');
    string aux=calcular(n-1);

    //cout<<atual<<endl;

    return aux+atual+aux;

}

int main(){

    int n;scanf("%d",&n);

    s=calcular(n-1);

    int i=0;
    while(i<100000 && i<s.size()){
        cout<<s[i];
        i++;
    }
    cout<<endl;

    return 0;
}
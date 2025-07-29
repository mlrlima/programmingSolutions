#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    while(cin>>n && n!=0){
        string nome, res;
        int ano, tempo;
        int menor=25000;
        while(n--){
            cin>>nome>>ano>>tempo;
            if(ano-tempo<menor){
                menor=ano-tempo;
                res=nome;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
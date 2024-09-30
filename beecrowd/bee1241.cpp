#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(b.size()>a.size()){
            cout<<"nao encaixa\n";
        }else{
            bool foi=true;
            for(int i=b.size()-1, j=a.size()-1;i>=0;i--,j--){
                if(a[j]!=b[i]){
                    foi=false;
                    break;
                }
            }

            if(foi){
                cout<<"encaixa\n";
            }else{
                cout<<"nao encaixa\n";
            }
        }
    }

    return 0;
}
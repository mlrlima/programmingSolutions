#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

    map<pair<int,int>, string> signo;
    signo[make_pair(1,19)]="capricornio";
    signo[make_pair(2,18)]="aquario";
    signo[make_pair(3,20)]="peixes";
    signo[make_pair(4,20)]="aries";
    signo[make_pair(5,20)]="touro";
    signo[make_pair(6,20)]="gemeos";
    signo[make_pair(7,22)]="cancer";
    signo[make_pair(8,22)]="leao";
    signo[make_pair(9,22)]="virgem";
    signo[make_pair(10,22)]="libra";
    signo[make_pair(11,21)]="escorpiao";
    signo[make_pair(12,21)]="sagitario";

    int dia, mes;
    char c;
    cin>>dia>>c>>mes;
    
    for(auto it:signo){
        if(mes<it.first.first || (mes==it.first.first && dia<=it.first.second)){
            cout<<it.second<<endl;
            return 0;
        }
    }

    cout<<"capricornio"<<endl;
    return 0;
}
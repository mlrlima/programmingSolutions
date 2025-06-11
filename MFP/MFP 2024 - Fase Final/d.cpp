#include<iostream>
#include<map>
using namespace std;

typedef long long ll;
ll res;
ll m[6][6];

void f(ll soma, int i, map<int, bool> mapa){
    if(i==6){
        if(soma>res) res=soma;
        return;
    }

    for(int j=0;j<6;j++){
        if(mapa.find(j)==mapa.end() || mapa[j]==false){
            mapa[j]=true;
            f(soma+m[j][i], i+1, mapa);
            mapa[j]=false;
        }
    }

}

int main(){

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++) cin>>m[i][j];
    }

    res=0;
    map<int, bool> mapa;
    f(0, 0, mapa);

    cout<<res<<endl;

    return 0;
}
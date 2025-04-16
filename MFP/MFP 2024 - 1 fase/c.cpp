#include<iostream>
#include<vector>
using namespace std;

int maior;
vector<int> v;

void res(int i, int soma){

    if(i>v.size()){
        if(soma>maior) maior=soma;
        return;
    }

    soma+=v[i-1];
    res(2*i, soma);
    res((2*i)+1,soma);
}

int main(){

    maior=0;
    int n,a;
    cin>>n;
    while(cin>>a) v.push_back(a);

    res(1,0);

    cout<<maior<<endl;

    return 0;
}
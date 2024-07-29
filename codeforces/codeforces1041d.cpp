#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define TIPO long

int main(){

    int n;
    TIPO h, a,b,ant=0,maior, contf=0, contq=0;
    cin>>n>>h;
    maior=h;
    vector<TIPO> quedas, flows;

    flows.push_back(0);
    for(int i=0;i<n;i++){
        cin>>a>>b;

        contf+=(b-a);

        flows.push_back(contf);
        if(i>0){
            quedas.push_back(contq);
            contq+=(a-ant);
        }
        ant=b;
    }

    quedas.push_back(contq);

    int left=0, right=0;
    while(left<=right && left<n && right<=n){
        if(right<n && (quedas[right]-quedas[left])<h){
            if(maior<h+(flows[right]-flows[left])){
                maior=h+(flows[right]-flows[left]);
            }
            right++;
        }
        else{
            if(maior<h+(flows[right]-flows[left])){
                maior=h+(flows[right]-flows[left]);
            }
            left++;
            if(right==n){
                break;
            }
        }

        //cout<<maior<<endl<<left<<" "<<right<<endl;
    }

    cout<<maior;    

    return 0;
}
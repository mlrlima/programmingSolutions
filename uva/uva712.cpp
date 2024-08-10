#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>
using namespace std;

double valorden(int n){
    if(n==1) return 1;
    if(n==2) return 3;
    if(n==3) return 7;
    if(n==4) return 15;
    if(n==5) return 31;
    if(n==6) return 63;
    if(n==7) return 127;
    return 0;
}

int main(){

    int n, cont=1;
    while(cin>>n && n!=0){
        cout<<"S-Tree #"<<cont<<":"<<endl;
        cont++;
        string x,roots,vva;
        vector<char> ordem;
        map<char, char> valores;

        for(int i=0;i<n;i++){
            cin>>x;
            ordem.push_back(x[1]);
        }

        int qtd;

        cin>>roots;
        cin>>qtd;

        while(qtd--){
            cin>>vva;

            for(int i=1;i<=n;i++){
                string temp=to_string(i);

                valores[temp[0]]=vva[i-1];
                //cout<<temp<<"** "<<valores[temp[0]]<<endl;
            }

            double high=valorden(n), low=0, mid;
            if(valores[ordem[0]]=='0'){
                high++;
            }
            mid=(high+low)/2;
            for(int i=0;i<n;i++){
                if(valores[ordem[i]]=='0'){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
                mid=(high+low)/2;
            }

            cout<<roots[round(mid)];
        }

        cout<<endl<<endl;

    }

    return 0;
}
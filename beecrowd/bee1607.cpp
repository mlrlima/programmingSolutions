#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int cont=0;

        for(int i=0;i<a.size();i++){
            if(a[i]>b[i]){
                cont++;
                cont+=('z'-a[i]);
                cont+=(b[i]-'a');
            }else{
                cont+=(b[i]-a[i]);
            }
        }

        cout<<cont<<endl;
    }

    return 0;
}

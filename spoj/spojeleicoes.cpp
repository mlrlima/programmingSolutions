#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    
    map<string,int> candidatos;
    
    int n;
    string voto,ganhou;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>voto;
        candidatos[voto]++;
    }
    
    int winner=0;
    map<string, int>::iterator it;
    for(it=candidatos.begin(); it!=candidatos.end(); ++it){
       if((it->second)>winner){
           winner=(it->second);
           ganhou=(it->first);
       }
    }
    
    cout<<ganhou<<endl;
    //printf("%s\n",ganhou);
    
    return 0;
}

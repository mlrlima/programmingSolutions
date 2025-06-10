#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main(){

    int v,p;
    vector<vector<string> > versos;
    cin>>v;

    map<string, int> notas;
    for(int i=0;i<v;i++){
        string s="";
        while(s=="") getline(cin,s);
        string palavra="";
        vector<string> verso;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' || i==s.size()-1){

                if(i==s.size()-1) palavra+=s[i];

                verso.push_back(palavra);
                 
                notas[palavra]=0;
                palavra="";

            }else{
                palavra+=s[i];
            }
        }

        versos.push_back(verso);
    }

    cin>>p;
    for(int i=0;i<p;i++){
        string s; int nota;
        cin>>s>>nota;
        notas[s]=nota;
    }

    long long total=0;
    long long maior=0;
    int indice;
    for(int i=0;i<versos.size();i++){
        long long aux=0;
        for(int j=0;j<versos[i].size();j++){
            total+=notas[versos[i][j]];
            aux+=notas[versos[i][j]];
        }

        if(aux>maior){
            maior=aux;
            indice=i;
        }else if(aux==maior) indice=i;
    }

    cout<<total<<" "<<indice+1<<endl;


    return 0;
}
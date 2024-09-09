#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main(){

    int n, g;
    cin>>n;
    string s, wordle;

    vector<int> letras(26);
    vector<string> dicionario;
    cin>>wordle;
    letras[wordle[0]-'a']=1;
    letras[wordle[1]-'a']=1;
    letras[wordle[2]-'a']=1;
    letras[wordle[3]-'a']=1;
    letras[wordle[4]-'a']=1;

    map<string, int> ans;
    ans["*****"]++;

    for(int i=1;i<n;i++){
        cin>>s;
        string res="";
        for(int j=0;j<5;j++){
            if(wordle[j]==s[j]){
                res+='*';
            }
            else if(letras[s[j]-'a']==1){
                res+='!';
            }
            else{
                res+="X";
            }
        }

        ans[res]++;
        
    }

    cin>>g;
    for(int i=0;i<g;i++){
        cin>>s;
        if(ans.find(s)==ans.end()){
            ans[s]=0;
        }

        cout<<ans[s]<<endl;
    }

    /*map<string, int> ans;
    cin>>g;
    ans["*****"]=1;
    for(int i=0;i<g;i++){
        cin>>s;
        if(ans.find(s)!=ans.end()){
            cout<<ans[s]<<endl;
            continue;
        }

        int qtd=0;

        for(int j=1;j<n;j++){
            for(int k=0;k<5;k++){
                if(s[k]=='X' && letras[dicionario[j][k]-'a']==1){
                    break;
                }

                if(s[k]=='*' && dicionario[0][k]!=dicionario[j][k]){
                    break;
                }

                if(s[k]=='!' && (dicionario[0][k]==dicionario[j][k] || letras[dicionario[j][k]]==0)){
                    break;
                }

                if(k==4){
                    qtd++;
                }
            }
        }

        ans[s]=qtd;
        cout<<ans[s]<<endl;
    }
    */

    return 0;
}
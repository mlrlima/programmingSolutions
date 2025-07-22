#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        map<char, pair<char, char> > adj;

        bool sn=true;

        if(s.size()==1){
            cout<<"YES\nabcdefghijklmnopqrstuvwxyz\n";
            continue;
        }

        //zerando maps ok
        for(int i=0;i<26;i++){
            adj[i+'a']=make_pair('0','0');
        }

        adj[s[0]].first=s[1];
        for(int i=1;i<s.size();i++){
            if(adj[s[i]].first=='0'){
                adj[s[i]].first=s[i-1];
            }else if(adj[s[i]].second=='0' && s[i-1]!=adj[s[i]].first){
                adj[s[i]].second=s[i-1];
            }else if(s[i-1]!=adj[s[i]].first && s[i-1]!=adj[s[i]].second){
                sn=false;
                break;
            }

            if(i==s.size()-1) break;

            if(adj[s[i]].first=='0'){
                adj[s[i]].first=s[i+1];
            }else if(adj[s[i]].second=='0' && s[i+1]!=adj[s[i]].first){
                adj[s[i]].second=s[i+1];
            }else if(s[i+1]!=adj[s[i]].first && s[i+1]!=adj[s[i]].second){
                sn=false;
                break;
            }
        }

        /*for(auto it:adj){
            cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
        }*/

        if(!sn) cout<<"NO\n";
        else{
            int um=0;
            char um1;
            for(int i=0;i<26;i++){
                if(adj[i+'a'].first!='0' && adj[i+'a'].second=='0'){
                    um++;
                    um1=i+'a';

                    if(um>2) break;
                }
            }

            if(um!=2) cout<<"NO\n";
            else{

                bool jafoi[26]={0};

                string k="";
                while(um1!='0'){
                    k+=um1;
                    jafoi[um1-'a']=true;

                    char aux=adj[um1].first;
                    adj[um1].first=adj[um1].second;
                    if(jafoi[aux-'a']) aux=adj[um1].first;
                    um1=aux;
                }

                for(int i=0;i<26;i++){
                    if(!jafoi[i]) k+=i+'a';
                }

                cout<<"YES\n"<<k<<"\n";

            }
        }

    }

    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool comp(const pair<string, string>&a, const pair<string, string>&b){
    if(a.first[0]=='b' && b.first[0]=='v'){
        return true;
    }else if(a.first[0]==b.first[0]){
        if(a.first[a.first.size()-1]==b.first[b.first.size()-1]){
            return a.second<b.second;
        }else if(a.first[a.first.size()-1]=='P' || b.first[b.first.size()-1]=='G'){
            return true;
        }else if(a.first[a.first.size()-1]=='G' || b.first[b.first.size()-1]=='P'){
            return false;
        }
    }
    return false;
}

int main(){
    
    int n;
    bool first=true;
    while(cin>>n && n>0){
        
        if(!first){cout<<endl;}else{first=false;}
        
        string nome, camisa;
        
        vector<pair<string, string> > v;
        
        for(int i=0;i<n;i++){
            do{
                getline(cin,nome);
            }while(nome=="");
            do{
                getline(cin,camisa);
            }while(camisa=="");
            
            v.push_back(make_pair(camisa, nome));
        }
    
        sort(v.begin(),v.end(),comp);
        
        for(int i=0;i<n;i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        
    }
    
    
    return 0;
}

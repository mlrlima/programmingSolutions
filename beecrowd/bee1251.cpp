#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(const pair<int,int>&a,const pair<int,int>&b){
    if(a.second==b.second){
        return a.first >b.first;
    }
    
    return a.second < b.second;
}

int main(){
    
    string s;
    bool b=false;
    while(getline(cin,s)){
        if(s=="") continue;
        
        if(b){cout<<endl;}
        else{
            b=true;
        }
        
        map<int,int> m;
        vector<pair<int,int> > qtd;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        for(auto i:m){
            qtd.push_back(make_pair(i.first, i.second));
        }
        
        sort(qtd.begin(),qtd.end(),comp);
        
        for(int i=0;i<qtd.size();i++){
            cout<<qtd[i].first<<" "<<qtd[i].second<<endl;
        }
    }
    
    return 0;
}

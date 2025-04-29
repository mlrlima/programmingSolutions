#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    scanf("%d",&n);
    map<string,int> amgs;
    while(n--){
        string s;
        cin>>s;
        amgs[s]=n;
    }

    vector<pair<int,string> > ordem;
    for(auto it:amgs){
        ordem.push_back(make_pair(it.second, it.first));        
    }

    sort(ordem.begin(),ordem.end());

    for(int i=0;i<ordem.size();i++){
        cout<<ordem[i].second<<endl;
    }

    return 0;
}
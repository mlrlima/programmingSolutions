#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int f;
map<string, int> m;

int verificar(string s1, string s2){

    if(s1==s2) return m[s1]-2;

    string certa="";
    for(int i=0;i<f;i++){
        if(s1[i]==s2[i]) certa+=s1[i];
        else if(s1[i]=='S' && s2[i]=='E') certa+='T';
        else if(s1[i]=='S' && s2[i]=='T') certa+='E';
        else if(s1[i]=='E' && s2[i]=='T') certa+='S';
        else if(s1[i]=='E' && s2[i]=='S') certa+='T';
        else if(s1[i]=='T' && s2[i]=='E') certa+='S';
        else if(s1[i]=='T' && s2[i]=='S') certa+='E';
    }
    
    //se a 3 combinacao existe
    if(m.find(certa)!=m.end()) return m[certa];
    else return 0;

}

int main(){

    int c, res=0;
    scanf("%d %d",&c,&f);
    vector<string> v(c);

    for(int i=0;i<c;i++){
        cin>>v[i];
        m[v[i]]++;
    }

    for(int i=0;   i<c-1; i++){
    for(int j=i+1; j<c; j++){
    
        res+=verificar(v[i],v[j]);

    }
    }

    printf("%d\n",res/3);

    return 0;
}
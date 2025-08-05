#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){

    int n;
    bool p=true;
    while(cin>>n && n!=0){
        if(!p) cout<<endl;
        else p=false;

        vector<string> v(n);
        string s;
        int maior=0;
        getline(cin,s);
        for(int i=0;i<n;i++){
            getline(cin,s);
            v[i]="";
            bool primeiro=true;
            for(int j=0;j<s.size();j++){
                if(s[j]!=' '){
                    if(j>0 && s[j-1]==' '){
                        if(primeiro) primeiro=false;
                        else v[i]+=' ';
                    }
                    v[i]+=s[j];
                    primeiro=false;
                }
            }

            if(v[i].size()>maior) maior=v[i].size();
        }

        for(int i=0;i<n;i++) cout<<right<<setw(maior)<<v[i]<<endl;
    }

    return 0;
}
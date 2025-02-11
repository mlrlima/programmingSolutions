#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        long long res=0;

        string s;
        cin>>s;

        pair<int, int> coord,nova;
        coord.first=0;
        coord.second=0;

        map<pair<int, int>, vector<pair<int,int> > > jafoi;

        for(int i=0;i<s.size();i++){
            if(s[i]=='N'){
                nova.first=coord.first;
                nova.second=coord.second+1;

                if(jafoi.find(coord)!=jafoi.end()){
                    bool b=true;
                    for(int j=0;j<jafoi[coord].size();j++){
                        if(jafoi[coord][j]==nova){
                            b=false;
                            res+=1;
                            break;
                        }
                    }

                    if(b){
                        res+=5;
                    }
                }else{
                    res+=5;
                }

                jafoi[coord].push_back(nova);
                jafoi[nova].push_back(coord);
            }else if(s[i]=='S'){
                nova.first=coord.first;
                nova.second=coord.second-1;

                if(jafoi.find(coord)!=jafoi.end()){
                    bool b=true;
                    for(int j=0;j<jafoi[coord].size();j++){
                        if(jafoi[coord][j]==nova){
                            b=false;
                            res+=1;
                            break;
                        }
                    }

                    if(b){
                        res+=5;
                    }
                }else{
                    res+=5;
                }

                jafoi[coord].push_back(nova);
                jafoi[nova].push_back(coord);
            }else if(s[i]=='W'){
                nova.first=coord.first-1;
                nova.second=coord.second;

                if(jafoi.find(coord)!=jafoi.end()){
                    bool b=true;
                    for(int j=0;j<jafoi[coord].size();j++){
                        if(jafoi[coord][j]==nova){
                            b=false;
                            res+=1;
                            break;
                        }
                    }

                    if(b){
                        res+=5;
                    }
                }else{
                    res+=5;
                }

                jafoi[coord].push_back(nova);
                jafoi[nova].push_back(coord);
            }else{
                nova.first=coord.first+1;
                nova.second=coord.second;

                if(jafoi.find(coord)!=jafoi.end()){
                    bool b=true;
                    for(int j=0;j<jafoi[coord].size();j++){
                        if(jafoi[coord][j]==nova){
                            b=false;
                            res+=1;
                            break;
                        }
                    }

                    if(b){
                        res+=5;
                    }
                }else{
                    res+=5;
                }

                jafoi[coord].push_back(nova);
                jafoi[nova].push_back(coord);
            }

            coord=nova;
        }  
    
        cout<<res<<endl;

    }

    return 0;
}
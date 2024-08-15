#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string s, palavra;
        cin>>s>>palavra;

        map<char, vector<int> > m;

        for(int i=0;i<s.size();i++){
            m[s[i]].push_back(i);
        }

        bool sim=true;
        int i=0, j=-1, voltas=1;
        while(sim && i<palavra.size()){
            if(m.find(palavra[i])==m.end()){
                sim=false;
                break;
            }
            else{
                int pos=-1, high=m[palavra[i]].size()-1, low=0, mid;
                while(high>=low){
                    mid=(high+low)/2;

                    if(m[palavra[i]][mid]>j){
                        pos=mid;
                        high=mid-1;
                    }
                    else{
                        low=mid+1;
                    }
                }

                if(pos==-1){
                    voltas++;
                    j=-1;
                    i--;
                }
                else{
                    j=m[palavra[i]][pos];
                }

                //cout<<j<<endl;
            }

            i++;
        }

        if(sim){
            cout<<voltas<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}
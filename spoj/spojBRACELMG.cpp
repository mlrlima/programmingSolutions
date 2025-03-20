#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;scanf("%d",&t);
    while(t--){
        string p,b;
        cin>>b>>p;

        bool sn=false;
        int i=0;
        while(!sn && i<p.size()){
            if(p[i]==b[0]){

                int j=1,frente=i+1, tras=i-1;
                bool bf=true, bt=true;
                while(j<b.size() && (bf || bt)){

                    if(frente==p.size()) frente=0;
                    if(tras==-1) tras=p.size()-1;

                    if(p[frente]!=b[j]) bf=false;
                    if(p[tras]!=b[j]) bt=false;

                    frente++;
                    tras--;
                    j++;
                }

                if(bf || bt){
                    sn=true;
                    break;
                }
            }
            i++;
        }

        if(sn) printf("S\n");
        else printf("N\n");
    }

    return 0;
}
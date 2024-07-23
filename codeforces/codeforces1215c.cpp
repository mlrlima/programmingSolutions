#include <iostream>
#include <vector>
using namespace std;

bool checar(int n, char s1[], char s2[]){
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }

    return true;
}

int main(){

    int n, qtda=0, qtdb=0;
    scanf("%d",&n);
    char s1[n],s2[n],x;

    scanf("%c",&x);
    for(int i=0;i<n;i++){
        scanf("%c",&s1[i]);
    }
    scanf("%c",&x);
    for(int i=0;i<n;i++){
        scanf("%c",&s2[i]);
    }

    for(int i=0;i<n;i++){
        if(s1[i]== 'a'){
            qtda++;
        }
        else{
            qtdb++;
        }
        if(s2[i]== 'a'){
            qtda++;
        }
        else{
            qtdb++;
        }
    }

    if(qtda%2!=0 || qtdb%2!=0){
        printf("-1\n");
        return 0;
    }

    int ja=0;
    vector<pair<int, int> > res;
    while(!checar(n, s1,s2)){
        while(ja<n){
            while(s1[ja]!=s2[ja]){
                bool foi=false;
                for(int j=ja+1;j<n;j++){
                    if(s1[j]!=s2[j] && s2[j]!=s1[ja]){
                        char aux=s2[j];
                        s2[j]=s1[ja];
                        s1[ja]=aux;
                        res.push_back(make_pair(ja+1, j+1));
                        foi=true;
                        break;
                    }
                }

                if(!foi){
                    char aux=s2[ja];
                    s2[ja]=s1[ja];
                    s1[ja]=aux;
                    res.push_back(make_pair(ja+1, ja+1));
                }
            }
            ja++;
        }
    }

    cout<<res.size() << endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i].first<<" "<<res[i].second << endl;
    }

    return 0;
}
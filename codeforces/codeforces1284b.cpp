#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define TIPO long long int

int main(){

    int n,s, maior, menor;
    TIPO total=0,ctem=0;
    scanf("%d",&n);
    bool tem[n];
    vector <pair <int, int> > nao, smenor;

    for(int i=0;i<n;i++){
        scanf("%d",&s);
        bool b=false;
        int a;
        menor=-1;maior=-1;
        for(int j=0;j<s;j++){
            scanf("%d",&a);

            if(a>maior){
                maior=a;
            }

            if(menor==-1 || menor>a){
                menor=a;
            }

            if(menor<a){
                b=true;
            }
        }

        if(b){
            ctem++;
        }
        else{
            nao.push_back(make_pair(menor, maior));
            smenor.push_back(make_pair(menor, maior));
        }
    }

    TIPO nn=nao.size();
    total=((ctem*nn)*2)+(ctem*ctem);

    sort(smenor.begin(), smenor.end());
    for(int i=0;i<nn;i++){
        maior= nao[i].second;

        int high=nn-1, low=0, mid;
        while(low<=high){
            mid=(high+low)/2;
    
            if(smenor[mid].first<maior){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        total+=low;
    }

    cout<<total<<endl;

    return 0;
}
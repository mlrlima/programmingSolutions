#include<iostream>
#include<map>
#include<vector>
using namespace std;

#define TIPO long long int

int main(){

    int trees, wood,w, high=0,mid,low=0;
    scanf("%d %d",&trees, &wood);
    map<int, TIPO> qtd;
    vector<TIPO> madeira;

    for(int i=0;i<trees;i++){
        scanf("%d",&w);
        qtd[w]++;

        if(w>high){
            high=w;
        }
    }

    TIPO arvores=0,total=0;
    for(int i=high;i>0;i--){
        if(qtd[i]){
            arvores+=qtd[i];
        }

        total+=arvores;
        madeira.push_back(total);
    }

    int res;
    high--;
    while(high>=low){
        mid=(high+low)/2;

        if(madeira[mid]>=wood){
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<madeira.size()-res-1<<endl;

    return 0;
}
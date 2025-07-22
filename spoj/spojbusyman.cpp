#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        vector<pair<int,int> > a;
        for(int i=0;i<n;i++){
            int b,c;scanf("%d %d",&b,&c);
            a.push_back(make_pair(c,b));
        }

        sort(a.begin(),a.end());

        int qtd=1;
        int termino=a[0].first;
        for(int i=1;i<n;i++){
            if(a[i].second>=termino){
                qtd++;
                termino=a[i].first;
            }
        }

        printf("%d\n",qtd);
    }

    return 0;
}
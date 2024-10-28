#include<iostream>
#include<map>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
typedef long long TIPO;

int s,n;
vector<pair<int,int> > obj;


vector<TIPO>ks(2002);
vector<TIPO>ks2(2002);
TIPO knapsack(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(j-obj[i-1].first>=0){
                ks2[j]=max(ks[j],ks[j-obj[i-1].first] + obj[i-1].second);
            }
        }
        for(int j=1;j<=s;j++){
            ks[j]=ks2[j];
        }
    }

    return ks[s];
}

int main(){

    int a,b;
    scanf("%d %d",&s, &n);

    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        obj.push_back(make_pair(a,b));
    }

    cout<<knapsack()<<endl;


    return 0;
}
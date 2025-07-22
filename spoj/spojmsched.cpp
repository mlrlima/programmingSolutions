#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int maiortempo=-1;
    int n;scanf("%d",&n);
    vector<pair<int,int> > c;
    for(int i=0;i<n;i++){
        int a,b;scanf("%d %d",&a,&b);
        c.push_back(make_pair(a,b-1));
        
        if(b>maiortempo) maiortempo=b;
    }

    sort(c.rbegin(),c.rend());

    vector<int> jafoi(maiortempo);
    
    int total=0;
    for(int i=0;i<n;i++){
        if(jafoi[c[i].second]==1){ //se uma vaca ja foi milked nessa hora
            for(int j=c[i].second-1;j>=0;j--){
                if(jafoi[j]==0){
                    jafoi[j]=1;
                    total+=c[i].first;
                    break;
                }
            }
        }else{
            jafoi[c[i].second]=1;
            total+=c[i].first;
        }
    }

    printf("%d\n",total);

    return 0;
}
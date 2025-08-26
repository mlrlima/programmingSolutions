#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    int n;scanf("%d",&n);
    
    vector<pair<int,int> > orders;
    for(int i=0;i<n;i++){
        int a,b;scanf("%d %d",&a,&b);
        
        orders.push_back(make_pair(b,a));
        
    }
    
    sort(orders.begin(), orders.end());
    
    int res=1, ending=orders[0].first;
    for(int i=1;i<n;i++){
        if(orders[i].second>ending){
            res++;
            ending=orders[i].first;
        }
    }
    
    printf("%d\n",res);
    
    return 0;
}

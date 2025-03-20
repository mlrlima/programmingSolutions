#include<iostream>
using namespace std;

int main(){
    
    int part;
    int b;
    int h;
    int w;
    int hp;
    int beds;
    int cost;

    cin>>part;
    cin>>b;
    cin>>h;
    cin>>w;
    int mincost=b+1;
    
    for(int i=1; i<h+1;i++){
        cin>>hp;
        for(int j=1; j<w+1; j++){
            cin>>beds;
            if (beds>=part){
                cost=hp*part;
                if (cost<mincost){
                    mincost=cost;
                }
            }
        }
    }
    
    mincost>b ? cout<<"stay home" : cout<<mincost;
    
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int m[5][5], x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&m[i][j]);
            if(m[i][j]){
                x=i+1;
                y=j+1;
            }
        }
    }
    
    cout<<abs(3-x)+abs(3-y)<<endl;
    
    return 0;
}

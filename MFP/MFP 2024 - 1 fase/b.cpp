#include<iostream>
using namespace std;

int main(){

    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;

    int dist12=((y1-y2)*(y1-y2))+((x1-x2)*(x1-x2));
    int dist13=((y1-y3)*(y1-y3))+((x1-x3)*(x1-x3));
    int dist14=((y1-y4)*(y1-y4))+((x1-x4)*(x1-x4));

    if(dist12==dist13 || dist12==dist14) cout<<dist12<<endl;
    else cout<<dist13<<endl;

    return 0;
}

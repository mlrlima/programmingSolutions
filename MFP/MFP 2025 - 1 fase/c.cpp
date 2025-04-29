#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==b) printf("%d\n",c);
        else if(a==c) printf("%d\n",b);
        else printf("%d\n",a);
    }


    return 0;
}
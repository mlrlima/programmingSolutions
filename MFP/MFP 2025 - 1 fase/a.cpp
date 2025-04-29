#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n,m,a;
    scanf("%d %d",&n,&m);
    vector<int> v(m);
    while(n--){
        scanf("%d",&a);
        v[a-1]++;
    }

    vector<int> res(m);
    int cont=0;
    for(int i=v.size()-1; i>=0;i--){
        cont+=v[i];
        res[i]=cont;
    }

    for(int i=0; i<res.size();i++){
        printf("%d ",res[i]);
    }

    printf("\n");

    return 0;
}

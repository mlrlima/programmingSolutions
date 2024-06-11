#include<iostream>
#include<set>
#include<vector>
using namespace std;

#define tipo long long

int total, menor;

void calcular(vector<int> &pedras, set<int> &v, int soma, int n, vector<vector<bool> > &memo){
    if(memo[n][soma]){
        return;
    }

    if(n==0){
        v.insert(soma);
        return;
    }

    int a=abs(soma-(total-soma));
    if(menor==-1 || menor>a){
        menor=a;
    }

    calcular(pedras, v, soma, n-1, memo);
    calcular(pedras, v, soma+pedras[n-1], n-1, memo);
    memo[n][soma];

}

int main(){
    int n;
    scanf("%d",&n);
    vector<int> p(n);
    total=0;
    menor=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
        total+=p[i];
    }

    set <int> v;
    vector<vector<bool> > memo(n+1, vector<bool> (total+1, false));
    calcular(p, v, 0, n, memo);

    printf("%d\n",menor);

    return 0;
}

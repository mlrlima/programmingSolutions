#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

#define dbg(x) cout << #x << " = " << x << endl

int main(){

    int t; scanf("%d",&t);
    while(t--){
        int res=0;
        int money, ingredients, cake;
        scanf("%d %d %d",&money,&ingredients,&cake);
        map<int,int> ing;
        for(int i=0;i<ingredients;i++){
            int a; scanf("%d",&a);
            ing[i]=a;
        }

        for(int i=0;i<cake;i++){
            int preco=0;
            int qtd;scanf("%d",&qtd);
            for(int j=0;j<qtd;j++){
                int id, am;scanf("%d %d",&id,&am);

                preco+=(am*ing[id]);

            }

            res=max(res, money/preco);
        }

        printf("%d\n",res);
    }

    return 0;
}
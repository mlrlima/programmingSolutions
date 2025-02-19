//https://codeforces.com/group/WYIydkiPyE/contest/450037/attachments/download/20669/MFP.pdf

#include<iostream>
#include<map>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d",&n);
        map<int, int> m;
        for(int i=1;i<=n;i++){
            scanf("%d",&x);
            m[i]=x;
        }

        for(int i=1;i<=n;i++){
            bool first=true;
            int onde=i;
            printf("%d",onde);
            while(m[onde]!=i){
                printf(" %d",m[onde]);
                onde=m[onde];
            }
            printf("\n");
        }

    }

    return 0;
}

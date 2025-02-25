#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,quantos=1;
        scanf("%d %d",&n,&k);
        set<int> cont;
        int nums[n];
        for(int i=0;i<n;i++){
            scanf("%d",&nums[i]);
            cont.insert(nums[i]);
        }

        if(k<cont.size()){
            printf("-1\n");
            continue;
        }

        cout<<n*k<<endl;

        int scr=1;
        while(k>cont.size()){
            cont.insert(scr);
            scr++;
        }

        bool first=true;
        for(int i=0;i<n;i++){
            for(auto j:cont){
                if(first){
                    cout<<j;
                    first=false;
                }
                else cout<<" "<<j;
            }
        }

        printf("\n");

    }

    return 0;
}
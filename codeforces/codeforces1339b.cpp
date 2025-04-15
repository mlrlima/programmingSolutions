#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        vector<int> v(n);
        for(int i=0;i<n;i++) scanf("%d",&v[i]);

        sort(v.begin(),v.end());

        int i,j;
        if(n%2==0){
            j=n/2;
            i=j-1;
        }else{
            printf("%d ",v[n/2]);
            i=(n/2)-1;
            j=(n/2)+1;
        }

        while(i>=0 && j<n){
            if(i>=0) printf("%d ",v[i]);
            if(j<n) printf("%d ",v[j]);

            i--;
            j++;
        }

        printf("\n");

    }

    return 0;
}
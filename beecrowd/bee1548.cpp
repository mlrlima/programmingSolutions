#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n,num,cont=0;
        scanf("%d",&n);

        vector<int> original,sorted;
        for(int i=0;i<n;i++){
            scanf("%d",&num);
            original.push_back(num);
            sorted.push_back(num);
        }

        sort(sorted.rbegin(),sorted.rend());

        for(int i=0;i<n;i++){
            if(sorted[i]==original[i]) cont++;
        }

        printf("%d\n",cont);
    }


    return 0;
}

//https://codeforces.com/group/WYIydkiPyE/contest/450037/attachments/download/20669/MFP.pdf


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n,tam=-1;
    scanf("%d",&n);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }

    sort(v.begin(),v.end());

    int i=0,j=n-1;    
    while(i<j){
        int t=(v[i]/2)+(v[j]/2);
        if(t>tam){
            tam=t;
        }

        i++;j--;
    }

    printf("%d\n",tam);

    return 0;
}
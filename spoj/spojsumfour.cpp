#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define TIPO long long int

int main(){

    int n,total=0;
    TIPO aa,bb,cc,dd;
    cin>>n;

    vector<TIPO> a, b, c, d, um, dois;

    for(int i=0; i<n; i++){
        cin>>aa>>bb>>cc>>dd;

        a.push_back(aa);
        b.push_back(bb);
        c.push_back(cc);
        d.push_back(dd);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            um.push_back(a[i]+b[j]);
            dois.push_back(c[i]+d[j]);
        }
    }

    sort(um.begin(), um.end());
    sort(dois.begin(), dois.end());

    for(int i=0;i<um.size();i++){
        int l=lower_bound(dois.begin(), dois.end(), um[i]*(-1))-dois.begin();
        int u=upper_bound(dois.begin(), dois.end(), um[i]*(-1))-dois.begin();

        total+=(u-l);
    }

    cout<<total<<endl;


    return 0;
}
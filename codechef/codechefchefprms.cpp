//ac
#include<bits/stdc++.h>
using namespace std;

vector <int> p;
int sp[200];
int o[200];

void primos(){
    int sn;
    for(int i=1;i<200;i++){
        sn=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                sn=0;
                break;
            }
        }
        if(sn==1){
            p.push_back(i);
            //cout<<i<<endl;
        }
    }
}

void semiprimos(){
    int a;
    for(int j=1;j<p.size();j++){
        for(int i=j+1;i<p.size();i++){
            a=p[i]*p[j];
            if(a>200){
                break;
            }
            sp[a]=1;
            //printf("*pi= %d, pj= %d, ij= %d*\n",p[i],p[j],p[i]*p[j]);
        }
    
    }

}

int main(){
    memset(sp, 0, sizeof(sp));
    memset(o, 0, sizeof(o));
    primos();
    semiprimos();

    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(o[n]==0){
            o[n]=-1;
            for(int j=2;j<200;j++){
                if(j>=n){
                    break;
                }
                if(sp[j]==1 && sp[n-j]==1){
                    o[n]=1;
                    break;
                }
            }
        }

        if(o[n]==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
 
    int t;
    scanf("%d",&t);
    while(t--){
        int n, c;
        scanf("%d %d",&n,&c);
        int stalls[n], dist[n-1];
        for(int i=0;i<n;i++){
            scanf("%d",&stalls[i]);
        }
 
        int s=sizeof(stalls)/sizeof(stalls[0]);
        sort(stalls, stalls+s);
 
        /*for(int i=1;i<n;i++){
            dist[i]=stalls[i]-stalls[i-1];
        }
        s=sizeof(dist)/sizeof(dist[0]);
        sort(dist, dist+s);
        */
 
        int low=0,mid, high=stalls[n-1], minima=0;
        while(low<=high){
            mid=(low+high)/2;
 
            int vacas=c-1, d=0, i=1;
            bool serviu=false;
            while(i<n){
                d+=(stalls[i]-stalls[i-1]);
                if(d>=mid){
                    vacas--;
                    d=0;
                }
                i++;
 
                if(vacas==0){
                    serviu=true;
                    break;
                }
            }
 
            if(serviu){
                if(mid>minima){
                    minima=mid;
                }
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        printf("%d\n",minima);
    }
 
    return 0;
} 

#include<iostream>
using namespace std;

int main(){
    int n,peaks=0,p[10001];
    while(cin>>n && n!=0){
        peaks=0;
        for(int i=0;i<n;i++){
            scanf("%d",&p[i]);
        }
        for(int i=0;i<n;i++){
            if(i==0){
                if((p[0]>p[1] && p[0]>p[n-1]) || (p[0]<p[1] && p[0]<p[n-1])){
                    peaks++;
                }
            }
            else if(i==n-1){
                if((p[i]>p[i-1] && p[i]>p[0]) || (p[i]<p[i-1] && p[i]<p[0])){
                    peaks++;
                }
            }
            else if((p[i]>p[i+1] && p[i]>p[i-1]) || (p[i]<p[i+1] && p[i]<p[i-1])){
                peaks++;
            }
        }
        printf("%d\n",peaks);
    }
    
    return 0;
}

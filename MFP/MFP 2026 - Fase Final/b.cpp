#include<iostream>
using namespace std;
 
int main(){
    
    int n, q, k;
    cin>>n>>q>>k;
    while(q--){
        int l,r;
        cin>>l>>r;
        
        if(k<l) continue;
        else if(k>=l && k<=r) {
            k=k+(n-r);
        }else{
            k=k-((r+1)-l);
        }
    }
    
    cout<<k<<endl;
    
    return 0;
}

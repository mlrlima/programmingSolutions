#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n,total=0;cin>>n;
    vector<int> d(61), e(61);
    while(n--){
        int tam;
        char pe;
        cin>>tam>>pe;
        
        if(pe=='D'){
            if(e[tam]>0){
                e[tam]--;
                total++;
            }else{
                d[tam]++;
            }
        }else{
            if(d[tam]>0){
                d[tam]--;
                total++;
            }else{
                e[tam]++;
            }
        }
    }
    
    cout<<total<<endl;
    
    return 0;
}

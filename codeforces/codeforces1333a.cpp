#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        cout<<"W";
        string w="";
        for(int i=1;i<=m;i++){
            w+="B";
            if(i==m-1){
                cout<<w<<endl;
            }
        }

        for(int i=1;i<n;i++){
            cout<<w<<endl;
        }
    }

    return 0;
}
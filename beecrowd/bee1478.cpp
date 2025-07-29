#include<iostream>
#include<iomanip> //to justify
using namespace std;

int main(){

    int n;
    bool b;
    int m[100][100];
    for(int i=0;i<100;i++){
        n=i+1;
        b=true;
        for(int j=0;j<100;j++){
            m[i][j]=n;
            if(n==1) b=false;
            if(b) n--;
            else n++;
        }
    }

    while(scanf("%d",&n) && n!=0){

        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cout<<right<<setw(3)<<m[i][j]<<" ";
            }
            cout<<right<<setw(3)<<m[i][n-1]<<endl;
        }
        cout<<right<<setw(3)<<endl;

    }

    return 0;
}
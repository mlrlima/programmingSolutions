#include <iostream>
#include<string>
using namespace std;
 
int main() {
 
    int jafoi;
    char x;
    string n;
    while(cin>>x>>n && x!='0' && n!="0"){
        jafoi=0;
        for (int i=0; i<sizeof(n); i++){
            if(n[i]=='0' && jafoi==0){
                continue;
            }
            else{
                cout<<n[i];
                jafoi++;
            }
        }
        if (jafoi==0){
            printf("0");
        }
        cout<<endl;
    }
    return 0;
}

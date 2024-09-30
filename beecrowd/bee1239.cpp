#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    while(getline(cin,s)){
        bool b=false,i=false;
        int j=0;
        while(j<s.size()){
            if(s[j]=='_'){
                if(i){
                    cout<<"</i>";
                }
                else{
                    cout<<"<i>";
                }

                i=!i;
            }
            else if(s[j]=='*'){
                if(b){
                    cout<<"</b>";
                }
                else{
                    cout<<"<b>";
                }

                b=!b;
            }else{
                cout<<s[j];
            }
            j++;
        }
        cout<<endl;
    }

    return 0;
}
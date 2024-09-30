#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string um, dois;
        cin>>um>>dois;
        int i=0;
        while(i<um.size() || i<dois.size()){
            if(i<um.size()){
                cout<<um[i];
            }

            if(i<dois.size()){
                cout<<dois[i];
            }
            i++;
        }
        cout<<endl;
    }

    return 0;
}
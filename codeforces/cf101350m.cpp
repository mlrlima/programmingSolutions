#include<iostream>
#include<string>
#include<string.h> //for stod()
#include<map>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        double total=0;
        map<string,double> valor;
        int curr, comp;
        scanf("%d %d",&curr,&comp);

        for(int i=0;i<curr;i++){
            string s,v;
            cin>>s>>v;

            valor[s]=stod(v);
        }

        for(int i=0;i<comp;i++){
            string s,v;
            cin>>v>>s;
            if(s=="JD") total+=stod(v);
            else total+=(valor[s]*stod(v));
        }

        printf("%.6lf\n",total);
    }

    return 0;
}
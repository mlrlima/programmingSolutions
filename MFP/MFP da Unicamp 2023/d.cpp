//https://codeforces.com/group/WYIydkiPyE/contest/450037/attachments/download/20669/MFP.pdf

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double m1, m2, x1,x2,f;
    cin>>m1>>m2>>x1>>x2>>f;

    double g=(x1-x2)*(x1-x2);
    g*=f;

    g/=(m1*m2);

    cout<<setprecision(10)<<fixed<<g<<endl;

    return 0;
}
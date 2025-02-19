//https://codeforces.com/group/WYIydkiPyE/contest/450037/attachments/download/20669/MFP.pdf

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double pi = 3.14159265359;
double angulo=45*(pi/180.0);

int main(){

    int d, amy;
    cin>>d>>amy;

    double hipotenusa=d/sin(angulo);

    int qntas=amy/hipotenusa;
    double sobra=amy-(hipotenusa*qntas);

    double y=sobra*sin(angulo), x;
    x=qntas*(d)+y;
    if(qntas%2!=0){ //descend0
        y=d-y;
    }

    cout<<setprecision(10)<<fixed;
    cout<<x<<" "<<y<<endl;


    return 0;
}
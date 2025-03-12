#include<iostream>
#include<string>
using namespace std;

int bin_dec(string n){
    int mul=1, res=0;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]=='1') res+=mul;
        mul*=2;
    }

    return res;
}

int hex_dec(string n){
    int mul=1, res=0;
    for(int i=n.size()-1;i>=0;i--){
        int qto;
        if(n[i]>='0' && n[i]<='9') qto=n[i]-'0';
        else qto=10+(n[i]-'a');

        res+=(qto*mul);

        mul*=16;
    }

    return res;
}

string dec_bin(string num){
    int n=stoi(num);
    string res="",res1="";
    while(n>0){
        res+=((n%2)+'0');
        n/=2;
    }

    bool comeco=true;
    for(int i=res.size()-1;i>=0;i--){
        if(comeco && res[i]=='0'){
            continue;
        }

        res1+=res[i];
        comeco=false;
    }

    if(res1=="") res1="0";

    return res1;
}

string dec_hex(string num){
    int n=stoi(num);
    string res="",res1="";
    while(n>0){
        int resto=n%16;
        if(resto<10) res+=(resto+'0');
        else res+=(resto+'a'-10);
        n/=16;
    }

    bool comeco=true;
    for(int i=res.size()-1;i>=0;i--){
        if(comeco && res[i]=='0'){
            continue;
        }

        res1+=res[i];
        comeco=false;
    }

    if(res1=="") res1="0";

    return res1;
}

string hex_bin(string num){
    //hexa pra dec
    int dec=hex_dec(num);

    //dec pra bin
    return dec_bin(to_string(dec));

}

string bin_hex(string num){
    //bin pra dec
    int dec=bin_dec(num);

    //dec pra hex
    return dec_hex(to_string(dec));
}

int main(){

    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<":\n";

        string num, base;
        cin>>num>>base;

        if(base=="bin"){
            cout<<bin_dec(num)<<" dec"<<endl; //funciona kkkk
            cout<<bin_hex(num)<<" hex"<<endl; //ok
        }else if(base=="dec"){
            cout<<dec_hex(num)<<" hex"<<endl; //ok
            cout<<dec_bin(num)<<" bin"<<endl; //ok
        }else{
            cout<<hex_dec(num)<<" dec"<<endl; //ok
            cout<<hex_bin(num)<<" bin"<<endl; //ok
        }

        cout<<endl;
    }

    return 0;
}
#include<iostream>
#include<string>
#include <algorithm> // Required for reverse
using namespace std;
    
long long bin_dec(string n){
    long long mul=1, res=0;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]=='1') res+=mul;
        mul*=2;
    }

    return res;
}

string dec_bin(long long n){
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
    
    //cout<<n<<" "<<res1<<endl;

    return res1;
}

string sum(string a,string b){
    string s="";
    int i=a.size()-1, j=b.size()-1;
    while(i>=0 || j>=0){
        char da='0', db='0';
        if(i>=0) da=a[i];
        if(j>=0) db=b[j];
        i--; j--;
        
        if(da=='1' && db=='1') s+="0";
        else if(da=='0' && db=='0') s+="0";
        else s+="1";
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    
    long long a,b;
    while(cin>>a>>b){
        
        string aBin=dec_bin(a);
        string bBin=dec_bin(b);
        
        string soma=sum(aBin, bBin);
        
        long long res=bin_dec(soma);
        cout<<res<<endl;
        
    }
    
    return 0;
}

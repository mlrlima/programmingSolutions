#include<iostream>
#include<string>
using namespace std;


// questao:  https://onlinejudge.org/external/7/713.pdf


// atv: https://github.com/c3-disciplina-ed1/2024-1-minf-0301-atividade-03-mlrlima/blob/main/READMES/T02SinglyLinkedLists/P02AddTwoNumbersII.md

//codigo da atv: https://github.com/c3-disciplina-ed1/2024-1-minf-0301-atividade-03-mlrlima/blob/main/src/algorithms/sumdigits.c

string somar(string n1,string n2){
    string resposta="";
    int i=0, resto=0;
    bool primeiro=true;
    while(i<n1.size() || i<n2.size()){
        int x=0;
        if(i<n1.size()){
            x+=n1[i]-'0'; //zero eh 48
        }
        if(i<n2.size()){
            x+=n2[i]-'0';
        }

        x+=resto;
        int printar=x%10;
        resto=x/10;

        if(!primeiro){
            resposta+=char(printar+'0');
        }
        else if(printar!=0){
            resposta+=char(printar+'0');
            primeiro=false;
        }

        i++;
    }

    while(resto>0){
        resposta+=char((resto%10)+'0');
        resto/=10;
    }

    if(resposta==""){
        resposta="0";
    }

    return resposta;
}

int main(){

    string n1,n2;
    int n;
    cin>>n;
    while(n--){
        cin>>n1>>n2;
        cout<<somar(n1,n2)<<endl;
    }

    return 0;
}


/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string v1,v2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v1>>v2;
        int j=0;

        int n,aux,printar, res=0;
        bool primeiro=true;
        while(true){
            if(j>=v1.size() && j>=v2.size()){
                break;
            }

            if(j>=v1.size()){
               n=v2[j]-'0';
               n+=res;
               printar=n%10;
               res=n/10;
            }
            else if(j>=v2.size()){
                n=v1[j]-'0';
                n+=res;
                printar=n%10;
                res=n/10;
            }
            else{
                int n1=v1[j]-'0';
                int n2=v2[j]-'0';
                n=n1+n2+res;
                printar=n%10;
                res=n/10;
            }


            if(printar==0 && primeiro==true){
                j++;
            }
            else{
                j++;
                primeiro=false;
                cout<<printar;
            }
        }


        while(res>0){
            printar=res%10;
            cout<<printar;
            res/=10;
        }

        cout<<endl;
    }


}


*/
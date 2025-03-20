#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        string expressao;
        cin>>expressao;
        
        if(expressao.size()%2==1){
            printf("N\n");
            continue;
        }
        
        bool jafoi=false;
        vector <char> open;
        int j=0;
        while(j<expressao.size()){
            if(expressao[j]=='(' || expressao[j]=='[' || expressao[j]=='{'){
                open.push_back(expressao[j]);
                j++;
                continue;
            }
            
            if(open.size()==0){
                printf("N\n");
                jafoi=true;
                break;
            }
            char a;
            if(expressao[j]==')'){
                a=open.back();
                open.pop_back();
                if (a!='('){
                    printf("N\n");
                    jafoi=true;
                    break;
                }
            }
            else if(expressao[j]==']'){
                a=a=open.back();
                open.pop_back();
                if (a!='['){
                    printf("N\n");
                    jafoi=true;
                    break;
                }
            }
            else{
                a=a=open.back();
                open.pop_back();
                if (a!='{'){
                    printf("N\n");
                    jafoi=true;
                    break;
                }
            }
            j++;
        }
        
        if(open.size()>0 && !jafoi){
            printf("N\n");
            continue;
        }
        
        if(!jafoi){
            printf("S\n");
        }
    }
    
    return 0;
}

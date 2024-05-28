#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int n, k;
    string s;
    cin>>n>>k>>s;
    //scanf("%d %d",&n,&k);
    //scanf("%s",&s);

    /*for(int i=0;i<n;i++){
        scanf("%c",&s[i]);
    }*/

    int i=-1, j=0, cont=0, maior=1, q=k;
    while(j<n){
        //cout<<endl<<"**"<<j<<" "<<i<<" "<<q<<" "<<s[j]<<" "<<maior<<endl;

        if(s[j]=='a'){
            j++;
        //    cout<<" 1";
        }
        else if(q>0){
            q--;
            j++;
        //    cout<<" 2";
        }
        else{
            if(j-i>maior){
                maior=j-i;
            }
            i++;
            while(i<n && s[i]!='b'){
                i++;
            }
            q++;
        //    cout<<" 3";
        }
    }
    if(j-i>maior){
        maior=j-i;
    }

    i=-1; j=0; cont=0; q=k;
    while(j<n){
        if(s[j]=='b'){
            j++;
        }
        else if(q>0){
            q--;
            j++;
        }
        else{
            if(j-i>maior){
                maior=j-i;
            }
            i++;
            while(i<n && s[i]!='a'){
                i++;
            }
            q++;
        }
    }
    if(j-i>maior){
        maior=j-i;
    }

    printf("%d\n",maior-1);

    return 0;
}
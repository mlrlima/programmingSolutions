#include<iostream>
using namespace std;

int main(){
    
    int x,y,m=0,n=0;
    scanf("%d %d",&x,&y);
    int escada[x][y];
    
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&escada[i][j]);
        }
    }
    
    while(m<x && n<y){
        //cout<<"**"<<m<<" "<<n<<endl;
        if(escada[m][n]==0){
            for(int i=m+1;i<x;i++){
                if(escada[i][n]!=0){
                    printf("N\n");
                    return 0;
                }
            }
            n++;
            continue;
        }
        else{
            for(int i=m+1;i<x;i++){
                if(escada[i][n]!=0){
                    printf("N\n");
                    return 0;
                }
            }
            m++;
            n++;
        }
        
    }
    
    printf("S\n");
    return 0;
}

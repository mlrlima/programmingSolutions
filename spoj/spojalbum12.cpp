#include<iostream>
using namespace std;
 
int main(){
 
    int x,y,x1,y1,x2,y2;
    scanf("%d %d %d %d %d %d",&x,&y,&x1,&y1,&x2,&y2);
 
    if(x1<=x && x2<=x && y1+y2<=y){
        printf("S\n");
        return 0;
    }
 
    if(x1<=x && y2<=x && y1+x2<=y){
        printf("S\n");
        return 0;
    }
 
    if(y1<=x && x2<=x && x1+y2<=y){
        printf("S\n");
        return 0;
    }
 
    if(y1<=x && y2<=x && x1+x2<=y){
        printf("S\n");
        return 0;
    }
 
    if(y1<=y && y2<=y && x1+x2<=x){
        printf("S\n");
        return 0;
    }
 
    if(y1<=y && x2<=y && x1+y2<=x){
        printf("S\n");
        return 0;
    }
 
    if(x1<=y && y2<=y && y1+x2<=x){
        printf("S\n");
        return 0;
    }
 
    if(x1<=y && x2<=y && y1+y2<=x){
        printf("S\n");
        return 0;
    }
 
    printf("N\n");
 
    return 0;
}  

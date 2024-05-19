#include<iostream>
using namespace std;

int main(){

    int students, l, ml,total;
    scanf("%d %d %d",&students,&l,&ml);

    ml*=students;

    total=ml/(l*1000);
    if(ml%(l*1000)>0){
        total+=1;
    }

    printf("%d\n",total*l);

    return 0;
}
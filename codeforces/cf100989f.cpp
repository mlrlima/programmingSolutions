#include<iostream>
#include<map>
using namespace std;

int main(){

    int students, places, q;scanf("%d %d %d",&students, &places, &q);
    map<int,int> s;
    map<int,int> p;
    int uncovered=places;
    for(int i=1;i<=students;i++){
        int a;scanf("%d",&a);
        s[i]=a;
        p[a]++;
        if(p[a]==1) uncovered--;
    }

    for(int i=0;i<q;i++){
        int a,b;scanf("%d %d",&a,&b);
        p[s[a]]--;
        if(p[s[a]]==0) uncovered++;

        s[a]=b;
        p[b]++;
        if(p[b]==1) uncovered--;  
        
        printf("%d\n",uncovered);
    }

    return 0;
}
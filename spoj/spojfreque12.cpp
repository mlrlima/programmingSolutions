#include <iostream>
#include<set>
using namespace std;

int main() {
    
    int n, a, cont=0;
    set<int> ata;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        ata.insert(a);
    }
    int s=ata.size();
    printf("%d\n", s);
    
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, c, nota, a=0, turma=0;
    vector <pair <int, int>> alunos;
    while(scanf("%d", &n) && n!=0){
        int maior=0;
        turma++;
        for (int i=0; i<n; i++){
            scanf("%d %d", &c, &nota);
            alunos.push_back(make_pair(c, nota));
            if (nota>maior){
                maior=nota;
            }
        }
        printf("Turma %d\n",turma);
        for (int j=0; j<n; j++){
            if (alunos[j+a].second==maior){
                printf("%d ",alunos[j+a].first);
            }
        }
        printf("\n\n");
        a+=n;
    }
    
    return 0;
}

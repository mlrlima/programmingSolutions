#include <stdio.h>

int main(){
   int n,e,m,h;
   scanf("%d %d %d %d",&e,&m,&h,&n);
   if(e>0 && m>0 && h>0 && e+m+h>=n && n>2){
      printf("YES\n");
   }
   else{
      printf("NO\n");
   }
   return 0;


}

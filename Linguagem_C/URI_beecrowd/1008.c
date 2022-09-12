#include <stdio.h>
 
int main() {
 
   int num,t;
   double valor;
   
   scanf("%d %d %lf",&num,&t,&valor);
   
   printf("NUMBER = %d\n",num);
   printf("SALARY = U$ %.2lf\n",(t * valor));
 
 
    return 0;
}

//Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, 
//com um dígito após o ponto decimal.

#include <stdio.h>
 
int main() {
 
   int i = 0,pos = 0;
   double med,x,soma = 0;
   
   for(i = 0;i < 6;i++){
       scanf("%lf",&x);
        if(x > 0){
           pos ++;
           soma += x;
       }
   }
   
   med = soma/pos;
   printf("%d valores positivos\n",pos);
   printf("%.1lf\n",med);
 
    return 0;
}

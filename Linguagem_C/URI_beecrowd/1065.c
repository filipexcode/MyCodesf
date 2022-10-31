//Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

#include <stdio.h>
 
int main() {
 
   int valor,i,x;
   
   for(i = 1;i <= 5;i++){
       scanf("%d",&valor);
       if(valor % 2 == 0){
           x++;
       }
   }
   
   printf("%d valores pares\n",x);
 
    return 0;
}

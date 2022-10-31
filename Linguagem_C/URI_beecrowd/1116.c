//Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. 
//Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.

#include <stdio.h>

int main(){
  
      int t,n,m;
      double  d;
     
      scanf("%d",&t);
      
      while(t--){
            scanf("%d %d",&n,&m);
            if(m==0){
            printf("divisao impossivel\n");
            }else{
                  d=(double) n/m;
                  printf("%.1lf\n",d);
            }
      }
      return 0;
}

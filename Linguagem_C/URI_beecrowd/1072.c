//Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
//Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

#include <stdio.h>
 
int main() {
 
   int N,X,i,in=0,out=0;
   
   scanf("%d",&N);
  
   for(i=0;i<+N;i++){
       scanf("%d",&X);
       if(X >= 10 && X <= 20){
           in ++;
       }else{
           out ++;
       }
   }
   
   printf("%d in\n",in);
   printf("%d out\n",out);
   
    return 0;
}

//Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, 
//quantos valores digitados foram positivos e quantos valores digitados foram negativos.


#include <stdio.h>
 
int main() {
 
    int i,imp=0,par=0,pos=0,neg=0,valor;
    
    for(i=0;i<5;i++){
        scanf("%d",&valor);
        
        if(valor % 2 == 0){
            par++;
        }else{
            imp++;
        }if(valor > 0){
            pos++;
        }if(valor < 0){
            neg++;
        }
        
        
    }
    
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",imp);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    
    return 0;
}

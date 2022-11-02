//   Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais,
//cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2,
//o segundo valor tem peso 3 e o terceiro valor tem peso 5.

#include <stdio.h>
 
int main() {
 
    int n,i;
    float a,b,c,tot,media;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        scanf("%f %f %f",&a,&b,&c);
        tot = a*2 + b*3 + c*5;
        media = tot/10;
        printf("%.1f\n",media);
    }
    return 0;
}

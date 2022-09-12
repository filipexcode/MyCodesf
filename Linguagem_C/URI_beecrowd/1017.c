#include <stdio.h>
 
int main() {
 
    int t,v;
    double Distancia,Consumo;
    
    scanf("%d",&t);
    scanf("%d",&v);
    
    Distancia = t * v;
    Consumo = Distancia / 12;
    
    printf("%.3lf\n",Consumo);
    return 0;
}

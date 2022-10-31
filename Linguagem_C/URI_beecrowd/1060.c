#include <stdio.h>
 
int main() {
 
    int x,i;
    float valor;
    
    for(i=1;i<=6;i++){
        scanf("%f",&valor);
        if(valor > 0){
            x++;
        }
        
    }
    printf("%d valores positivos\n",x);
 
    return 0;
}

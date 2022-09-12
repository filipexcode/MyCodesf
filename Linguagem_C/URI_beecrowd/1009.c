#include <stdio.h>
 
int main() {
 
    char nome[10];
    
    double s,v,sf;
    
    scanf("%s",&nome);
    scanf("%lf %lf",&s,&v);
    
    sf = s + (v * 0.15);
    
    printf("TOTAL = R$ %.2lf\n",sf);
    
    
    return 0;
}

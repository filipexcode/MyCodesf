#include <stdio.h>
 
int main() {
 
    double A,B,C,Ap,Bp,Cp,media;
    
    scanf("%lf %lf %lf",&A,&B,&C);
    
    Ap = A * 2;
    Bp = B * 3;
    Cp = C * 5;
    
    media = (Ap + Bp + Cp) / 10;
    
    printf("MEDIA = %.1lf\n",media);
    
 
    return 0;
}

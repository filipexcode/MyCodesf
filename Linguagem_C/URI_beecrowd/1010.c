#include <stdio.h>
 
int main() {
 
    int cp1,cp2,np1,np2;
    double vp1,vp2,vfp1,vfp2,total;
    
    scanf("%d %d %lf",&cp1,&np1,&vp1);
    scanf("%d %d %lf",&cp2,&np2,&vp2);
    
    vfp1 = np1 * vp1;
    vfp2 = np2 * vp2;
    total = vfp1 + vfp2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    
    
    return 0;
}

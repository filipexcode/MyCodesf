#include <stdio.h>
 
int main() {
    
    int N,hps,h,m,s;
    
    hps = 3600;
    
    scanf("%d",&N);
    
    h = N/hps;
    m = (N -(hps*h))/60;
    s = (N-(hps*h)-(m*60));
    
    printf("%d:%d:%d\n",h,m,s);
 
    return 0;
}

//Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
//1 x N = N      2 x N = 2N        ...       10 x N = 10N


include <stdio.h>

int main() {
  
 int num, mult;

    scanf("%d",&num);
  
        mult = 1*num;
  
    printf("1 x %d = %d\n",num,mult);
        mult = 2*num;
  
    printf("2 x %d = %d\n",num,mult);
        mult = 3*num;
  
    printf("3 x %d = %d\n",num,mult);
        mult = 4*num;
  
    printf("4 x %d = %d\n",num,mult);
        mult = 5*num;
  
    printf("5 x %d = %d\n",num,mult);
        mult = 6*num;
  
    printf("6 x %d = %d\n",num,mult);
        mult = 7*num;
  
    printf("7 x %d = %d\n",num,mult);
        mult = 8*num;
  
    printf("8 x %d = %d\n",num,mult);
        mult=9*num;
  
    printf("9 x %d = %d\n",num,mult);
        mult = 10*num;

    printf("10 x %d = %d\n",num,mult);
  
       return 0;
}

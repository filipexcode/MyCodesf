#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a,b,med;
	
	printf("Insira o valor de A: ");
	scanf("%d",&a);
		
	printf("Insira o valor de B: ");
	scanf("%d",&b);
	
	if(a == 0 || b == 0){
		printf("Programa encerrado\n");
	}else{
		med = (a + b) / 2;
		printf("Media dos valores e igual a %d",med);
	}

	return 0;
}

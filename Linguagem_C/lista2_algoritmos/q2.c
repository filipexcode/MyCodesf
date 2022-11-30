#include <stdio.h>
#include <stdlib.h>




int main() {
	
	int a,b,c,d,e,cont = 0;
	
	printf("Insira 5 valores: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a < 0 || b < 0 || c < 0 || d < 0 || e < 0){
		cont ++;
	}
	
	printf("A leitura encontrou %d numeros negativos\n",cont);
	
	return 0;
}

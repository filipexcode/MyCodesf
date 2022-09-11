#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int tamanho;
	int rolo;
	int ma;
	
	
	printf("Digite aqui a quantidade de metros: ");
	scanf("%d",&tamanho);
	
	rolo =	tamanho / 50;
	ma = tamanho % 50;
	
	printf ("A quantidade de rolos necessaria e: %d \n",rolo);
	printf ("A quantidade de metros avulsos e: %d",ma);
	
	
	return 0;
}

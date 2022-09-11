#include <stdio.h>
#include <stdlib.h>


int main() {
	int idade = 0;
	char nome[80];
	char sexo[1];
	
	printf("Informe o Nome: ");
	scanf(" %[^\n]s",&nome);
	
	printf("Informe a idade; ");
	scanf("%d", &idade);
	
	printf("Informe o sexo: ");
	scanf("%s", &sexo);
	
	
	
	printf ("O nome informado foi: %s \n",nome);
    printf ("A idade informada foi: %d \n",idade);
    printf ("O sexo informado foi: %s \n",sexo);
	
	
	
	return 0;
}

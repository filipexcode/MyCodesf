#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[50],cpf[11],end[50],sexo[1],anona[10];
	int idade,numeroend;
	float altura;

	printf("Qual o seu nome? ");
	scanf(" %[^\n]s",&nome);

	printf("Qual a sua idade? ");
	scanf("%d",&idade);

	printf("Qual o seu sexo? ");
	scanf("%s",&sexo);

	printf("Qual a sua altura? ");
	scanf("%f",&altura);
	
	printf("Qual o seu endereco? ");
	scanf(" %[^\n]s",&end);
	
	printf("Qual o numero do endereco ? ");
	scanf("%d",&numeroend);

	printf("Qual o seu CPF? ");
	scanf("%s",&cpf);
	
	printf("Qual a data do seu nascimento ? ");
	scanf("%s",&anona);


		printf("----------------------------------------\n");
		printf("DADOS INFORMADOS\n");
		printf("----------------------------------------\n");



	printf("NOME = %s\n",nome);
	printf("IDADE = %d\n",idade);
	printf("SEXO = %s\n",sexo);
	printf("ALTURA = %.2f\n",altura);
	printf("ENDERECO = %s\n",end);
	printf("NUMERO(endereco) = %d\n",numeroend);
	printf("CPF = %s\n",cpf);
	printf("ANO DE NASCIMENTO = %s\n",anona);

		printf("----------------------------------------\n");

	return 0;
}

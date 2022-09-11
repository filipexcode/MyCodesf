#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float nota1, nota2, nota1pe, nota2pe, resultado;
	
	printf ("Digite sua nota na primeira prova: ");
	scanf ("%f", &nota1);	
	printf ("Digite sua nota na segunda prova: ");
	scanf ("%f", &nota2);
	
	nota1pe = nota1 * 3.5;
	nota2pe = nota2 * 7.5;
	resultado = (nota1pe + nota2pe)/11;
	
	printf ("A nota final do Aluno e: %f\n", resultado);
	system("pause");

	return 0;
}

//Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

#include <stdio.h>

int main(){

	int N,i;

	scanf("%d",&N);

	for (i = 0; i < 10000; ++i){

		if (i % N == 2)
			printf("%d\n",i);
	}

	return 0;
}

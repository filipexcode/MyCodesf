#include <stdio.h>

int main() {
	
	int i,num,soma = 0;
	
	
	for(i=0;i<5;i++){
		scanf("%d",&num);
		soma = soma + num;
	}
	printf("%d\n",soma);
	
	return 0;
}

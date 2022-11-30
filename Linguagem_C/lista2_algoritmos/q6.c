#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int valor,i, imp = 0, par = 0;
	
	for(i = 1;i <= 10;i++){
		
		printf("Insira um valor\n");
		scanf("%d",&valor);
		
		if(valor % 2 == 0){
			par ++;
		}else{
			imp ++;
		}
	}
	
	printf("Foram encontrados %d valores pares\n",par);
	printf("Foram encontrados %d valores impares\n",imp);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int idade;
	
	printf("Qual a sua idade? ");
	scanf("%d",&idade);
	
	if(idade < 0){
		printf("NAO NASCEU\n");
	}else{
		if(idade < 16){
			printf("NAO VOTA\n");
		}else{
			if(idade < 18){
				printf("VOTO OPCIONAL\n");
			}else{
				if(idade < 65){
					if(idade == 41){
						printf("NAO VOTA E GANHA PREMIO\n");
					}else{
						printf("VOTO OBRIGATORIO");
					}
				}else{
					if(idade == 88){
						printf("NAO VOTA E GANHA PREMIO\n");
					}else{
						printf("VOTO OPCIONAL\n");
					}
				}	
			}
		}
	}
	return 0;
}

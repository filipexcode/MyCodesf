#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int senha,senhav,i=1;
	
	printf("Cadastre uma senha: ");
	scanf("%d",&senha);
	
	do{
	printf("Verifique a senha: ");
	scanf("%d",&senhav);
	
		if(senhav == senha){
			printf("Acesso Liberado\n");
		}else{
			printf("Senha incorreta\n");
			i++;
		}
		
		if(i > 3){
			printf("Conta bloqueada\n");
		}
	}while(i <= 3);
	
			
	
	
		
	return 0;
}

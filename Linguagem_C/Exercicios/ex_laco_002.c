#include <stdio.h>

int main(){
	
	int i;
	
	for(i=0;i<=100;i++){
		if(i % 15 == 0){
			printf("M15\n");
		}else{
			if(i % 10 == 0){
				printf("M10\n");
			}else{
				if(i % 5 == 0){
					printf("M5\n");
				}else{
					printf("%d\n",i);
				}
			}
		}
	}

	return 0;
}

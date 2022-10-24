#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int x = 0;
	
	for(x=1;x<=100;x++){
		if(x % 5 == 0){
			printf("M5\n");
		}else{
			printf("%d\n",x);
		}
		
	}
	return 0;
}

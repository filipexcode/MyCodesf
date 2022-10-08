#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1 = 0, n2 = 0;
    char operador;

    printf("---------CALC---------\n");

    printf("Use os seguintes simbolos para os operadores: \n");
    printf("+ = ADICAO\n");
    printf("- = SUBTRACAO\n");
    printf("x = MULTIPLICACAO\n");
    printf("/ = DIVISAO\n");


    printf("Informe o N1: ");
    scanf("%d",&n1);

    printf("Informe o operador: ");
    scanf(" %c",&operador);

    printf("Informe o N2: ");
    scanf("%d",&n2);

    if(operador == '+'){
        printf("SOMA = %d\n",n1 + n2);
    }else if(operador == '-'){
        printf("SUBTRACAO = %d\n",n1 - n2);
    }else if(operador == 'x'){
        printf("MULTIPLICACAO = %d\n",n1 * n2);
    }else if(operador == '/'){
        printf("DIVISAO = %d\n",n1 / n2);
    }

        return 0;

}

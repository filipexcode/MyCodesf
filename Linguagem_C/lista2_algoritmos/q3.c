#include <stdio.h>

typedef struct info
{

    float salary;
    int kids;

} Info;

int main()
{

    Info info[255];
    int familyCount;
    int index = 0;

    while (1)
    {
        Info newInfo;

        printf("-----------------------");
        printf("Informacoes da familia:\n\n", index + 1);

        printf("Informe o salario da familia: ");
        scanf("%f", &newInfo.salary);

        if (newInfo.salary < 0)
        {
            printf("\n");
            break;
        }

        printf("Informe quantos filhos ha¡ na familia: ");
        scanf("%d", &newInfo.kids);

        info[index] = newInfo;
        index++;
        printf("\n");
    }

    familyCount = index;
    float salarySum = 0;
    int kidsSum = 0;
    float biggerSalary = 0;
    int salariesLessOrEqualThan100 = 0;

    for (index = 0; index < familyCount; index++)
    {

        salarySum += info[index].salary;
        kidsSum += info[index].kids;

        if (info[index].salary > biggerSalary)
        {
            biggerSalary = info[index].salary;
        }

        if (info[index].salary <= 100)
        {
            salariesLessOrEqualThan100++;
        }
    }

    printf("Media do salario da populacao: %.2f\n", salarySum / (float)familyCount);
    printf("Media de filhos da populacao: %.2f\n", (float)kidsSum / (float)familyCount);
    printf("Maior salario: R$%.2f\n", biggerSalary);
    printf("Percentual de pessoas com salario de ate R$100,00: %.2f\%\n", (float)salariesLessOrEqualThan100 / (float)familyCount * 100);
}

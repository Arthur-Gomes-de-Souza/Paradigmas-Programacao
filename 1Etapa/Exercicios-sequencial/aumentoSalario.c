#include <stdio.h>

int main()
{
    float salario, aumento;

    printf("Insira o salario do funcionario: ");
    scanf("%f", &salario);

    aumento = salario + 0.25*salario;

    printf("Salario com aumento: R$%.2f\n", aumento);

    return 0;
}

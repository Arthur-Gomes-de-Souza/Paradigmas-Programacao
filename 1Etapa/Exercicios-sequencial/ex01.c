#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2,num3,soma,produto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;
    produto = num1 * num2 * num3;

    printf("Soma = %d\n", soma);
    printf("Produto = %d\n", produto);

    return 0;
}

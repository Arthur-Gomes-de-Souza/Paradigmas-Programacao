// FUNÇÃO: Verificar se um numero é par ou impar.
#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Numero par.\n");
    }
    else
    {
        printf("Numero impar.\n");
    }
    return 0;
}
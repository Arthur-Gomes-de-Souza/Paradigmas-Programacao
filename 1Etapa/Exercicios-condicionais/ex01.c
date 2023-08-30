// FUNÇÃO: Ler dois numeros e imprimir o maior deles.
#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("Maior numero: %d\n", n1);
    }
    else
    {
        printf("Maior numero: %d\n", n2);
    }
    return 0;
}

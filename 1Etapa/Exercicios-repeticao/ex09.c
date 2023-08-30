// FUNÇÃO: Ler 100 números inteiros e exibir o produto dos números.
#include <stdio.h>

int main()
{
    int tam = 100, produto = 1;
    int numeros[tam];

    for (int i = 1; i <= tam; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[i]);

        produto *= numeros[i];
    }

    printf("Produto dos numeros = %d\n", produto);

    return 0;
}
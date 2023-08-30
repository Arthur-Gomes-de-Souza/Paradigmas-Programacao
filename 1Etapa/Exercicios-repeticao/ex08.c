// FUNÇÃO: Ler 30 números inteiros e exibir a soma dos números divisíveis por 5.
#include <stdio.h>

int main()
{
    int tam = 30, soma = 0;
    int numeros[tam];

    for (int i = 1; i <= tam; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 5 == 0)
        {
            soma += numeros[i];
        }
    }

    printf("Soma dos numeros divisiveis por 5 = %d\n", soma);
    
    return 0;
}

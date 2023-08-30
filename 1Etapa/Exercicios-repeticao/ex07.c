// FUNÇÃO: Ler n numeros informados pelo usuário e exibir a soma dos numeros impares.
#include <stdio.h>

int main()
{
    int tam, soma = 0;

    printf("Informe a quantidade de numeros inteiros: ");
    scanf("%d", &tam);

    for (int i = 1; i <= tam; i++)
    {
        if (i % 2 == 1)
        {
            soma += i;
        }
    }

    printf("Soma dos numeros impares = %d\n", soma);

    return 0;
}

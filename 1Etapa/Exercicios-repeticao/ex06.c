// FUNÇÃO: Ler 5 numeros inteiros e exibir a soma dos numeros.
#include <stdio.h>
int main()
{
    int tam = 5, soma = 0;
    int numeros[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("Soma dos numeros = %d", soma);
    
    return 0;
}

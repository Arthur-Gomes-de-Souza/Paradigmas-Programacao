// FUNÇÃO: Algoritmo que calcula e imprima a soma dos números entre 1 e 20
#include<stdio.h>

int main()
{
    int soma=0;

    for (int i = 1; i <= 20; i++)
    {
        soma += i;
    }

    printf("Soma = %d", soma);
    

    return 0;
}

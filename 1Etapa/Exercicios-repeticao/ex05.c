// FUNÇÃO: Algoritmo que calcula e imprima o produto dos números entre 1 e 20.
#include<stdio.h>

int main()
{
    int produto = 1;

    for (int i = 1; i <= 20; i++)
    {
        produto *= i;
    }

    printf("Produto = %d\n", produto);
    

    return 0;
}
#include <stdio.h>

int main()
{
    int i, tam = 3, soma;
    int numeros[tam];
    float media;

    for ( i = 0; i < tam; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 3;

    printf("Media aritmetica = %d\n", media);
    

    return 0;
}

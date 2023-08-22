#include <stdio.h>

int main(int argc, char const *argv[])
{
    float notas[5];
    float media, soma;

    for (int i = 0; i <= 4; i++)
    {
        printf("Digite a nota obtida: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 5;

    printf("Media = %.2f\n", media);

    return 0;
}

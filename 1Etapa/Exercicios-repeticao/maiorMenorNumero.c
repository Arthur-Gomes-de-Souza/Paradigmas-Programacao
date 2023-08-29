#include <stdio.h>

int main()
{
    int maior = 0, menor = 0, numero = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (i == 0)
        {
            maior = numero;
            menor = numero;
        }
        else
        {
            if (numero > maior)
            {
                maior = numero;
            }
            else if (numero < menor)
            {
                menor = numero;
            }
        }
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}

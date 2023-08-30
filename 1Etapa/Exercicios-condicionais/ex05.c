// FUNÇÃO: Um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.
#include <stdio.h>
#include <math.h>

int main()
{
    int opcao;

    printf("Menu de opcoes:\n");
    printf("1. Somar dois numeros.\n");
    printf("2. Raiz quadrada de um numero.\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            somar();
            break;
        case 2:
            raiz();
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

void somar()
{
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("A soma de %d e %d = %d.\n", a, b, a + b);
}

void raiz()
{
    int a;
    float raiz;

    printf("Digite um numero: ");
    scanf("%d", &a);

    raiz = sqrt(a);

    printf("A raiz quadrada de %d = %d.\n", a, raiz);
}


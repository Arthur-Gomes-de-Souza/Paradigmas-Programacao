#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome[20];
    float media, nota1, nota2, nota3;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("Nome: %s\n", nome);
    printf("Nota final: %.2f\n", media);
    return 0;
}

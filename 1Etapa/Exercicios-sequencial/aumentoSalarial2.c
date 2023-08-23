#include <stdio.h>

int main()
{
    const int NUMERO_CASAS_DECIMAIS = 2;

    float salario, aumento;
    int porcentagem;

    printf("Bem-vindo ao programa de aumento salarial!\n\n");

    printf("Insira o salario do funcionario: ");
    scanf("%f", &salario);

    printf("Insira o percentual de aumento (sem o simbolo): ");
    scanf("%d", &porcentagem);

    if (porcentagem < 0 || porcentagem > 100) {
        printf("Erro: o percentual deve estar entre 0 e 100.\n");
        return 1;
    }

    aumento = salario + (porcentagem / 100.0) * salario;

    printf("Salario com aumento: R$%.2f\n", aumento);

    return 0;
}
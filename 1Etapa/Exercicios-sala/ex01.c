// DESCOBRE A AREA DO TRIANGULO
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float base, altura, area;

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é: %.2f\n", area);
    return 0;
}

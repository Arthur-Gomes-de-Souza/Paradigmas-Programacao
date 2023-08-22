#include <stdio.h>

int main()
{
    int baseMenor, baseMaior, altura;
    float area;

    printf("Insira a base menor do trapezio: ");
    scanf("%d", &baseMenor);
    printf("Insira a base maior do trapezio: ");
    scanf("%d", &baseMaior);
    printf("Insira a altura do trapezio: ");
    scanf("%d", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("Area do trapezio = %.2f\n", area);

    return 0;
}

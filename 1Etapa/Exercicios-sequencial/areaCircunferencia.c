#include <stdio.h>
#include <math.h>

int main()
{
    float raio, area;

    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    area = 3,14 * pow(raio,2);

    printf("Area da circunferencia: %.2f\n", area);

    return 0;
}

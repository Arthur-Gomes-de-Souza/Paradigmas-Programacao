#include <stdio.h>
#include <math.h>

int main()
{
    float r1, r2, a, b, c;

    printf("Insira o coeficiente a: ");
    scanf("%f", &a);
    printf("Insira o coeficiente b: ");
    scanf("%f", &b);
    printf("Insira o coeficiente c: ");
    scanf("%f", &c);

    r1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / (2 * a);

    printf("1 Raiz = %.2f\n", r1);
    printf("2 Raiz = %.2f\n", r2);

    return 0;
}

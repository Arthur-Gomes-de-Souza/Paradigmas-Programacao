#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4, b = 5, c = 1;
    float result1,result2,result3,result4,result5;

    result1 = b * a - pow(b,2) / 4 * c;
    
    result2 = (a * b) / pow(3,2);
    
    result3 = (((b + c) / 2 * a + 10) * 3 * b) - 6;
    
    result4 = 7 * 10 - 50 % 3 * 4 + 9;

    result5 = (7 * (10 - 5) % 3) * 4 + 9;

    printf("Resultado 1 = %f\n", result1);
    printf("Resultado 2 = %f\n", result2);
    printf("Resultado 3 = %f\n", result3);
    printf("Resultado 4 = %f\n", result4);
    printf("Resultado 5 = %f\n", result5);

    return 0;
}

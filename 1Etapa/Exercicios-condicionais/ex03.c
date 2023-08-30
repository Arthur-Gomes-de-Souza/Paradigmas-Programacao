// FUNÇÃO: resolver as expressões em pseudocódigo abaixo.
#include <stdio.h>
#include <math.h>

int main()
{
    int r = 2, s = 5, t = -1, x = 3, y = 1, z = 0;

    if ((r >= 5) || (t > z) && (x - y + r > 3 * z) == 1)
    {
        printf("Expressao A: Verdadeira.\n");
    }
    else
    {
        printf("Expressao A: Falsa.\n");
    }

    if (((abs(t) + 3 >= 4) && !(3 * r / 2 < s * 3)) == 1)
    {
        printf("Expressao B: Verdadeira.\n");
    }
    else
    {
        printf("Expressao B: Falsa.\n");
    }
    
    if (((x == 2) || (y == 1) && (z == 0) || (r > 3) && (s < 10)) == 1)
    {
        printf("Expressao C: Verdadeira.\n");
    }
    else
    {
        printf("Expressao C: Falsa.\n");
    }

    if (((r != s) || !(sqrt(r) < sqrt(x)) && (4327 * x * s * z == 0)) == 1)
    {
        printf("Expressao D: Verdadeira.\n");
    }
    else
    {
        printf("Expressao D: Falsa.\n");
    }    

    return 0;
}

#include <stdio.h>

int main()
{
    printf("Numeros pares: \n");

    for (int i = 3; i < 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int i, tam = 5;
    float numeros[tam];
    srand(time(NULL));

    for ( i = 0; i < tam; i++)
    {
        numeros[i] = rand() %100;
    }
    for ( i = 0; i < tam; i++)
    {
        printf("%2.f, ", numeros[i]);
    }
    
    
    return 0;
}


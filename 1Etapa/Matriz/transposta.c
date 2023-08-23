#include <stdio.h>

int main()
{
    int nLin = 5, nCol = 5;
    int matriz[nLin][nCol];

    for (int i = 0; i < nLin; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            printf("Digite o valor da linha %d coluna %d:", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }

    printf("Matriz original: \n");
    for ( int i = 0; i < nLin; i++)
    {
        for ( int j = 0; j < nCol; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("========\n");

    printf("Matriz transposta: \n");
    for (int i = 0; i < nLin; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}

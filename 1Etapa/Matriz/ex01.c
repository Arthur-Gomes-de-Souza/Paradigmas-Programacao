#include <stdio.h>

int main()
{
    int nLin = 2, nCol = 3;
    int mat[nLin][nCol];

    for ( int i = 0; i < nLin; i++)
    {
        for ( int j = 0; j < nCol; j++)
        {
            printf("Digite o valor da linha %d coluna %d:", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    for ( int i = 0; i < nLin; i++)
    {
        for ( int j = 0; j < nCol; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

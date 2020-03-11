//  Faça um programa que gere uma matriz 8X8
//  preenchendo com ‘1’ as “células” da área destacada
//  da matriz abaixo, e ‘0’ as demais “células”.
//  i<=j

#include <stdio.h>
#include <stdlib.h>
#define t 4
int main()
{
    int mat[t][t], i, j, lado0 = 0, lado1 = 0;
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            scanf("%d", &mat[i][j]);
            while (mat[i][j] != 0 && mat[i][j] != 1)
            {
                printf("digite apenas 0 e 1");
                scanf("%d", &mat[i][j]);
                
            }  
        }
    }
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            if (i <= j)
            {
                lado0 = lado0 + mat[i][j];
            }
            else
            {
                lado1 = lado1 + mat[i][j];
            }
        }
    }
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
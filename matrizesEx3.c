//  Crie um programa para armazenar valores inteiros
//  em duas matrizes quadradas, denominadas A e B,
//  de ordem 2. Em seguida, gerar uma terceira matriz
//  chamada C que é obtida a partir da adição da
//  matriz A e B.

#include <stdio.h>
#include <stdlib.h>
#define t 2
int main()
{
    int matA[t][t], matB[t][t], matC[t][t], i, j;
        
    for (i = 0; i < t; i++)
    {
        for ( j = 0; j < t; j++)
        {
            scanf("%d", &matA[i][j]);
      //  }
    //}

    //for (i = 0; i < t; i++)
    //{
        //for ( j = 0; j < t; j++)
        //{
            scanf("%d", &matB[i][j]);
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
    for (i = 0; i < t; i++)
    {
        for ( j = 0; j < t; j++)
        {
            printf("%d|", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//  Crie um programa para armazenar os valores 0s e
//  1s em uma matriz quadrada de ordem 3. Em
//  seguida verificar se a matriz é uma matriz
//  identidade.
//  Obs: uma matriz identidade é aquela em que os
//  elementos da diagonal principal são iguais a 1 e
//  os demais elementos são iguais a zero.

#include <stdio.h>
#include <stdlib.h>
#define tam 3

int main()
{
    int mat[tam][tam], i, j, dp = 0, demais = 0;
    printf("preencher matriz com 0 ou 1");
    for (i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; j++)
        {
            scanf("%d", &mat[i][j]);
            while (mat[i][j] != 0 && mat[i][j] != 1)
            {
                printf("digite apenas 0 ou 1");
                scanf("%d", &mat[i][j]);
            }               
        }  
    }
    for (i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; j++)
        {
            if (i == j)
            {
                dp = dp + mat[i][j];
            }
            else
            {
                demais = demais + mat[i][j];
            }
        }
    }    
    if (dp == tam && demais == 0)
    {
        printf("matriz identidade");
    }
    else
    {
        printf("nao identidade");
    }
    
    return 0;
}

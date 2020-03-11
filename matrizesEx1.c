//  Crie um programa para inserir valores inteiros em
//  uma matriz 4 x 4. Calcular e imprimir a soma de
//  todos os elementos da matriz.
#include <stdio.h>
#include <stdlib.h>
#define tam 4

int main()
{
    int mat[tam][tam], i, j, soma = 0;
    
    printf("preencher valores da matriz");

    for (i = 0; i < tam; i = i + 1)
    {
        for ( j = 0; j < tam;  j = j + 1) 
        {
            scanf("%d", &mat[i][j]);
            soma = soma + mat[i][j];
        }
    }
    for (i = 0; i < tam; i = i + 1)
    {
        for ( j = 0; j < tam;  j = j + 1) 
        {
             printf("%d|", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n Total da soma dos elementos da matriz: %d", soma);
    return 0;
}
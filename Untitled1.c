/* 11. Crie uma função capaz de somar os elementos das
linhas L1 e L2 de uma matriz. O resultado deve ser colocado na linha L2. */


#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    //Variáveis.
    int matriz[3][3], resultado, soma, somalinha[3][3];
    int i,j;

    printf("\n");
    //Para gerar a matriz.
    printf("\t Indique os elementos da matriz 3x3:\n\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Indique o local: LINHA[%d] - COLUNA[%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //Para mostrar a matriz.
    printf("\n");
    printf("\t Matriz Gerada: \n\n");
       for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\t | %d |", matriz[i][j]);
        }
        printf("\n");
    }
    //Para somar as linhas
       for(i = 0; i < 1; i++)
    {
        for(j = 0; j < 3; j++)
        {
            matriz[1][j] = matriz[1][j] + matriz[0][j];
        }
        printf("\n");
    }
        //Para mostrar de novo, com a soma
    printf("\n");
    printf("\t Matriz Gerada com a soma da L1 e L2 na L2: \n\n");
       for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\t | %d |", matriz[i][j]);
        }
        printf("\n");
    }
}
